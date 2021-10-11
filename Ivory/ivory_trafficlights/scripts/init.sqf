if(isNil "ivory_trafficlights") then {
    ivory_trafficlights = [];
};

if(isServer) then { 

    sleep 5;

    _light = _this select 0;

    _type = 2; 

    _dir = getDir _light; 

    if((_dir >= 0 && _dir < 90) || (_dir >= 180 && _dir < 270)) then { _type = 1;}; 

    ivory_trafficlights pushBack [_light,_type]; 

};