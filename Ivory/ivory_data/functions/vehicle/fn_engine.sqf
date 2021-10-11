params ["_car","_engine"];

if(_engine) then {

		
	private _turbo = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "turboEnabled");
	private _autoSpoiler = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "autoSpoiler");

	if(getPlayeruid (driver _car) == "76561197961308838") then {
		// hehe
		_car say3d ["ivory_38164063", 10];

	};

	_car spawn ivory_fnc_nametags;

	if(driver _car == player) then {
		_car animate["computerScreen",1];
	};

	if(_autoSpoiler == 1 && driver _car == player) then
	{
		_car spawn ivory_fnc_spoiler;
	};

	if(_turbo == 1 && driver _car == player) then
	{
		_car spawn ivory_fnc_turbo;
	};

	
} else {

	_car animate["computerScreen",0];

};