if(isDedicated) exitWith {};
params ["_car"];

private _red =  "ivory_data\data\lbSystem_red.rvmat";
private _white = "ivory_data\data\lbSystem_white.rvmat";
private _blue = "ivory_data\data\lbSystem_blue.rvmat";
private _amber = "ivory_data\data\lbSystem_amber.rvmat";
private _blank = "a3\data_f\default.rvmat";
private _light1 = "";
private _light2 = "";
private _light3 = "";
private _light4 = "";
private _light1_text = "";
private _light2_text = "";
private _light3_text = "";
private _light4_text = "";
private _emergencyType = getNumber(configFile >> "cfgVehicles" >> typeOf _car >> "emergencyLightbarType");
 
call
{  
    if(_emergencyType isEqualTo 1) exitWith
    { // US style lights, red and blue
        _light1 = _red;
        _light2 = _white;
        _light3 = _blue;
        _light4 = _amber;
				_light1_text = "red";
				_light2_text = "white";
				_light3_text = "blue";
				_light4_text = "amber";

    };
       
    if(_emergencyType isEqualTo 2) exitWith
    { // EMS style lights, all red
        _light1 = _red;
        _light2 = _white;
        _light3 = _red;
        _light4 = _amber;
				_light1_text = "red";
				_light2_text = "white";
				_light3_text = "red";
				_light4_text = "amber";
    };
   
    if(_emergencyType isEqualTo 3) exitWith
    { // EU style lights, all blue
        _light1 = _blue;
        _light2 = _white;
        _light3 = _blue;
        _light4 = _amber;
				_light1_text = "blue";
				_light2_text = "white";
				_light3_text = "blue";
				_light4_text = "amber";
    };
   
    if(_emergencyType isEqualTo 4) exitWith
    { // NYC style lights, red and white
        _light1 = _red;
        _light2 = _white;
        _light3 = _white;
				_light4 = _amber;
				_light1_text = "red";
				_light2_text = "white";
				_light3_text = "white";
				_light4_text = "amber";
    };
   
    if(_emergencyType isEqualTo 5) exitWith
    { // SECURITY lights, all amber
        _light1 = _amber;
        _light2 = _amber;
        _light3 = _amber;
        _light4 = _amber;
				_light1_text = "amber";
				_light2_text = "amber";
				_light3_text = "amber";
				_light4_text = "amber";
    }; 

    if(_emergencyType isEqualTo 6) exitWith
    { // SECURITY lights, all amber
        _light1 = _white;
        _light2 = _white;
        _light3 = _white;
        _light4 = _white;
				_light1_text = "white";
				_light2_text = "white";
				_light3_text = "white";
				_light4_text = "white";
    }; 
};


_lightsArr =  
[
	["lbt_back_left_1", _light1], 
	["lbt_back_left_2", _light1], 
	["lbt_back_left_3", _light1], 
	["lbt_back_left_4", _light1], 
	["lbt_back_left_5", _light1], 
	["lbt_front_left_1", _light1], 
	["lbt_front_left_2", _light1], 
	["lbt_front_left_3", _light1], 
	["lbt_front_left_4", _light1], 
	["lbt_front_left_5", _light1], 

	["lbt_back_right_1", _light3], 
	["lbt_back_right_2", _light3], 
	["lbt_back_right_3", _light3], 
	["lbt_back_right_4", _light3], 
	["lbt_back_right_5", _light3], 
	["lbt_front_right_1", _light3], 
	["lbt_front_right_2", _light3], 
	["lbt_front_right_3", _light3], 
	["lbt_front_right_4", _light3], 
	["lbt_front_right_5", _light3],

	["lbb_left_1", _light1],
	["lbb_left_2", _light1],
	["lbf_left_1", _light1],
	["lbf_left_2", _light1],
	["lbg_left_1", _light1],
	["lbr_left_1", _light1],

	["lbb_right_1", _light3],
	["lbb_right_2", _light3],
	["lbf_right_1", _light3],
	["lbf_right_2", _light3],
	["lbg_right_1", _light3],
	["lbr_right_1", _light3]

];

private _lbb_left_1 = 26;
private _lbb_left_2 = 27;
private _lbb_right_1 = 28;
private _lbb_right_2 = 29;
private _lbf_left_1 = 30;
private _lbf_left_2 = 31;
private _lbf_right_1 = 32;
private _lbf_right_2 = 33;
private _lbg_left_1 = 34;
private _lbg_right_1 = 35;
private _lbt_back_left_1 = 36;
private _lbt_back_left_2 = 37;
private _lbt_back_left_3 = 38;
private _lbt_back_left_4 = 39;
private _lbt_back_left_5 = 40;
private _lbt_back_right_1 = 41;
private _lbt_back_right_2 = 42;
private _lbt_back_right_3 = 43;
private _lbt_back_right_4 = 44;
private _lbt_back_right_5 = 45;
private _lbt_front_left_1 = 46;
private _lbt_front_left_2 = 47;
private _lbt_front_left_3 = 48;
private _lbt_front_left_4 = 49;
private _lbt_front_left_5 = 50;
private _lbt_front_right_1 = 51;
private _lbt_front_right_2 = 52;
private _lbt_front_right_3 = 53;
private _lbt_front_right_4 = 54;
private _lbt_front_right_5 = 55;
private _lbr_left_1 = 56;
private _lbr_right_1 = 57;

{

	_car setObjectMaterial[(call compile format["_%1",_x select 0]), _x select 1];

} forEach _lightsArr;
 
 
_light_left = "#lightpoint" createVehicleLocal getpos _car; 
_light_left lightAttachObject [_car, [-2,0,3]];
_light_left setLightColor [0.0, 0.0, 0.0]; 
_light_left setLightBrightness 0;

_light_right = "#lightpoint" createVehicleLocal getpos _car; 
_light_right lightAttachObject [_car, [2,0,3]];
_light_right setLightColor [0.0, 0.0, 0.0]; 
_light_right setLightBrightness 0;


call
{  
    if(_light1_text isEqualTo "blue") exitWith
    { 
		_light_left setLightAmbient [0.0, 0.0, 5]; 
	};
    if(_light1_text isEqualTo "red") exitWith
    { 
		_light_left setLightAmbient [3, 0.0, 0.0]; 
	};
    if(_light1_text isEqualTo "amber") exitWith
    { 
		_light_left setLightAmbient [3.0, 3.0, 0]; 
	};
    if(_light1_text isEqualTo "white") exitWith
    { 
		_light_left setLightAmbient [3.0, 3.0, 3]; 
	};

};

call
{  
    if(_light3_text isEqualTo "blue") exitWith
    { 
		_light_right setLightAmbient [0.0, 0.0, 5]; 
	};
    if(_light3_text isEqualTo "red") exitWith
    { 
		_light_right setLightAmbient [3, 0.0, 0.0]; 
	};
    if(_light3_text isEqualTo "amber") exitWith
    { 
		_light_right setLightAmbient [3.0, 3.0, 0]; 
	};
    if(_light3_text isEqualTo "white") exitWith
    { 
		_light_right setLightAmbient [3.0, 3.0, 3]; 
	};

};

private _clear_lights = 
{  
    for "_i" from _lbb_left_1 to _lbt_front_right_5 do
    {
        _car setObjectMaterial [_i, _blank];
    }; 
	_car animate["lightf_l",1];
	_car animate["lightf_r",1];
	_car animate["lightb_l",1];
	_car animate["lightb_r",1];
};

private _clear_lights_all = {
	_light_left setLightBrightness 0;
	_light_right setLightBrightness 0;
};

private _light_array1 = 
[
	
	["lbt_back_left_1", 1], 
	["lbt_back_left_2", 1], 
	["lbt_back_left_3", 0], 
	["lbt_back_left_4", 0], 
	["lbt_back_left_5", 1], 
	["lbt_front_left_1", 1], 
	["lbt_front_left_2", 1], 
	["lbt_front_left_3", 0], 
	["lbt_front_left_4", 0], 
	["lbt_front_left_5", 1], 

	["lbt_back_right_1", 1], 
	["lbt_back_right_2", 1], 
	["lbt_back_right_3", 0], 
	["lbt_back_right_4", 0], 
	["lbt_back_right_5", 1], 
	["lbt_front_right_1", 1], 
	["lbt_front_right_2", 1], 
	["lbt_front_right_3", 0], 
	["lbt_front_right_4", 0], 
	["lbt_front_right_5", 1],

	["lbb_left_1", 1],
	["lbb_left_2", 0],
	["lbf_left_1", 1],
	["lbf_left_2", 0],
	["lbg_left_1", 1],
	["lbr_left_1", 1],

	["lbb_right_1", 1],
	["lbb_right_2", 0],
	["lbf_right_1", 1],
	["lbf_right_2", 0],
	["lbg_right_1", 1],
	["lbr_right_1", 1]

];

private _light_array2 = 
[
	["lbt_back_left_1", 1], 
	["lbt_back_left_2", 1], 
	["lbt_back_left_3", 0], 
	["lbt_back_left_4", 0], 
	["lbt_back_left_5", 1], 
	["lbt_front_left_1", 1], 
	["lbt_front_left_2", 1], 
	["lbt_front_left_3", 0], 
	["lbt_front_left_4", 0], 
	["lbt_front_left_5", 1], 

	["lbt_back_right_1", 0], 
	["lbt_back_right_2", 0], 
	["lbt_back_right_3", 1], 
	["lbt_back_right_4", 1], 
	["lbt_back_right_5", 0], 
	["lbt_front_right_1", 0], 
	["lbt_front_right_2", 0], 
	["lbt_front_right_3", 1], 
	["lbt_front_right_4", 1], 
	["lbt_front_right_5", 0],

	["lbb_left_1", 1],
	["lbb_left_2", 0],
	["lbf_left_1", 1],
	["lbf_left_2", 0],
	["lbg_left_1", 1],
	["lbr_left_1", 1],

	["lbb_right_1", 1],
	["lbb_right_2", 0],
	["lbf_right_1", 1],
	["lbf_right_2", 0],
	["lbg_right_1", 1],
	["lbr_right_1", 1]

];

private _light_array3 = 
[
	["lbt_back_left_1", 1], 
	["lbt_back_left_2", 1], 
	["lbt_back_left_3", 1], 
	["lbt_back_left_4", 1], 
	["lbt_back_left_5", 1], 
	["lbt_front_left_1", 1], 
	["lbt_front_left_2", 1], 
	["lbt_front_left_3", 1], 
	["lbt_front_left_4", 1], 
	["lbt_front_left_5", 1], 

	["lbt_back_right_1", 0], 
	["lbt_back_right_2", 0], 
	["lbt_back_right_3", 0], 
	["lbt_back_right_4", 0], 
	["lbt_back_right_5", 0], 
	["lbt_front_right_1", 0], 
	["lbt_front_right_2", 0], 
	["lbt_front_right_3", 0], 
	["lbt_front_right_4", 0], 
	["lbt_front_right_5", 0],

	["lbb_left_1", 1],
	["lbb_left_2", 1],
	["lbf_left_1", 1],
	["lbf_left_2", 1],
	["lbg_left_1", 1],
	["lbr_left_1", 1],

	["lbb_right_1", 0],
	["lbb_right_2", 0],
	["lbf_right_1", 0],
	["lbf_right_2", 0],
	["lbg_right_1", 0],
	["lbr_right_1", 0]
];

private _light_array4 = 
[
	["lbt_back_left_1", 0], 
	["lbt_back_left_2", 0], 
	["lbt_back_left_3", 1], 
	["lbt_back_left_4", 1], 
	["lbt_back_left_5", 1], 
	["lbt_front_left_1", 0], 
	["lbt_front_left_2", 0], 
	["lbt_front_left_3", 1], 
	["lbt_front_left_4", 1], 
	["lbt_front_left_5", 1], 

	["lbt_back_right_1", 1], 
	["lbt_back_right_2", 1], 
	["lbt_back_right_3", 0], 
	["lbt_back_right_4", 0], 
	["lbt_back_right_5", 0], 
	["lbt_front_right_1", 1], 
	["lbt_front_right_2", 1], 
	["lbt_front_right_3", 0], 
	["lbt_front_right_4", 0], 
	["lbt_front_right_5", 0],

	["lbb_left_1", 1],
	["lbb_left_2", 0],
	["lbf_left_1", 1],
	["lbf_left_2", 0],
	["lbg_left_1", 1],
	["lbr_left_1", 1],

	["lbb_right_1", 1],
	["lbb_right_2", 0],
	["lbf_right_1", 1],
	["lbf_right_2", 0],
	["lbg_right_1", 1],
	["lbr_right_1", 1]
];


private _light_array5 = 
[
	["lbt_back_left_1", 1], 
	["lbt_back_left_2", 1], 
	["lbt_back_left_3", 1], 
	["lbt_back_left_4", 1], 
	["lbt_back_left_5", 1], 
	["lbt_front_left_1", 1], 
	["lbt_front_left_2", 1], 
	["lbt_front_left_3", 1], 
	["lbt_front_left_4", 1], 
	["lbt_front_left_5", 1], 

	["lbt_back_right_1", 1], 
	["lbt_back_right_2", 1], 
	["lbt_back_right_3", 1], 
	["lbt_back_right_4", 1], 
	["lbt_back_right_5", 1], 
	["lbt_front_right_1", 1], 
	["lbt_front_right_2", 1], 
	["lbt_front_right_3", 1], 
	["lbt_front_right_4", 1], 
	["lbt_front_right_5", 1],

	["lbb_left_1", 1],
	["lbb_left_2", 1],
	["lbf_left_1", 1],
	["lbf_left_2", 1],
	["lbg_left_1", 1],
	["lbr_left_1", 1],

	["lbb_right_1", 1],
	["lbb_right_2", 1],
	["lbf_right_1", 1],
	["lbf_right_2", 1],
	["lbg_right_1", 1],
	["lbr_right_1", 1]
];

_animate = {
	params["_car","_ani_lightbar","_array","_type","_delay","_delay2"];
	if!((_car getVariable "ani_lightbar") isEqualTo _ani_lightbar) exitWith {};

	_phase = 0;
	{ 

		_phase = _x select 1;
		
		if(_type == 1) then {
			if(_phase == 0) then {
				_phase = 1;
			} else {
				_phase = 0;
			};
		};

		_car animate[_x select 0, _phase];

	} forEach (call compile format["_light_array%1",_array]);

	_side = "left";
	if(_type == 1) then {
		_side = "right";
	};

	(call compile format["_light_%1",_side]) setLightBrightness 0.15;


	Sleep _delay;

	{ 

		_car animate[_x select 0, 0];

	} forEach (call compile format["_light_array%1",_array]);

	(call compile format["_light_%1",_side]) setLightBrightness 0;

	if(_delay2 > 0) then {
		Sleep _delay2;
	};

};

while {alive _car} do
{
	if (alive _car && (player distance _car <= 250) && damage _car < 0.7 && (_car getVariable "ani_lightbar") > 0) then {	
		_ani_lightbar = _car getVariable "ani_lightbar";
		if((_car getVariable "ani_lightbar") isEqualTo 1) exitWith
		{
				// 1
				_ani_lightbar = _car getVariable "ani_lightbar";
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				
			
		};
		
		if((_car getVariable "ani_lightbar") isEqualTo 2) exitWith
		{
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,1,1,0.2,0.1] call _animate;

		};

		if((_car getVariable "ani_lightbar") isEqualTo 3) exitWith
		{
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,2,1,0.2,0.1] call _animate;
		};

		if((_car getVariable "ani_lightbar") isEqualTo 4) exitWith
		{
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,0,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.1] call _animate;

		};

		if((_car getVariable "ani_lightbar") isEqualTo 5) exitWith
		{
				[_car,_ani_lightbar,3,0,0.2,0.05] call _animate;
				[_car,_ani_lightbar,3,1,0.2,0.05] call _animate;

		};
          
    } else {
		waitUntil {Sleep 0.01; !alive _car || (damage _car < 0.7 && (_car getVariable ["ani_lightbar",1] > 0) && player distance _car <= 250)};
	};
};
