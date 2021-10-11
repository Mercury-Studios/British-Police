#include "..\..\macros.h"
/**
	@Author : [Utopia] Amaury
	@Creation : 1/02/17
	@Modified : 4/02/17
	@Description : the GPS menu init , difficult to read but i really don't like making menus
**/
#define EH_MENU_NAME "menu_options"

disableSerialization;

if(!isNull findDisplay 369854) exitWith {};

// EH 
_canOpen = ["gps_menu_opening",[EH_MENU_NAME],true] call ivory_gps_misc_fnc_callScriptedEventHandlerReturn;
if (!_canOpen) exitWith {};

createDialog "GPS_MENU_OPTIONS";
_display = findDisplay 369854;

[missionNameSpace,"gps_menu_opened",[EH_MENU_NAME,_display]] spawn BIS_fnc_callScriptedEventHandler;

_lang_list = _display displayCtrl 2100;
_lang_text =  _display displayCtrl 1001;
_markers_text = _display displayCtrl 1000;
_drop_data_btn = _display displayCtrl 1600;
_colors_pick = _display displayCtrl 1601;
_metric_text =  _display displayCtrl 1002;
_metrics_list =  _display displayCtrl 2101;

_drop_data_btn ctrlSetText (["STR_MENU_DROP_DATA"] call ivory_gps_fnclocalize);
_markers_text ctrlSetText (["STR_MENU_OPTIONS_MARKERS"] call ivory_gps_fnclocalize);
_lang_text ctrlSetText (["STR_MENU_OPTIONS_LANG"] call ivory_gps_fnclocalize);
_metric_text ctrlSetText (["STR_MENU_OPTIONS_METRIC"] call ivory_gps_fnclocalize);

_color = ["marker_color"] call ivory_gps_fncgetSetting;
_lang = ["lang"] call ivory_gps_fncgetSetting;

{
	_idx = _lang_list lbAdd (getText _x);
	_lang_list	lbSetData [_idx,(configName _x)];
	if(configName _x isEqualTo _lang) then {
		_lang_list lbSetCurSel _idx;
	};
}foreach (configProperties [(configFile >> "GPS_localization" >> "STR_LANGUAGES")]);

_idx = _metrics_list lbAdd (["STR_MILES"] call ivory_gps_fnclocalize);
_metrics_list lbSetData [_idx,"mi"];
_idx = _metrics_list lbAdd (["STR_KILOMETERS"] call ivory_gps_fnclocalize);
_metrics_list lbSetData [_idx,"km"];

// this syntax is horrible but it works
_metrics_list lbSetCurSel ( if (["metric"] call ivory_gps_fncgetSetting isEqualTo "mi") then {0} else {1} );

_currentColor = ["marker_color"] call ivory_gps_fncgetSetting;
_colors_pick ctrlSetBackgroundColor _currentColor;
_colors_pick ctrlSetBackgroundColor _currentColor;
_colors_pick ctrlSetTooltipColorBox _currentColor;
_colors_pick ctrlSetTooltipColorText _currentColor;
_colors_pick ctrlSetTooltip (_currentColor call bis_fnc_colorRGBATOHTML);

_drop_data_btn ctrlAddEventHandler ["ButtonClick",{ //reset some things , i don't know why this exists
	[] spawn {
		if([["STR_MENU_CONFIRM_DROP_DATA_CONTENT"] call ivory_gps_fnclocalize, ["STR_MENU_CONFIRM_DROP_DATA_TITLE"] call ivory_gps_fnclocalize, true, true , findDisplay 369854] call BIS_fnc_guiMessage) then {
			profileNamespace setVariable ["gps_saved",nil];
			profileNamespace setVariable ["gps_settings",nil];
			[] call ivory_gps_fncrefreshCache;
			(findDisplay 369852) closeDisplay 0;
			(findDisplay 369854) closeDisplay 0;
		};
	};
}]; 

_colors_pick ctrlAddEventHandler ["ButtonClick",{
	_this spawn {
		disableSerialization;
		params ["_control","_index"];

		_color = [ctrlParent _control,["marker_color"] call ivory_gps_fncgetSetting] call ivory_gps_misc_fnc_colorPicker;
		if (_color isEqualTo []) exitWith {};
		["marker_color",_color] call ivory_gps_fncsetSetting;
		_control ctrlSetBackgroundColor _color;
		_control ctrlSetTooltipColorBox _color;
		_control ctrlSetTooltipColorText _color;
		_control ctrlSetTooltip (_color call bis_fnc_colorRGBATOHTML);
	};
}];

_lang_list ctrlAddEventHandler ["LBSelChanged",{
	params ["_control","_index"];

	_type = _control lbData _index;

	["lang",_type] call ivory_gps_fncsetSetting;
	(findDisplay 369854) closeDisplay 0;
	(findDisplay 369852) closeDisplay 0;
	[] spawn ivory_gps_menu_fnc_loadGPSMenu;
}];

_metrics_list ctrlAddEventHandler ["LBSelChanged",{
	params ["_control","_index"];

	_type = _control lbData _index;
	["metric",_type] call ivory_gps_fncsetSetting;
}];