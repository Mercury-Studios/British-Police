class CfgPatches {
	class ivory_trafficlights {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgVehicles {
	class HouseBase;
	
	class House : HouseBase {
		class DestructionEffects;	
	};
	class ruins;

	class Land_ivory_trafficlight0a : House {
		scope = 2;
		model = "\ivory_trafficlights\ivory_trafficlight00a";
		armor = 20000;
		Displayname = "Base Traffic Light A";
		destrType = "DestructNo";

		class AnimationSources {
			class lightgreen {
				source = "user";
				animPeriod = 0.001;
				initPhase = 0; //0
			};
			class lightred: lightgreen{};
			class lightyellow: lightgreen{};
			class walk: lightgreen{};
			class dontwalk: lightgreen{};
			class walk2: lightgreen{};
			class dontwalk2: lightgreen{};
		}; 
		
		class eventhandlers {
				init = "[_this select 0] execVM 'ivory_trafficlights\scripts\init.sqf'; ";
		};
		
	}; 

	class Land_ivory_trafficlight0b : Land_ivory_trafficlight0a {
		model = "\ivory_trafficlights\ivory_trafficlight00b";
		Displayname = "Base Traffic Light B";

		
	}; 

	class Land_ivory_trafficlight0c : Land_ivory_trafficlight0a {
		model = "\ivory_trafficlights\ivory_trafficlight00c";
		Displayname = "Base Traffic Light C";
		
	}; 
	class Land_ivory_trafficlight0d : Land_ivory_trafficlight0a {
		model = "\ivory_trafficlights\ivory_trafficlight00d";
		Displayname = "Base Traffic Light D";
		
	}; 

	class Land_ivory_trafficlight1a : Land_ivory_trafficlight0a {
		scope = 2;
		model = "\ivory_trafficlights\ivory_trafficlight01a";
		armor = 20000;
		Displayname = "Small Traffic Light A";
		destrType = "DestructNo";
		


	}; 

	class Land_ivory_trafficlight1b : Land_ivory_trafficlight1a {
		Displayname = "Small Traffic Light B";
		model = "\ivory_trafficlights\ivory_trafficlight01b";
	}; 

	class Land_ivory_trafficlight1c : Land_ivory_trafficlight1a {
		Displayname = "Small Traffic Light C";
		model = "\ivory_trafficlights\ivory_trafficlight01c";
	}; 
	class Land_ivory_trafficlight1d : Land_ivory_trafficlight1a {
		Displayname = "Small Traffic Light D";
		model = "\ivory_trafficlights\ivory_trafficlight01d";
	}; 
	
	class Land_ivory_trafficlight2a : Land_ivory_trafficlight1a {
		Displayname = "Large Traffic Light A";
		model = "\ivory_trafficlights\ivory_trafficlight02a";
	}; 
	
	class Land_ivory_trafficlight2b : Land_ivory_trafficlight1a {
		Displayname = "Large Traffic Light B";
		model = "\ivory_trafficlights\ivory_trafficlight02b";
	}; 
	class Land_ivory_trafficlight2c : Land_ivory_trafficlight1a {
		Displayname = "Large Traffic Light C";
		model = "\ivory_trafficlights\ivory_trafficlight02c";
	}; 
	class Land_ivory_trafficlight2d : Land_ivory_trafficlight1a {
		Displayname = "Large Traffic Light D";
		model = "\ivory_trafficlights\ivory_trafficlight02d";
	}; 

}; 

class Extended_PreInit_EventHandlers {
    class ivory_trafficlights {
        init = "call compile preprocessFileLineNumbers '\ivory_trafficlights\scripts\lights.sqf'";
    };
};