mst_fnc_lightScript = {
    _position = player modelToWorld [ .75, -0.2, 1];
	pos = _position;
    _lightpoint = "#lightpoint" createVehicle _position;
    _lightpoint setLightColor [19,93,216];
    _lightpoint setLightAmbient [19,93,216];
    _lightpoint setLightUseFlare true;
    _lightpoint setLightFlareSize 2;
    _lightpoint setLightFlareMaxDistance 10;
    _lightpoint setLightBrightness .1;
    _lightpoint setLightDayLight true;
    sleep 0.15;
    deleteVehicle _lightpoint;
	
	_position2 = player modelToWorld [-0.1, -0.2, 1];
	pos2 = _position2;
    _lightpoint2 = "#lightpoint" createVehicle _position2;
    _lightpoint2 setLightColor [19,93,216];
    _lightpoint2 setLightAmbient [0.2,0.0,0.3];
    _lightpoint2 setLightUseFlare true;
    _lightpoint2 setLightFlareSize 2;
    _lightpoint2 setLightFlareMaxDistance 10;
    _lightpoint2 setLightBrightness .1;
    _lightpoint2 setLightDayLight true;
    sleep 0.15;
    deleteVehicle _lightpoint2;
};

mst_fnc_lightScriptOUT = {
    _lightpoint = "#lightpoint" createVehicle pos;
    _lightpoint setLightColor [19,93,216];
    _lightpoint setLightAmbient [19,93,216];
    _lightpoint setLightUseFlare true;
    _lightpoint setLightFlareSize 2;
    _lightpoint setLightFlareMaxDistance 10;
    _lightpoint setLightBrightness .1;
    _lightpoint setLightDayLight true;
    sleep 0.15;
    deleteVehicle _lightpoint;
	
    _lightpoint2 = "#lightpoint" createVehicle pos2;
    _lightpoint2 setLightColor [19,93,216];
    _lightpoint2 setLightAmbient [0.2,0.0,0.3];
    _lightpoint2 setLightUseFlare true;
    _lightpoint2 setLightFlareSize 2;
    _lightpoint2 setLightFlareMaxDistance 10;
    _lightpoint2 setLightBrightness .1;
    _lightpoint2 setLightDayLight true;
    sleep 0.15;
    deleteVehicle _lightpoint2;
};
0 = [] spawn {
	while {true} do {
		if !(player == vehicle player) then {
			if(lights) then {
				if(typeOf vehicle player == "PR_HatchbackANPR") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_HatchbackArmed") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_Ambulance") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_AmbulanceHART") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};

				if(typeOf vehicle player == "PR_TSUVan") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_TSUVanCargo") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_RapidSUV") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_Hatchback") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_ProwlerArmed") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "PR_Prowler") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "MS_SUVMet") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "MS_SUVPaDP") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
				
				if(typeOf vehicle player == "MS_SUVArmed") then {
					remoteExec [mst_fnc_lightScript, 0, true];
				};
			};
		} else {
			if(lights) then {
				remoteExec [mst_fnc_lightScriptOUT, 0, true];
			};
		};
		sleep .1;
	};
};