/*
	Execution On: Client > Server

	Purpose: Sets up the panic button CBA keybinding

	Made by: Silence/Stevio

*/

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Project Reality - British Emergency Services","Panic1", "Panic Button",
{
	if ("MS_PanicButton" in magazines player) then {
		if(playerSide == west) exitWith {
			[player, "panic"] remoteExec ["say3D", 0];
			sleep 3.332;
			mst_fnc_createMarker = {
				panicMarker = createMarker ["", position player, 1];
				panicMarker setMarkerText format ["PANIC INITIATED BY OFFICER %1 AT GRID: %2", name player, mapGridPosition player];
				panicMarker setMarkerType "mil_warning";
				panicMarker setMarkerColor "ColorRed";
				panicMarker setMarkerSize [1.25, 1.25];
			};

			format ["PANIC INITIATED BY: %1 AT %2", name player, mapGridPosition player] remoteExec ["systemChat", 0];

			[] remoteExec ["mst_fnc_createMarker",0]; 

			{
				if(side player == west) then{
					hint parseText "<t size='2.0' color='#ff0000'>PANIC BUTTON INITIATED</t>";
				};
			} forEach playableUnits;

			player removeItem "MS_PanicButton"; //Removes 1 Panic button from the inventory
			sleep 60;
			deleteMarker panicMarker; 
		};

		if(playerSide ==  resistance) exitWith {
			[player, "panic"] remoteExec ["say3D", 0];
			sleep 3.332;
			mst_fnc_createMarker = {
				panicMarker = createMarker ["", position player, 1];
				panicMarker setMarkerText format ["PANIC INITIATED BY OFFICER %1 AT GRID: %2", name player, mapGridPosition player];
				panicMarker setMarkerType "mil_warning";
				panicMarker setMarkerColor "ColorRed";
				panicMarker setMarkerSize [1.25, 1.25];
			};

			format ["PANIC INITIATED BY: %1 AT %2", name player, mapGridPosition player] remoteExec ["systemChat", 0];

			{
				if(side player == west or side player == resistance) then{
					hint parseText "<t size='2.0' color='#ff0000'>PANIC BUTTON INITIATED</t>";
				};
			} forEach playableUnits;

			player removeItem "MS_PanicButton"; //Removes 1 Panic button from the inventory
			sleep 60;
			deleteMarker panicMarker; 
		};
	} else {
		if(playerSide ==  east) exitWith {
			hint "You are not permitted to use the panic button!";
		};
	};
}
, "", [DIK_0, [false, true, false]]] call CBA_fnc_addKeybind;