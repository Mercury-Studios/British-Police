params["_car"];

_emergencySiren = getNumber(configFile >> "cfgVehicles" >> typeOf _this >> "emergencySiren");
_airhorn = "";
_airhornTime = "";
_airhorn2 = "";
_airhornTime2 = "";

_dummy = ObjNull;

if(_emergencySiren isEqualTo 1) then
{
    _airhorn = "ivory_ss2000_wail";
    _airhornTime = 20.742;
    _airhorn2 = "ivory_ss2000_priority";
    _airhornTime2 = 9.862;
};
if(_emergencySiren isEqualTo 2) then
{
    _airhorn = "ivory_pa300_wail";
    _airhornTime = 18.641;
    _airhorn2 = "ivory_pa300_priority";
    _airhornTime2 = 10.674;
};

while {alive _car} do 
{    
   
	if (alive _car && !isNull driver _car && _car getVariable "ani_takedown" > 0 && (player distance _car <= 350)) then {			

        _dummy = "#particlesource" createVehicleLocal ASLToAGL getPosWorld _this;
        _dummy attachTo [_this,[0,0,0]];

            [_this,_airhorn,_airhornTime,_airhorn2,_airhornTime2,_dummy] spawn {
                params["_this","_airhorn","_airhornTime","_airhorn2","_airhornTime2","_dummy"];
                while{_this getVariable "ani_takedown" == 1} do {
                    _timeStarted = time;
					
					if(_this getVariable "ani_siren" > 0 && _this getVariable "ani_siren" != 3) then {
						_dummy say3D [_airhorn2,250];
						waitUntil { time >= _timeStarted + _airhornTime2 || _this getVariable "ani_takedown" != 1 };
					} else {
						_dummy say3D [_airhorn,250];
						waitUntil { time >= _timeStarted + _airhornTime || _this getVariable "ani_takedown" != 1 };
					};

                };
            };
            
		waitUntil { _car getVariable "ani_takedown" == 0 };

    } else {
        
        detach _dummy;
        deleteVehicle _dummy;

        waitUntil {sleep 0.01; !alive _car || (!isNull driver _car && _car getVariable "ani_takedown" > 0 && (player distance _car <= 350)) };

    };

};