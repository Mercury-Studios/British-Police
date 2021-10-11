params["_car"];

_emergencySiren = getNumber(configFile >> "cfgVehicles" >> typeOf _this >> "emergencySiren");
_airhorn = "";
_airhornTime = "";

_dummy = ObjNull;

if(_emergencySiren isEqualTo 0) then
{
    _airhorn = "ivory_carhorn";
    _airhornTime = 9.57;
};
if(_emergencySiren isEqualTo 1) then
{
    _airhorn = "ivory_ss2000_airhorn";
    _airhornTime = 9.932;
};
if(_emergencySiren isEqualTo 2) then
{
    _airhorn = "ivory_pa300_airhorn";
    _airhornTime = 11.076;
};

while {alive _car} do 
{    
   
	if (alive _car && !isNull driver _car && _car getVariable "ani_horn" > 0 && (player distance _car <= 350)) then {			

        _dummy = "#particlesource" createVehicleLocal ASLToAGL getPosWorld _this;
        _dummy attachTo [_this,[0,0,0]];

            [_this,_airhorn,_airhornTime,_dummy] spawn {
                params["_this","_airhorn","_airhornTime","_dummy"];
                while{_this getVariable "ani_horn" == 1} do {
                    _timeStarted = time;
                    
                    _dummy say3D [_airhorn,250];

                    waitUntil { time >= _timeStarted + _airhornTime || _this getVariable "ani_horn" != 1 };
                };
            };
            
		waitUntil { _car getVariable "ani_horn" == 0 };

    } else {

        
        detach _dummy;
        deleteVehicle _dummy;


        waitUntil {sleep 0.01; !alive _car || (!isNull driver _car && _car getVariable ["ani_horn",0] > 0 && (player distance _car <= 350)) };

    };

};