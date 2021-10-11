params["_car"];

_car setVariable ["ani_spoiler", 1];

while {alive _car && driver _car == player && isEngineOn _car} do 
{	

	if(_car getVariable "ani_spoiler" == 1) then 
	{
		if (speed _car > 100 && round(_car animationSourcePhase "spoiler") == 0) then
		{
			_car animateSource["spoiler", 1];
		};
		
		if (speed _car < 100 && round(_car animationSourcePhase "spoiler") == 1) then
		{
			_car animateSource["spoiler", 0];
		};
		
		if (round(_car animationSourcePhase "brake") == 1 && round(_car animationSourcePhase "spoiler") == 1 && player == driver _car) then
		{
			_car animateSource["spoiler_brake", 1];
		};
			
		if (round(_car animationSourcePhase "brake") == 0 && round(_car animationSourcePhase "spoiler_brake") == 1 && player == driver _car) then
		{
			_car animateSource["spoiler_brake", 0];
		};
			
		if (round(_car animationSourcePhase "spoiler_brake") == 1 && round(_car animationSourcePhase "spoiler") == 0 && player == driver _car) then
		{
			_car animateSource["spoiler_brake", 0];
		};
	};
	sleep 0.01;
	
	
};