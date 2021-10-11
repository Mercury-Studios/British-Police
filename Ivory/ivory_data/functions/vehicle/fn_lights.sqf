if(isDedicated) exitWith {};
params ["_car"];

while {alive _car} do
{
	if (alive _car && (driver _car == player) && damage _car < 0.7 && (_car getVariable "ani_lightbar") > 0) then {	

		_car animate["light_lh", 1];
		_car animate["light_lp", 1];
		sleep 0.1;
		_car animate["light_lh", 0];
		_car animate["light_lp", 0];
		sleep 0.1;
		_car animate["light_lh", 1];
		_car animate["light_lp", 1];
		sleep 0.1;
		_car animate["light_lh", 0];
		_car animate["light_lp", 0];

		sleep 0.25;

		_car animate["light_rh", 1];
		_car animate["light_rp", 1];
		sleep 0.1;
		_car animate["light_rh", 0];
		_car animate["light_rp", 0];
		sleep 0.1;
		_car animate["light_rh", 1];
		_car animate["light_rp", 1];
		sleep 0.1;
		_car animate["light_rh", 0];
		_car animate["light_rp", 0];
		
		sleep 0.25;

    } else {
		

		waitUntil {sleep 1; !alive _car || (damage _car < 0.7 && (_car getVariable ["ani_lightbar",1] > 0) && (driver _car == player))};

	};
};
