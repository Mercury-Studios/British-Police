#include <macros.h>
/**
	@Author : [Utopia] Amaury
	@Creation : 1/02/17
	@Modified : 22/10/17
	@Description : Initialization
**/
gps_dir = "ivory_data\A3GPS\";

ivory_gps_fnccompile = compileFinal	preprocessFileLineNumbers (gps_dir + "gps\fn_compile.sqf");
ivory_gps_fnclog = ["gps","fn_log",true] call ivory_gps_fnccompile;

["Compiling functions..."] call ivory_gps_fnclog;

/** GPS FUNCTIONS , PATH COMPUTATION FUNCTIONS ARE NOW IN CORE MODULE  **/
_gpsFolder = "gps";
ivory_gps_fncdeletePathHelpers = [_gpsFolder,"fn_deletePathHelpers"] call ivory_gps_fnccompile;
ivory_gps_fnctracking = [_gpsFolder,"fn_tracking"] call ivory_gps_fnccompile;
ivory_gps_fncmain = [_gpsFolder,"fn_main"] call ivory_gps_fnccompile;
ivory_gps_fncrefreshCache = [_gpsFolder,"fn_refreshCache"] call ivory_gps_fnccompile;
ivory_gps_fnckillGPS = [_gpsFolder,"fn_killGPS"] call ivory_gps_fnccompile;
ivory_gps_fncgetConfigSetting = [_gpsFolder,"fn_getConfigSetting"] call ivory_gps_fnccompile;
ivory_gps_fncgetSetting = [_gpsFolder,"fn_getSetting"] call ivory_gps_fnccompile;
ivory_gps_fncsetSetting = [_gpsFolder,"fn_setSetting"] call ivory_gps_fnccompile;
ivory_gps_fnclocalize = [_gpsFolder,"fn_localize"] call ivory_gps_fnccompile;

/** GPS MENU FUNCTIONS **/
//HUD
_hudFolder = "menu\hud";
ivory_gps_menu_fnc_setGPSInfo = [_hudFolder,"fn_setGPSInfo"] call ivory_gps_fnccompile; // = update
ivory_gps_menu_fnc_loadHud = [_hudFolder,"fn_loadHud"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_openHud = [_hudFolder,"fn_openHud"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_closeHud = [_hudFolder,"fn_closeHud"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_drawPath = [_hudFolder,"fn_drawPath"] call ivory_gps_fnccompile;

//main menu
_gpsMenuFolder = "menu\gps";
ivory_gps_menu_fnc_gpsHelp = [_gpsMenuFolder,"fn_gpsHelp"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_loadGPSMenu =  [_gpsMenuFolder,"fn_loadGPSMenu"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_loadNavMenu =  [_gpsMenuFolder,"fn_loadNavMenu"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_loadOptionsMenu =  [_gpsMenuFolder,"fn_loadOptionsMenu"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_loadControlsMenu =  [_gpsMenuFolder,"fn_loadControlsMenu"] call ivory_gps_fnccompile;

//quicknav
_quickNavFolder = "menu\quicknav";
ivory_gps_menu_fnc_quickNavCreate = [_quickNavFolder,"fn_quickNavCreate"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_quickNavExecuteCurrentOption = [_quickNavFolder,"fn_quickNavExecuteCurrentOption"]  call ivory_gps_fnccompile;
ivory_gps_menu_fnc_quickNavNextOption =  [_quickNavFolder,"fn_quickNavNextOption"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_loadQuickNav = [_quickNavFolder,"fn_loadQuickNav"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_handleQuickNavActions = [_quickNavFolder,"fn_handleQuickNavActions"] call ivory_gps_fnccompile;
ivory_gps_menu_fnc_addQuickNavOption = [_quickNavFolder,"fn_addQuickNavOption"] call ivory_gps_fnccompile;

/** MISCELLANEOUS FUNCTIONS (usable everywhere) **/
_miscFolder = "misc";
ivory_gps_misc_fnc_nearestLocation = [_miscFolder,"fn_nearestLocation"] call ivory_gps_fnccompile;
ivory_gps_misc_fnc_nearestRoadInArray = [_miscFolder,"fn_nearestRoadInArray"] call ivory_gps_fnccompile;
ivory_gps_misc_fnc_distanceStr = [_miscFolder,"fn_distanceStr"] call ivory_gps_fnccompile;
ivory_gps_misc_fnc_midPoint = [_miscFolder,"fn_midPoint"] call ivory_gps_fnccompile;

// RscEdit text dialog
ivory_gps_misc_fnc_editDialog = ["misc\EditDialog","fn_editDialog"] call ivory_gps_fnccompile;

// KeyChoose Menu
ivory_gps_misc_fnc_keyChoose = ["misc\KeyChoice","fn_chooseKey"] call ivory_gps_fnccompile;

// ColorPicker Menu
ivory_gps_misc_fnc_colorPicker = ["misc\ColorPicker","fn_colorPick"] call ivory_gps_fnccompile;

["Compiling functions done"] call ivory_gps_fnclog;
[missionNameSpace,"gps_functions_compiled",[]] spawn BIS_fnc_callScriptedEventHandler;

// Subscribe to the gps_core_loaded EH before launching mapping
[missionNamespace,"gps_core_loaded",{
	[
		["STR_QUICKNAV_OPTION_STATION"] call ivory_gps_fnclocalize,
		{
			[
				[nearestTerrainObjects [player,["FUELSTATION"],3000],player] call bis_fnc_nearestPosition
			] spawn ivory_gps_fncmain;
		}
	] call ivory_gps_menu_fnc_addQuickNavOption;

	[
		["STR_QUICKNAV_OPTION_TOWN"] call ivory_gps_fnclocalize,
		{
			[
				[getPosATL player,4000,["NameCity","NameVillage","NameCityCapital","NameLocal"]] call ivory_gps_misc_fnc_nearestLocation
			] spawn ivory_gps_fncmain;
		}
	] call ivory_gps_menu_fnc_addQuickNavOption;

	waitUntil {
		!isNull findDisplay 46
	};
	//(findDisplay 46) displayAddEventHandler ["KeyDown",ivory_gps_menu_fnc_handleQuickNavActions];
	((findDisplay 12) displayCtrl 51) ctrlAddEventHandler ["Draw",ivory_gps_menu_fnc_drawPath];

	[missionNamespace,"gps_loaded",[]] spawn BIS_fnc_callScriptedEventHandler;
	gps_init_done = true;
}] call bis_fnc_addScriptedEventHandler;

//GPS global variables
gps_current_thread = scriptNull;
gps_current_goal = [0,0,0];
gps_init_done = false;

[] execVM (gps_dir + "gps_core\init.sqf");

//refresh cache for currupted/missing data in profileNameSpace
[] call ivory_gps_fncrefreshCache;
