params ["_unit", "_container", "_item"];

if(_item == "ivory_laser_jammer" && driver _container == _unit) then {
    "Laser Jammer has been disabled." spawn ivory_fnc_showNotification;
};
if(_item == "ivory_radar_detector" && driver _container == _unit) then {
    "Radar Detector has been disabled." spawn ivory_fnc_showNotification;
};