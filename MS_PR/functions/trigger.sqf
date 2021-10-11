waitUntil {!isNull(findDisplay 46)};
findDisplay 46 displayAddEventHandler ["KeyUp", {
    _source  = _this select 0;
    _keyCode = _this select 1;
    _isShift = _this select 2;
    _isCtrl  = _this select 3;
    _isAlt   = _this select 4;

    if(_keyCode isEqualTo 11 && _isShift) exitWith {
        [] execVM "\MS_PR\functions\main_panic.sqf";
    };
}];