waitUntil {!isNull(findDisplay 46)};
findDisplay 46 displayAddEventHandler ["KeyDown", {
    _source  = _this select 0;
    _keyCode = _this select 1;
    _isShift = _this select 2;
    _isCtrl  = _this select 3;
    _isAlt   = _this select 4;

    if(player == driver (vehicle player)) then {
        if (_keyCode isEqualTo 2 && lights == false) exitWith { //1 lights on
            lights = true;
        };

        if (_keyCode isEqualTo 2 && lights == true) exitWith { //1 lights off
            lights = false;
        };


        if (_keyCode isEqualTo 3 && sirens == false) exitWith { //2 sirens on (Wail)
			waitUntil{finished};
            sirens = true;
            sirenType = "Wail";
            [] execVM "\MS_PR\functions\fn_sirens.sqf";
        };

        if (_keyCode isEqualTo 3 && sirens == true) exitWith { //2 sirens off (Wail)
            sirens = false;
            deleteVehicle dummy;
        };

        if (_keyCode isEqualTo 4 && sirens == false) exitWith { //3 Sirens on (Yelp)
			waitUntil{finished};
            sirens = true;
            sirenType = "YelpFinal";
            [] execVM "\MS_PR\functions\fn_sirens.sqf";
        };

        if (_keyCode isEqualTo 27 && sirens == true) exitWith { //] Sirens change (Yelp -> Wail)
			waitUntil{finished};
            if(sirenType == "Wail") then {
                sirenType = "YelpFinal";
            } else 
            {
                sirenType = "Wail"
            };
        };

        if (_keyCode isEqualTo 4 && sirens == true) exitWith { //3 Sirens off (Yelp)
            sirens = false;
            sirenType = "YelpFinal";
            [] execVM "\MS_PR\functions\fn_sirens.sqf";
        };


        if (_keyCode isEqualTo 11) exitWith { //0 All off
            sirens = false;
            lights = false;
            deleteVehicle dummy;
        };
    };
}];