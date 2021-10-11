
_car = param [0, objNull, [objNull]];
_speedOptional = param [1, 0, [0]];
_speedOptional = ceil(_speedOptional);

_car = vehicle _car;
_mycar = vehicle player;
_target = "";
_antenna = 75;
_distanceAhead = 50;
 if(_mycar animationPhase "lbSystem_antenna" == 1) then {
	_antenna = 135;
	_distanceAhead = 75;
};


if((!([position _mycar, getDir _mycar, _antenna, position _car] call BIS_fnc_inAngleSector) || (_car distance _mycar > _distanceAhead) || !(_car isKindOf 'LandVehicle') || (lineIntersects [eyePos _mycar, aimPos _car, _mycar, _car])) && _speedOptional == 0) exitWith {

	if("ivory_laser_jammer" IN magazineCargo _car && _speedOptional == 0) exitWith {
		"Target vehicle could not be read." spawn ivory_fnc_showNotification;
	};

	format["Target vehicle must be within vision, %1m, and %2°.",_distanceAhead,_antenna] spawn ivory_fnc_showNotification;

};

_name = "";
_color = "N/A";
_owner = "N/A";
_plate = toUpper (getPlateNumber _car);

if((typeOf _car find "ivory") == 0) then {
		
	_manufacturer = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "manufacturer");
	_model = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "model");
    _name = format["%1 %2", _manufacturer, _model];

	_color = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_bodycolor") >> "displayName");
    _color = format[_color];

} else {

    _name = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "displayName");

};

_currentSpeed = round(speed _car);
if(_speedOptional != 0) then {
    _currentSpeed = _speedOptional;
};

if(_car getVariable ["carOwnerId",""] == "" || count (_car getVariable ["dbInfo",[]]) == 0) then {

	format["%1<br/>Color: %2 | Plate: %3 | %4 Km/h",_name,_color,_plate,_currentSpeed] spawn ivory_fnc_showNotification;

} else {

	if(_car getVariable ["carOwnerId",""] != "") then {

		_owner = _car getVariable "carOwnerId";
		_owner = _owner call BIS_fnc_getUnitByUid;

	};

	if(count (_car getVariable ["dbInfo",[]]) > 0) then {

		_owner = ((_car getVariable "dbInfo") select 0);
		_owner = _owner call BIS_fnc_getUnitByUid;

	};

	if(!isNull(_owner)) then {
		
		_owner = name _owner;
		[[player,_name,_color,_plate,_currentSpeed],{
			params["_player","_name","_color","_plate","_currentSpeed"];

			_arrest = "";
			if( ((player getVariable 'statuses') select 13 >= 1000) || myTickets > 2000 || myWarrants > 0) then { 
				_arrest = " (WANTED)";
			};
			
			_owner = format["%1%2",name player,_arrest];

			format["%1<br/>Color: %2 | Plate: %3 | %4 Km/h | Owner: %5",_name,_color,_plate,_currentSpeed,_owner] remoteExec ["ivory_fnc_showNotification",_player];

		}] remoteExec ["bis_fnc_spawn",_owner];

	} else {

		format["%1<br/>Color: %2 | Plate: %3 | %4 Km/h | Owner: %5",_name,_color,_plate,_currentSpeed,_owner] spawn ivory_fnc_showNotification;

	};


};

ivory_vehicleDatas = [[_car, _currentSpeed, call ivory_fnc_getTimeStamp, typeOf _car, _color, _plate, _owner]] + ivory_vehicleDatas;
if(count ivory_vehicleDatas > 25) then {
	ivory_vehicleDatas resize 25;
};