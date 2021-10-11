params["_plate"];

"Searching..." spawn ivory_fnc_showNotification;
_search = vehicles select {getPlateNumber _x == _plate};

if(count _search == 0) exitWith {
    "Could not find that plate." spawn ivory_fnc_showNotification;
};

"Found!" spawn ivory_fnc_showNotification;
_veh = _search select 0;

[_veh] spawn test_fnc;


