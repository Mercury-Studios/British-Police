#include "..\macros.h"
/**
	@Author : [Utopia] Amaury
	@Creation : 1/02/17
	@Modified : 23/10/17
	@Description : main function , open Hud and compute path from A to B.
	@Return : Nothing
**/
scriptName "gps_main_thread";

params [
	["_position",[],[[],objNull,locationNull,grpNull,""]]
];

_position = _position call bis_fnc_position;

private _startRoute = [getPosATL vehicle player,1000] call bis_fnc_nearestRoad;
private _endRoute = [_position,1000] call bis_fnc_nearestRoad;

if (!gps_core_init_done) exitWith {"The navigation is still loading. Please wait..." spawn ivory_fnc_showNotification;};
if (isNull _endRoute) exitWith {"No valid destination road found." spawn ivory_fnc_showNotification;};
if (isNull _startRoute) exitWith {"No valid start road found." spawn ivory_fnc_showNotification;};
"Calculating route..." spawn ivory_fnc_showNotification;

// if user want to override conditions for the function to run
_canLaunch = ["gps_main_start",[_startRoute,_endRoute],true] call ivory_gps_misc_fnc_callScriptedEventHandlerReturn;
if (!_canLaunch) exitWith {};



[] call ivory_gps_fnckillGPS;

gps_current_thread = _thisScript;

[["STR_INIT"] call ivory_gps_fnclocalize] call ivory_gps_menu_fnc_setGPSInfo;

[] call ivory_gps_fncdeletePathHelpers;

[_startRoute] call gps_core_fnc_insertFakeNode;
[_endRoute] call gps_core_fnc_insertFakeNode;

try {
	gps_current_goal = getPosATL _endRoute;

	"Destination has been set." spawn ivory_fnc_showNotification;

	waitUntil {
		_startRoute = [getPosATL vehicle player,1000] call bis_fnc_nearestRoad;
		[_startRoute] call gps_core_fnc_insertFakeNode;
		[] call ivory_gps_fncdeletePathHelpers;
		private _path = [_startRoute,_endRoute] call gps_core_fnc_generateNodePath;
		private _fullPath = [_path] call gps_core_fnc_generatePathHelpers;
		[] call ivory_gps_menu_fnc_openHud;
		[_path,_fullPath,_endRoute] call ivory_gps_fnctracking;
	};
	
	"You have arrived at your destination." spawn ivory_fnc_showNotification;
	//hintSilent (["STR_ARRIVED"] call ivory_gps_fnclocalize);
	[] call ivory_gps_menu_fnc_closeHud;
	[] call ivory_gps_fncdeletePathHelpers;

	gps_current_goal = nil;
}catch{
	switch _exception do { 
		case "PATH_NOT_FOUND" : {
			[] call ivory_gps_fncdeletePathHelpers;
			[] call ivory_gps_menu_fnc_closeHud;
			//hintSilent (["STR_PATH_NOT_FOUND"] call ivory_gps_fnclocalize);
			"The path to your destination could not be calculated." spawn ivory_fnc_showNotification;
		}; 
	};
	[_exception] call ivory_gps_fnclog;
};

[] call ivory_gps_misc_fnc_hashTable_deleteNameSpaces;