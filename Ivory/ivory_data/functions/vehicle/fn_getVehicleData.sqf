_car = param [0, ObjNull, [ObjNull]];

if(count ivory_vehicleDatas == 0 && isNull _car) exitWith {
	"You have not scanned any vehicles yet." spawn ivory_fnc_showNotification;
};

_keyData = ["Ivory", "ivory_listvehicledata"] call cba_fnc_getKeybind; 
_keyData = (_keyData select 5) call CBA_fnc_localizeKey; 

_data = [_car];
_speed = "N/A";
_timeStamp = call ivory_fnc_getTimestamp;

if(isNull _car) then {

	format["Viewing last scanned vehicle.<br/>Press %1 to list of previously scanned vehicles.", _keyData] spawn ivory_fnc_showNotification;

	_data = ivory_vehicleDatas select 0;
	_car = _data select 0;
	_speed = format["%1  Km/h",_data select 1];
	_timestamp = _data select 2;

};


_target = "";

_currentSpeed = _speed;
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
_vin = "N/A";
_owner = "N/A";

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
	_vin = (_car getVariable "ivory_vin");


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
	
_target = format["
<img image='%19' size='15' align='center'/><br/><br/><t size='2' align='center' font='RobotoCondensedBold' color='#4EB1BA'>%2 %3</t><br/>
<t align='center'>%20</t><br/><br/>
<t align='left'>
<t color='#4EB1BA'>Color</t> %12 (%11) <br/>
<t color='#4EB1BA'>Plate</t> %10 <br/>
<t color='#4EB1BA'>VIN</t> %21 <br/>
<t color='#4EB1BA'>Owner</t> %22 <br/>
<t color='#4EB1BA'>Recorded Speed</t> %18<br/>
<t color='#4EB1BA'>Year</t> %1<br/>
<t color='#4EB1BA'>Make</t> %2<br/>
<t color='#4EB1BA'>Model</t> %3<br/>
<t color='#4EB1BA'>Country</t> %4 <br/>
<t color='#4EB1BA'>Engine Type</t> %5 <br/>
<t color='#4EB1BA'>Num of Seats</t> %16 <br/>
<t color='#4EB1BA'>Max Speed</t> %6 Km/h <br/>
<t color='#4EB1BA'>Redline</t> %7 RPM <br/>
<t color='#4EB1BA'>Horsepower</t> %8 hp <br/>
<t color='#4EB1BA'>Torque</t> %9 Nm <br/>
<t color='#4EB1BA'>Rim Color</t> %13 <br/>
<t color='#4EB1BA'>Window Tint</t> %14%17 <br/>
<t color='#4EB1BA'>Light Tint</t> %15%17</t>",

		_year,
		_manufacturer,
		_model,
		_country,
		_enginelayout,
		_maxspeed,
		_redline,
		_enginePower,
		_peaktorque,
		_plate,
		_bodyFinish,
		_body,
		_rims,
		_window,
		_light,
		_seats,
		"%",
		_currentSpeed,
		_editorPreview,
		_timestamp,
		_vin,
		_owner


];

_target spawn ivory_fnc_showcomputer;	