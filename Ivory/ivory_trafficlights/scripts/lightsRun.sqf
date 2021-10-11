while {true} do {

		{
			if(_x select 1 == 2) then {
				(_x select 0) animate["lightyellow",0];
				(_x select 0) animate["lightred",1];
			};
		} forEach ivory_trafficlights;
	
	if(count ivory_trafficlights > 0) then {


		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["lightred",0];
				(_x select 0) animate["lightgreen",1];
				(_x select 0) animate["dontwalk",0];
				(_x select 0) animate["walk",1];
				(_x select 0) animate["dontwalk2",1];
				(_x select 0) animate["walk2",0]; 
			} else {
				(_x select 0) animate["dontwalk",1];
				(_x select 0) animate["walk",0];
				(_x select 0) animate["dontwalk2",0];
				(_x select 0) animate["walk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 20;	
		
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
			} forEach ivory_trafficlights;
			
		sleep 1;

		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
			} forEach ivory_trafficlights;
			
		sleep 1;

		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",1];
				(_x select 0) animate["lightgreen",0];
				(_x select 0) animate["lightyellow",1];
				(_x select 0) animate["dontwalk",1];
			} else {
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 1) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
				(_x select 0) animate["lightyellow",0];
				(_x select 0) animate["lightred",1];
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 3;













		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["lightred",0];
				(_x select 0) animate["lightgreen",1];
				(_x select 0) animate["dontwalk",0];
				(_x select 0) animate["walk",1];
				(_x select 0) animate["dontwalk2",1];
				(_x select 0) animate["walk2",0]; 
			} else {
				(_x select 0) animate["dontwalk",1];
				(_x select 0) animate["walk",0];
				(_x select 0) animate["dontwalk2",0];
				(_x select 0) animate["walk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 20;	
		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
			} forEach ivory_trafficlights;
			
		sleep 1;

		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
			} forEach ivory_trafficlights;
			
		sleep 1;

		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",1];
				(_x select 0) animate["lightgreen",0];
				(_x select 0) animate["lightyellow",1];
				(_x select 0) animate["dontwalk",1];
			} else {
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;

		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 0.5;
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["dontwalk",0];
			} else {
				(_x select 0) animate["dontwalk2",0];
			};
		} forEach ivory_trafficlights;
		
		sleep 1;
		
		{ 
			if(_x select 1 == 2) then {
				(_x select 0) animate["walk",0]; 
				(_x select 0) animate["dontwalk",1]; 
				(_x select 0) animate["lightyellow",0];
				(_x select 0) animate["lightred",1];
			} else {
				(_x select 0) animate["walk2",0];
				(_x select 0) animate["dontwalk2",1];
			};
		} forEach ivory_trafficlights;

		sleep 3;




	};
};