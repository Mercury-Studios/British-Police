mst_fnc_sirenScript = {
	finished = false;
	deleteVehicle dummy;
	dummy = "#particlesource" createVehicleLocal getPos vehicle player;
	dummy setPos getPos vehicle player;
	dummy attachTo [vehicle player];
	dummy say3D sirenType;
	if(sirenType == "YelpFinal") then {
		sleep 2.797;
		finished = true;
	} else
	{
		sleep 4.531;
		finished = true;
	};
	deleteVehicle dummy;
};
sirens = true;
sirenType = "YelpFinal";
1 = [] spawn {
	while {sirens} do {
		if (vehicle player == player) then {} else {
			if(typeOf vehicle player == "PR_HatchbackANPR") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
				if(sirenType == "YelpFinal") then {
					sleep 2.797;
					finished = true;
				} else
				{
					sleep 4.531;
					finished = true;
				};
			};
	
			if(typeOf vehicle player == "PR_HatchbackArmed") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_Ambulance") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
			
			if(typeOf vehicle player == "PR_TSUVan") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_TSUVanCargo") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_AmbulanceHART") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_RapidSUV") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_Hatchback") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_ProwlerArmed") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "PR_Prowler") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
				if(sirenType == "YelpFinal") then {
					sleep 2.797;
					finished = true;
				} else
				{
					sleep 4.531;
					finished = true;
				};
			};
				
			if(typeOf vehicle player == "MS_SUVMet") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "MS_SUVPaDP") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
				
			if(typeOf vehicle player == "MS_SUVArmed") then {
				remoteExec [mst_fnc_sirenScript, 0, true];
			};
		};
	};
};