/*
	Execution On: Client > Server

	Purpose: Sets up the ACE board actions

	Made by: Silence

*/

// Variables (Defaults)
hasDeployedBasket = false;
// Variables (Defaults)
allowedVehicles = ["MS_CoastguardBasket", "MS_CoastguardBasketNew", "MS_Stretcher"];

mst_fnc_swapBasketAnimation = {
	player switchMove "amovpercmstpsnonwnondnon"; // Swap their animation to this one
};

mst_fnc_swapBasketAnimationKneel = {
	player switchMove "amovpknlmstpsnonwnondnon"; // Swap their animation to this one
};

mst_fnc_swapBasketAnimationBrace = {
	player switchMove "acts_civilhiding_1"; // Swap their animation to this one
};

mst_fnc_swapBasketAnimationStand = {
	player switchMove "acts_briefing_sa_startloop"; // Swap their animation to this one
};

mst_fnc_swapBasketAnimationDead = {
	player switchMove "hubwoundedprone_idle2"; // Swap their animation to this one
};

_action = ['basketStand','Swap Animation - Stand','',{
	call mst_fnc_swapBasketAnimation;
},
{typeOf vehicle player in allowedVehicles}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ['basketKneel','Swap Animation - Kneel','',{
	call mst_fnc_swapBasketAnimationKneel
},
{typeOf vehicle player in allowedVehicles}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ['basketBrace','Swap Animation - Brace','',{
	call mst_fnc_swapBasketAnimationBrace
},
{typeOf vehicle player in allowedVehicles}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ['basketWatch','Swap Animation - Watch','',{
	call mst_fnc_swapBasketAnimationStand
},
{typeOf vehicle player in allowedVehicles}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

_action = ['basketInjured','Swap Animation - Injured','',{
	call mst_fnc_swapBasketAnimationDead
},
{typeOf vehicle player in allowedVehicles}] call ace_interact_menu_fnc_createAction;
[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;

// This is for the baskets, to fix your animations! ^^

mst_fnc_deployHelicopterBasket = {
	basket = "MS_CoastguardBasketNew" createVehicle position player;
	basket setPos (vehicle player modelToWorld [3,2, -1]);
	myRope = ropeCreate [vehicle player, [1,2,0.8], basket, [0,-0.2,1], 5, [], ["RopeEnd", [0,0,0]]];
	titleText ["Ropes have been deployed, basket is ready!","PLAIN DOWN"];
	hasDeployedBasket = true;
};

mst_fnc_deployHelicopterStretcher = {
	basket = "MS_Stretcher" createVehicle position player;
	basket setPos (vehicle player modelToWorld [3,2,-1]);
	myRope = ropeCreate [vehicle player, [1,2,0.8], basket, "SlingLoadCargo1", 4, [], ["RopeEnd", [0,0,0]]];
	myRope = ropeCreate [vehicle player, [1,2,0.8], basket, "SlingLoadCargo2", 4, [], ["RopeEnd", [0,0,0]]];
	myRope = ropeCreate [vehicle player, [1,2,0.8], basket, "SlingLoadCargo3", 4, [], ["RopeEnd", [0,0,0]]];
	myRope = ropeCreate [vehicle player, [1,2,0.8], basket, "SlingLoadCargo4", 4, [], ["RopeEnd", [0,0,0]]];
	titleText ["Ropes have been deployed, stretcher is ready!","PLAIN DOWN"];
	hasDeployedBasket = true;
};

mst_fnc_shortenRope = {
	{
		ropeUnwind [_x, 3, 3];
	} forEach ropes vehicle player;
	titleText ["Ropes have been shortened to 3m!","PLAIN DOWN"];
};

mst_fnc_lengthenRope = { 
	{
		ropeUnwind [_x, 6, 30];
	} forEach ropes vehicle player;
	titleText ["Ropes have been lengthened to 30m!","PLAIN DOWN"];
};

mst_fnc_moveInAllOccupants = {
	{
		_x moveInAny vehicle player;
	} forEach crew basket;
	titleText ["Crew Of Basket Is Secure!","PLAIN DOWN"];
};

mst_fnc_deleteBasket = {
	{
		ropeDestroy _x;
	} forEach ropes vehicle player;
	deleteVehicle basket;
	titleText ["Basket Has Been Secured!","PLAIN DOWN"];
	hasDeployedBasket = false;
};

mst_fnc_moveIntoBasket = {
	_basket = nearestObjects [player, ["Ship"], 20] select 0;
	if (typeOf _basket in allowedVehicles) then {
		player moveInAny _basket;
	} else {
		hint "The rescue basket is not close enough, or non-existent.";
	};
};

// These are the functions for the helicopter > basket. ^^
 
_action = ['mst_deployBasket','Rescue Basket',"\USCG\textures\icon_basket.paa",{},
{"Eurocopter" in typeOf vehicle player}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;
 
_action = ['deployBasket','Deploy Rescue Basket','',{call mst_fnc_deployHelicopterBasket},
{"Eurocopter" in typeOf vehicle player, !hasDeployedBasket}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['deployStretcher','Deploy Rescue Stretcher','',{call mst_fnc_deployHelicopterStretcher},
{"Eurocopter" in typeOf vehicle player, !hasDeployedBasket}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['raiseBasket','Raise Rescue Basket','',{call mst_fnc_shortenRope},
{"Eurocopter" in typeOf vehicle player, hasDeployedBasket, ropeLength (ropes vehicle player select 0) != 3}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['lowerBasket','Lower Rescue Basket','',{call mst_fnc_lengthenRope},
{"Eurocopter" in typeOf vehicle player, hasDeployedBasket, ropeLength (ropes vehicle player select 0) != 30}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['moveBasketCrew','Move Basket Crew Into Vehicle','',{call mst_fnc_moveInAllOccupants},
{"Eurocopter" in typeOf vehicle player, hasDeployedBasket, ropeLength (ropes vehicle player select 0) == 3}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['moveIntoBasket','Move Into Rescue Basket','',{call mst_fnc_moveIntoBasket},
{"Eurocopter" in typeOf vehicle player, hasDeployedBasket, ropeLength (ropes vehicle player select 0) == 3, driver vehicle player != player}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

_action = ['secureBasket','Secure Rescue Basket','',{call mst_fnc_deleteBasket},
{"Eurocopter" in typeOf vehicle player, hasDeployedBasket, ropeLength (ropes vehicle player select 0) == 3}] call ace_interact_menu_fnc_createAction;
["ECXlu_base_F", 1, ["ACE_SelfActions", "mst_deployBasket"], _action, true] call ace_interact_menu_fnc_addActionToClass;

// These actually add the actions, making them functional.