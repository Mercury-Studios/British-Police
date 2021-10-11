params["_vehicle","_unit"];
while{driver _vehicle == _unit && _unit IN _vehicle} do {
    if(cameraView == "Internal") then {
        playSound "ivory_indicator";
        sleep 0.672;

    };
    if !(ivory_indicatorl OR ivory_indicatorr) exitWith {};
    if !(_unit IN _vehicle) exitWith {};
    if !(vehicle player isKindOf "Car") exitWith {}; // fail safe
};