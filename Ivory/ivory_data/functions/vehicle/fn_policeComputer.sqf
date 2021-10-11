
createDialog "IvoryComputer";
if(isNil "show") then {
    show = "<br/>>> Logged in as root<br/>Welcome to the Ivory Police Computer. Type 'help' for all commands.";
};
_computer = (findDisplay 9154) displayCtrl 4110;
_computer ctrlSetStructuredText parseText format["<br/>%1",show];
_computer ctrlCommit 0;

_textHeight = ctrltextheight _computer;
if(_textHeight > 1) then {
    _controlPos = ctrlposition _computer;
    _controlPos set [3,_textHeight];
    _computer ctrlsetposition _controlPos;
    _computer ctrlcommit 0;
} else {
    _controlPos = ctrlposition _computer;
    _controlPos set [3,1];
    _computer ctrlsetposition _controlPos;
    _computer ctrlcommit 0;
};

set_text = {
    _text = param [0, "", [""]];

    show = format["%1<br/>",_text] + format["%1",show];

    _computer = (findDisplay 9154) displayCtrl 4110;
    _computer ctrlSetStructuredText parseText format["<br/>%1",show];
    _computer ctrlCommit 0;

    _textHeight = ctrltextheight _computer;
    if(_textHeight > 1) then {
        _controlPos = ctrlposition _computer;
        _controlPos set [3,_textHeight];
        _computer ctrlsetposition _controlPos;
        _computer ctrlcommit 0;
    } else {
        _controlPos = ctrlposition _computer;
        _controlPos set [3,1];
        _computer ctrlsetposition _controlPos;
        _computer ctrlcommit 0;
    };
    
};

display_cars = { 
    {
        _x params["_car","_speed","_timestamp","_carName","_color","_plate","_owner"];

        _name = getText(configfile >> "CfgVehicles" >> _carName >> "displayName");
        if(!isNull _car) then {

            if(_plate != (getPlateNumber _car)) then {

                _plate = format["%1 (Before: %2)",toUpper (getPlateNumber _car),toUpper(_plate)];

            };

            if((typeOf _car find "ivory") == 0) then {
                    
                _manufacturer = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "manufacturer");
                _model = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "model");
                _name = format["%1 %2", _manufacturer, _model];

                _colorNow = getText(configfile >> "CfgIvoryTextures" >> (_car getVariable "ivory_bodycolor") >> "displayName");

                if(_colorNow != _color) then {

                    _color = format["%1 (Before: %2)",_colorNow,_color];

                };

            };

        };
        _output = _output + format["<br/>%1 | %2 | %3 | %4 | %5 Km/h | %6 | %7",_num,_name,_color,_plate,_speed, _owner,_timestamp];

        _num = _num - 1;
    }
};

ivory_fnc_computerProcess = {

    _display = (findDisplay 9154);

    _argsOrig = ctrlText (_display displayCtrl 4122);

    if(_argsOrig == "") exitWith { };

    _computer = _display displayCtrl 4122;
    _computer ctrlSetText "";
    _computer ctrlCommit 0;
    
    _new = "ERROR: Command not found. Try typing 'help'";

    _args = _argsOrig splitString " ";

    if(_args select 0 == "help") then {
        _new = "help | Brings up this menu<br/>
clear | Clears the history<br/>
quit | Closes the police computer<br/>
scans | Shows all vehicles scanned by this computer<br/>
scans reset | Reset all scanned vehicles<br/>
scans last | Shows the last scanned vehicle<br/>
scans plate (name) | Lookup a plate number in the scanned vehicle list<br/>
plate (name) | Lookup a plate number";
    };

    if(_args select 0 == "clear") then {
        _new = "";
        show = "";
    };

    if(_args select 0 == "quit") then {
        closeDialog 0;
        _new = "";
    };

    if(_args select 0 == "scans") then {

        _firstarg = _args - [_args select 0];

        if(count _firstarg == 0) then {

            if(count ivory_vehicleDatas == 0) exitWith {
                _new = "ERROR: You have not scanned any vehicles yet";
            };
            _num = count(ivory_vehicleDatas);
            _output = "# | Name | Color | Plate | Speed | Owner | Timestamp ";
            (call display_cars) forEach ivory_vehicleDatas;
            _new = _output;
        };


        if(_firstarg select 0 == "reset") then {
            ivory_vehicleDatas = [];
            _new = "All previous scans have been removed";
        };
        if(_firstarg select 0 == "plate") then {

            if(count ivory_vehicleDatas == 0) exitWith {
                _new = "ERROR: You have not scanned any vehicles yet";
            };
            
            _plate = _firstarg - [_firstarg select 0];
            _plate = _plate joinString " ";

            _search = ivory_vehicleDatas select {getPlateNumber (_x select 0) == format["%1",_plate]};

            if(count _search == 0) exitWith {
                _new = "That vehicle was not previously scanned.";
            };
            _num = count(_search);
            _output = "# | Name | Color | Plate | Speed | Owner | Timestamp";
            (call display_cars) forEach _search;
            _new = _output;

        };
        if(_firstarg select 0 == "last") then {

            if(count ivory_vehicleDatas == 0) exitWith {
                _new = "ERROR: You have not scanned any vehicles yet";
            };

            _data = [ivory_vehicleDatas select 0];

            _num = 1;
            _output = "# | Name | Color | Plate | Speed | Owner | Timestamp";
            (call display_cars) forEach _data;
            _new = _output;

        };

    };

    if(_args select 0 == "plate") then {

        _plate = _args - [_args select 0];
        _plate = _plate joinString " ";

        _search = vehicles select {getPlateNumber _x == format["%1",_plate]};

        if(count _search == 0) exitWith {
            _new = "Could not find that plate.";
        };
        
        _car = _search select 0;
        _timestamp = call ivory_fnc_getTimestamp;

        _target = "";

        _name = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "displayName");
        _maxspeed = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "maxSpeed"));
        _redline = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "redRpm"));
        _enginePower = round(round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "enginePower")*1.341));
        _peaktorque = round(getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "peakTorque"));
        _seats = getNumber(configfile >> "CfgVehicles" >> (typeOf _car) >> "transportSoldier")+1;
        _plate = toUpper(getPlateNumber(_car));
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
        _owner = "John Doe";
            
        if(_car getVariable ["carOwnerId",""] != "") then {

            _owner = _car getVariable "carOwnerId";
            _owner = _owner call BIS_fnc_getUnitByUid;

            if(!isNull(_owner)) then {
                
                _owner = name _owner;

            };


        };

        if(count (_car getVariable ["dbInfo",[]]) > 0) then {

            _owner = ((_car getVariable "dbInfo") select 0);
            _owner = _owner call BIS_fnc_getUnitByUid;

            if(!isNull(_owner)) then {
                
                _owner = name _owner;

            };


        };

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
            
        _new = format["
<img image='%19' size='22' align='center'/><br/><br/>
Year | %1<br/>
Make | %2<br/>
Model | %3<br/>
Plate | %10 <br/>
VIN | %21 <br/>
Color | %12 (%11) <br/>
Window Tint | %14%17 <br/>
Light Tint | %15%17 <br/>
Rim Color | %13 <br/>
Country | %4 <br/>
Engine Type | %5 <br/>
Number of Seats | %16 <br/>
Maximum Speed | %6 Km/h <br/>
Redline | %7 RPM <br/>
Horsepower | %8 hp <br/>
Torque | %9 Nm <br/>
Owner | %22",

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
                "0",
                _editorPreview,
                _timestamp,
                _vin,
                _owner


        ];
    };

    format["%1<br/>",_new] call set_text;
    format[">> %1",_argsOrig] call set_text;

};