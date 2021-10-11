if(isDedicated) exitWith {};

_firstMsg = false;

while {true} do 
{    
    _car = vehicle player;
    if(alive _car && _car isKindOf "Car" && "ivory_radar_detector" IN magazineCargo _car) then {

        if!(_firstMsg) then {
            "Radar Detector has been enabled. You will be alerted of any speed radars in the vicinity." spawn ivory_fnc_showNotification;
            _firstMsg = true;
        };
            
        _nearCars = (nearestObjects[player,[],300])-[_car];
        _nearCars = _nearCars select {_x getVariable "ani_radar" == 1};

        if(count _nearCars > 0) then {

            _target = _nearCars select 0;
            _distance = _target distance _car;
            _delay = 1;
            if(_distance < 185) then { _delay = 0.55; };
            if(_distance < 95) then { _delay = 0.05; };
            playSound "ivory_beep";
            sleep _delay;

        };
        
        sleep 0.1;

    } else {

        _firstMsg = false;

        waitUntil {sleep 1; ((vehicle player) isKindOf "Car" && "ivory_radar_detector" IN magazineCargo (vehicle player)) };

    };

};