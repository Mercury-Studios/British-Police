params ["_car"];

_license = getPlateNumber _car;

private _emergencySiren = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencySiren");
private _emergencyLightbarTop = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyLightbarTop");
private _emergencyLightbarFront = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyLightbarFront");
private _emergencyLightbarBack = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyLightbarBack");
private _emergencyCage = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyCage");
private _emergencyRambar = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyRambar");
private _emergencyRadar = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyRadar");
private _emergencyNumbers = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyNumbers");
private _emergencyTinted = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyTinted");
private _emergencySpotlight = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencySpotlight");
private _emergencyAntenna = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyAntenna");

// server stuff
if (isServer) then { 
    
    [_car] call ivory_fnc_initVehicle;
        
    if(typeOf _car == "ivory_c_president") then
    {
        _car spawn ivory_fnc_flags;
    };
    
    _vin = "1A"; 
    _year = getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "year"); 
    _make = [getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "manufacturer"), 0, 1] call cba_fnc_substr; 
    _model = [getText(configfile >> "CfgVehicles" >> (typeOf _car) >> "Library" >> "model"), 0, 1] call cba_fnc_substr; 
    _randNumber = round(random [10000,50000,99999]); 
    _vin = _vin + _year + _make + _model + str _randNumber;
    _car setVariable ["ivory_vin",_vin,true];
        
    _car animate["light_l",1];
    _car animate["light_r",1];

    _nums = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyNumbers");

    if(_nums==1) then {
        _licenseNumericArray 	= ["0","1","2","3","4","5","6","7","8","9"];
        _randomnums = format["%1%2%3%4",selectRandom _licenseNumericArray,selectRandom _licenseNumericArray,selectRandom _licenseNumericArray,selectRandom _licenseNumericArray];
        _car setPlateNumber _randomnums;
        [_car, _randomnums] call ivory_fnc_setpolicenum;
    };
        
    if(_emergencyLightbarTop == 1) then {_car animate["lbSystem_top",1];};
    if(_emergencyLightbarFront == 1) then {_car animate["lbSystem_front",1];};
    if(_emergencyLightbarBack == 1) then {_car animate["lbSystem_back",1];};
    if(_emergencyCage == 1) then {_car animate["lbSystem_cage",1];};
    if(_emergencyRambar == 1) then {_car animate["lbSystem_rambar",1];};
    if(_emergencyRadar == 1) then { _car animate["lbSystem_radar",1];};
    if(_emergencyNumbers == 1) then {_car animate["lbSystem_num",1];};
    if(_emergencyTinted == 1) then {[_car,nil,nil,0.8] call ivory_fnc_initVehicle;};
    if(_emergencySpotlight == 1) then {_car animate["lbSystem_Spotlight",1];};
    if(_emergencyAntenna == 1) then {_car animate["lbSystem_antenna",1];};
        
    if(_emergencyLightbarTop == 1 OR _emergencyLightbarFront == 1 OR _emergencyLightbarBack == 1) then
    {   
        _car animate ["spoiler",0];
        
        _car animate ["wheel_1_1_default",0];
        _car animate ["wheel_1_2_default",0];
        _car animate ["wheel_2_1_default",0];
        _car animate ["wheel_2_2_default",0];

        _car animate ["wheel_1_1_police",1];
        _car animate ["wheel_1_2_police",1];
        _car animate ["wheel_2_1_police",1];
        _car animate ["wheel_2_2_police",1];
    };

}; 

// client stuff

if(isNil "ivory_indicatorl") then {
    ivory_indicatorl = false;
};

if(isNil "ivory_indicatorr") then {
    ivory_indicatorr = false;
};

_car setVariable ["ani_horn",0,true];

if(isNil "ivory_vehicleDatas") then {
    ivory_vehicleDatas = [];
};

_car spawn ivory_fnc_horn;

if(_emergencySiren > 0) then
{
    _car setVariable ["ani_siren_todo",1];
    _car setVariable ["ani_siren",0];
    _car setVariable ["ani_takedown",0,true];
    _car spawn ivory_fnc_sirens;
    _car spawn ivory_fnc_takedown;
    /*
    if (isMultiplayer && isNil "ivory_eh_mp" && !isNil "TFAR_fnc_processplayerpositions") then {
        ivory_default_dist = 20;
        ivory_speakerDistance = 65;
		ivory_eh_mp = ["ivoryProcessPlayerPositionsHandler", "onEachFrame", "ivory_fnc_processPlayerPositions"] call BIS_fnc_addStackedEventHandler;
	};*/

};
 
if(_emergencyLightbarTop == 1 OR _emergencyLightbarFront == 1 OR _emergencyLightbarBack == 1) then
{   
    _car setVariable ["ani_lightbar_todo",1];
    _car setVariable ["ani_lightbar",0];
    _car spawn ivory_fnc_lightbar;
    _car spawn ivory_fnc_lights;
};

if (isNil "ivory_eh_put") then {
    ivory_eh_put = player addEventHandler ["Put",{_this spawn ivory_fnc_put}];
};
if (isNil "ivory_eh_take") then {
    ivory_eh_take = player addEventHandler ["Take",{_this spawn ivory_fnc_take}];
};

_car addEventHandler ["Engine", {_this spawn ivory_fnc_engine}];

_car addEventHandler ["GetIn", {_this spawn ivory_fnc_getIn}];

if(isNil "ivory_script_radarDetector") then {
    ivory_script_radarDetector = [] spawn ivory_fnc_radarDetector;
};