params ["_object1", "_object2", "_selection1", "_selection2", "_force"];

if(_object1 getVariable "ivory_cc" == 1 && _force > 0 ) then {
    _object1 setVariable ["ivory_cc",0];
};