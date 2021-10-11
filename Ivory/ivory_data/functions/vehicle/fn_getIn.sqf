params ["_vehicle", "_role", "_unit", "_turret"];

if(_unit != driver _vehicle) exitWith {};
/*
ivory_indicatorl = false;
ivory_indicatorr = false;

if(_vehicle animationPhase "turn_left" > 0.5) then {
    ivory_indicatorl = true;
};
if(_vehicle animationPhase "turn_right" > 0.5) then {
    ivory_indicatorr = true;
};

if((ivory_indicatorl OR ivory_indicatorr) && _role == "driver") then {
    [_vehicle,_unit] spawn ivory_fnc_indicator;
};*/