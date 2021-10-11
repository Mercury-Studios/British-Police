_currentTimeDate = "real_date" callExtension "+"; 

if(count _currentTimeDate > 0) then {
	_currentTimeDate = call compile _currentTimeDate; 
	_time = "";
	if((_currentTimeDate select 3) > 12) then {
		_time = format["%1:%2 PM",[(_currentTimeDate select 3)-12, 2] call CBA_fnc_formatNumber,[_currentTimeDate select 4, 2] call CBA_fnc_formatNumber];
	} else {
		_time = format["%1:%2 AM",[(_currentTimeDate select 3), 2] call CBA_fnc_formatNumber,[_currentTimeDate select 4, 2] call CBA_fnc_formatNumber];
	};
	_currentTimeDate = format["%2/%3/%4 %1",_time,_currentTimeDate select 1,_currentTimeDate select 2,_currentTimeDate select 0];

} else {
	_dateTime = date;
	_date = format["%1/%2/%3", _dateTime select 1, _dateTime select 2, _dateTime select 0];
	_time = "";
	if((_dateTime select 2) > 12) then {

		_time = format["%1:%2 PM", [(_dateTime select 3)-12, 2] call CBA_fnc_formatNumber, [_dateTime select 4, 2] call CBA_fnc_formatNumber];

	} else {

		_time = format["%1:%2 AM", [_dateTime select 3, 2] call CBA_fnc_formatNumber, [_dateTime select 4, 2] call CBA_fnc_formatNumber];

	};

	_currentTimeDate = format["%1 %2", _date, _time];

};

_currentTimeDate