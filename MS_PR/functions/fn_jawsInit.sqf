/*
	Execution On: Client

	Purpose: Sets up ace action for jaws of life

	Made by: Silence

*/

//_action = ['Jaws','Use Jaws of Life','',{_vic = nearestObjects [player, ["Car"], 5] select 0, [] spawn {sleep 5}, _vic setVehicleLock "UNLOCKED"},{primaryWeapon player == "MS_Crusher"}] call ace_interact_menu_fnc_createAction;
//[player, 1, ["ACE_SelfActions"], _action] call ace_interact_menu_fnc_addActionToObject;