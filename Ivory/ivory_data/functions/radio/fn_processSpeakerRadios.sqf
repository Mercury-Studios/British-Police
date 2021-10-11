private ["_item", "_freq", "_pos", "_unit_pos", "_p", "_manpack", "_lrs", "_isolation"];
_unit_pos = eyepos TFAR_currentUnit;

{

	_pos = getPosASL _x;
	if ((_pos select 2) > 0) then {
		_p = [(_pos select 0) - (_unit_pos select 0), (_pos select 1) - (_unit_pos select 1), (_pos select 2) - (_unit_pos select 2)];

		{		
			
			if  ((_x getVariable ["ivory_megaphone", false]) and !(_x getVariable ["ivory_megaphone_owner", false])) then {

					_manpack = [_x, "radio_settings"];
					_freq = format ["%1%2", _manpack call TFAR_fnc_getLrFrequency, _manpack call TFAR_fnc_getLrRadioCode];
					if ((_manpack call TFAR_fnc_getAdditionalLrChannel) > -1) then {
						_freq = _freq + format ["|%1%2", [_manpack, (_manpack call TFAR_fnc_getAdditionalLrChannel) + 1] call TFAR_fnc_GetChannelFrequency, _manpack call TFAR_fnc_getLrRadioCode];
					};
					_radio_id = netId (_manpack select 0);
					if (_radio_id == '') then {
						_radio_id = str (_manpack select 0);
					};

					tf_speakerRadios pushBack (format ["%1%2%3%4%5%6%7%8%9%10%11%12%13", _radio_id, TF_new_line, _freq, TF_new_line,  "", TF_new_line, _p, TF_new_line, _manpack call TFAR_fnc_getLrVolume, TF_new_line, "no", TF_new_line, _pos select 2]);

			};

		
		} forEach (everyBackpack _x);
	};

} forEach (nearestObjects [getPos TFAR_currentUnit, ["WeaponHolder", "GroundWeaponHolder", "WeaponHolderSimulated"], ivory_speakerDistance]);