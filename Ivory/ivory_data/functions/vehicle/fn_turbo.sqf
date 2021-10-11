params ["_car"];

vehiclePressure = 0;
_Gearphase2 = (_car) animationSourcePhase "gear";

while{alive _car && driver _car == player && isEngineOn _car} do {
    _phase = _car animationSourcePhase "RPM";
    if(_phase > 2000) then {
    vehiclePressure = vehiclePressure + 0.2;
    _gearphase = _car animationSourcePhase "gear";
        if(_gearphase > _Gearphase2 && vehiclePressure > 3) then {                 
            vehiclePressure = 0;
            currenltyUpdating = false;

            _dummy = "#particlesource" createVehicleLocal ASLToAGL getPosWorld (_car);
            _dummy attachTo [(_car),[0,0,0]];
            [_dummy, "ivory_turbo", 50] call CBA_fnc_globalSay3d;
            _Gearphase2 = (_car) animationSourcePhase "gear";
            _car animate["backfire", 1];
            sleep 0.01;
            _car animate["backfire", 0];                           
        };
        if(_gearphase < _Gearphase2 && vehiclePressure > 3) then {                 
            vehiclePressure = 0;
            currenltyUpdating = false;
            _Gearphase2 = (_car) animationSourcePhase "gear";
            _car animate["backfire", 1];
            sleep 0.01;
            _car animate["backfire", 0];                           
        };                       
    };
    sleep 0.05;
};

_car animate["backfire", 0];