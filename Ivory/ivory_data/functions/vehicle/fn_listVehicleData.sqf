_mycar = vehicle player;
_alldata = "";

if(count ivory_vehicleDatas == 0) exitWith {
	"You have not scanned any vehicles yet." spawn ivory_fnc_showNotification;
};

"Viewing all previously scanned vehicles." spawn ivory_fnc_showNotification;

_target = "";

{
	_car = _x select 0;
	_currentSpeed = _x select 1;
	_currentTimeDate = _x select 2;

	_name = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "displayName");
	_maxspeed = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "maxSpeed"));
	_redline = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "redRpm"));
	_enginePower = round(round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "enginePower")*1.341));
	_peaktorque = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "peakTorque"));
	_seats = getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "transportSoldier")+1;
	_plate = getPlateNumber(_car);
	_editorPreview = getText(configFile >> "cfgVehicles" >> typeOf _car >> "editorPreview");

	_year = "N/A";
	_manufacturer = "N/A";
	_model = "N/A";
	_enginelayout = "N/A";
	_country = "N/A";
	_window = "N/A";
	_light = "N/A";
	_body = "N/A";
	_bodyFinish = "N/A";
	_rims = "N/A";

	if((typeOf _car find "ivory") == 0) then {
			
		_year = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "year");
		_manufacturer = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "manufacturer");
		_model = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "model");
		_enginelayout = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "enginelayout");
		_country = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "country");
		_window = parseNumber (_car getVariable "ivory_windowtint");
		_window = format["%1",_window * 100];
		_light = parseNumber (_car getVariable "ivory_lighttint");
		_light = format["%1",_light * 100];
		_body = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_bodycolor") >> "displayName");
		_bodyFinish = getText(configfile >> "CfgIvoryMaterials" >> (_car getVariable "ivory_bodyfinish") >> "displayName");
		_rims = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_rimcolor") >> "displayName");

		_colorConvert = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_bodycolor") >> "texture");
		_colorConvertCheck = _colorConvert splitString "";
		if(_colorConvertCheck select 0 == "#") then {
			_colorConvert = [_colorConvert, "#(argb,8,8,3)color(", ""] call CBA_fnc_replace;
			_colorConvert = [_colorConvert, ",1,co)", ""] call CBA_fnc_replace;
			_colorConvert = _colorConvert splitString ",";
			_colorR = parseNumber (_colorConvert select 0);
			_colorG = parseNumber (_colorConvert select 1);
			_colorB = parseNumber (_colorConvert select 2);

			if(_colorR < 0.05) then {_colorR = 0.05;};
			if(_colorG < 0.05) then {_colorG = 0.05;};
			if(_colorB < 0.05) then {_colorB = 0.05;};

			_colorArray = [_colorR,_colorG,_colorB,1];

			_colorConvert = _colorArray call BIS_fnc_colorConfigToRGBA;
			_colorConvert = _colorConvert call BIS_fnc_colorRGBAtoHTML;

		};

	};

	_target = _target + format["
	<t align='left'>
	<img image='%8' size='5'/><br/>
	<t color='#4EB1BA' font='RobotoCondensedBold'>%2 %3</t><br/>
	<t>%9</t><br/>
	<t color='#4EB1BA'>Color</t> %5 (%4)<br/>
	<t color='#4EB1BA'>Plate</t> %6<br/>
	<t color='#4EB1BA'>Speed</t> %7 Km/h</t><br/><br/><br/>
	", 
	_year, 
	_manufacturer, 
	_model, 
	_bodyFinish, 
	_body, 
	_plate,
	_currentSpeed,
	_editorPreview,
	_currentTimeDate
	];

} forEach ivory_vehicleDatas;


_target spawn ivory_fnc_showcomputer;
