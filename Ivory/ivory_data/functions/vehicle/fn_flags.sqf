params ["_car"];

_flagl = "ivory_flag" createVehicle position _car; 
_flagr = "ivory_flag" createVehicle position _car; 

_flagl attachto[_car,[-0.4,2.4,0.75]]; 
_flagr attachto[_car,[1.07,2.4,0.75]];

_car addEventHandler ["Deleted", {
	params ["_entity"];
    {
        deleteVehicle _x;
    } forEach (attachedObjects _entity);
}];

