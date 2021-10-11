private ["_car"];
_car = param [0, objNull, [objNull]];

_year = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "year");
_manufacturer = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "manufacturer");
_model = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "model");
_enginelayout = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "enginelayout");
_country = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "country");
_maxspeed = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "maxSpeed"));
_redline = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "redRpm"));
_enginePower = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "enginePower")*1.341);
_peaktorque = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "peakTorque"));
_seats = getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "transportSoldier")+1;
_body = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_bodycolor") >> "displayName");
_bodyFinish = getText(configfile >> "CfgIvoryMaterials" >> (_car getVariable "ivory_bodyfinish") >> "displayName");
_rims = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_rimcolor") >> "displayName");
_plate = toUpper (getPlateNumber _car);
_editorPreview = getText(configFile >> "cfgVehicles" >> typeOf _car >> "editorPreview");
_timestamp = call ivory_fnc_getTimeStamp;
_currentSpeed = 0;
_vin = (_car getVariable "ivory_vin");
_baseCar = typeOf _car;
_baseCar = _baseCar splitString "_";
_baseCar = format["%1_%2",_baseCar select 0, _baseCar select 1];
_version = getText(configFile >> "cfgPatches" >> _baseCar >> "versionStr");
_versionData = getText(configFile >> "cfgPatches" >> "ivory_data" >> "versionStr");

_window = parseNumber (_car getVariable "ivory_windowtint");
_window = format["%1",_window * 100];

_light = parseNumber (_car getVariable "ivory_lighttint");
_light = format["%1",_light * 100];


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

_keyBinds = (CBA_keybinding_addons getVariable "Ivory") select 1; 
_keys = ""; 
 
{ 
 _getKeys = cba_keybinding_actions getvariable ("ivory$" + _x); 
 _displayName = _getKeys select 0; 
 _key = ((_getKeys select 2) select 0) call CBA_fnc_localizeKey;  
 if(isNil "_key") then {
	_key = "N/A";
 };
 _keys = _keys + format["<t color='#4EB1BA'>%1</t>" + " " + "%2" + "<br/>",_displayName,_key]; 
   

} forEach _keyBinds;


format["<img image='%19' align='center' size='15'/><br/><br/>

<t size='2' align='center' color='#4EB1BA' font='RobotoCondensedBold'>%2 %3</t><br/>

<t color='#4EB1BA' size='1.5' font='RobotoCondensedBold'>Vehicle Information</t><br/>
<t color='#4EB1BA'>Year</t> %1<br/>
<t color='#4EB1BA'>Make</t> %2<br/>
<t color='#4EB1BA'>Model</t> %3<br/>
<t color='#4EB1BA'>Color</t> %12 (%11)<br/>
<t color='#4EB1BA'>Plate</t> %10<br/>
<t color='#4EB1BA'>VIN</t> %21<br/>
<t color='#4EB1BA'>Country</t> %4<br/>
<t color='#4EB1BA'>Engine Type</t> %5<br/>
<t color='#4EB1BA'>Num of Seats</t> %16<br/>
<t color='#4EB1BA'>Max Speed</t> %6 Km/h<br/>
<t color='#4EB1BA'>Redline</t> %7 RPM<br/>
<t color='#4EB1BA'>Horsepower</t> %8 hp<br/>
<t color='#4EB1BA'>Torque</t> %9 Nm<br/>
<t color='#4EB1BA'>Rim Color</t> %13<br/>
<t color='#4EB1BA'>Window Tint</t> %14%17<br/>
<t color='#4EB1BA'>Light Tint</t> %15%17<br/><br/>

<t color='#4EB1BA' size='1.5' font='RobotoCondensedBold'>Keybinds</t><br/>
You can change any of these keybinds by going to Options->Controls->Configure Addons->Ivory<br/>
%18<br/>

<t color='#4EB1BA' size='1.5' font='RobotoCondensedBold'>Options</t><br/>
You can change any of these options by going to Options->Addon Options->Ivory<br/>
<t color='#4EB1BA'>Display Location Names</t> %22<br/>
<t color='#4EB1BA'>Emergency - Radar Alert Speed</t> %23 Km/h<br/>
<t color='#4EB1BA'>Emergency - Alert Sound</t> %24<br/><br/>

<t color='#4EB1BA' size='1.5' font='RobotoCondensedBold'>About</t><br/>
<t color='#4EB1BA'>Ivory</t> v%26<br/>
<t color='#4EB1BA'>Ivory %2 %3</t> v%25<br/><br/>
%20<br/><br/>

",

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
_keys,
_editorPreview,
_timestamp,
_vin,
ivory_setting_locnames call ivory_fnc_yesorno,
ivory_setting_alertspeed,
ivory_setting_alertsound call ivory_fnc_yesorno,
_version,
_versionData

] spawn ivory_fnc_showManual;


