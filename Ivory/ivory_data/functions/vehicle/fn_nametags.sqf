params["_car"];

_locationSetted = "";

while{alive _car && driver _car == player && isEngineOn _car} do {

    if(ivory_setting_locnames) then {

        _nearestLocations = nearestLocations [position player, ["NameCity","NameVillage","NameCityCapital"], 500];
        _nearestLocation = _nearestLocations select 0;

        if(!isNil "_nearestLocation") then {
            _nearestLocationText = text _nearestLocation;
            if(_locationSetted != _nearestLocationText) then {
                _locationSetted = _nearestLocationText;
                [_nearestLocationText] spawn BIS_fnc_EXP_camp_SITREP;
            };
        };


    };
    
    sleep 5;

};