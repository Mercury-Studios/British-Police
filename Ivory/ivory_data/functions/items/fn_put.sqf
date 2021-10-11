params ["_unit", "_container", "_item"];

if(_item == "ivory_laser_jammer" && driver _container == _unit) then {
    "Laser Jammer has been enabled. Your speed and other information will now be blocked to radars." spawn ivory_fnc_showNotification;
};