#include "..\..\macros.h"
/**
	@Author : [Utopia] Amaury
	@Creation : 20/10/17
	@Modified : 23/10/17
	@Description : nothing to say
**/
disableSerialization;

params ["","_key","_shift","_ctrl","_alt"];

_handled = false;

if(dialog) exitWith {_handled};
	
_handled = switch (true) do {
	case (_key in (["quicknav_open_key"] call ivory_gps_fncgetSetting)): {
		call ivory_gps_menu_fnc_quickNavCreate
	};
	case (_key in (["quicknav_switch_key"] call ivory_gps_fncgetSetting)): {
		call ivory_gps_menu_fnc_quickNavNextOption
	};
	case (_key in (["quicknav_execute_key"] call ivory_gps_fncgetSetting)): {
		call ivory_gps_menu_fnc_quickNavExecuteCurrentOption
	};
	default	{
		false
	};
};

_handled