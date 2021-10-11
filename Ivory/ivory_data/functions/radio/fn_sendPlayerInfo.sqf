
private ["_request","_result", "_player", "_isNearPlayer", "_killSet"];
_player = _this select 0;

_request = _this call ivory_fnc_preparePositionCoordinates;
_result = "task_force_radio_pipe" callExtension _request;
