_veh = _this;

_antenna = 75;
_distanceAhead = 50;

ivory_em_radarArr = [];

_lock1 = 20;
_lock2 = 21;
_lock3 = 22;
_lockarr = [_lock1, _lock2, _lock3];
_target1 = 17;
_target2 = 18;
_target3 = 19;
_targetarr = [_target1, _target2, _target3];
_patrol1 = 23;
_patrol2 = 24;
_patrol3 = 25;
_patrolarr = [_patrol1, _patrol2, _patrol3];
_allarr = _lockarr + _targetarr + _patrolarr;

_firstmessage = false;

if(_veh animationPhase "lbSystem_antenna" == 1) then {
  _antenna = 135;
  _distanceAhead = 75;
};


_scriptBeep = _veh spawn {
    while{_this getVariable 'ani_radar' == 1 } do {
				if(ivory_setting_alertsound) then {
						playSound "ivory_beep"; 
						sleep 1.75;
				};
        
    };
};
        
while { alive _veh && _veh getVariable 'ani_radar' == 1 && player IN _veh } do {

      if(!_firstmessage) then {

          format['Data about vehicles that are within %1m, %2°, and above %3 Km/h* will now be recorded.<br/>* This can be changed in the addon options.',_distanceAhead,_antenna,ivory_setting_alertspeed] spawn ivory_fnc_shownotification;
              
          _firstmessage = true;
      };

      _target = ObjNull;
      _targets = (nearestObjects [player, ["Car"], _distanceAhead])-[_veh];

      if(count _targets > 0) then {

		  {

			  if( ([position _veh, getDir _veh, _antenna, position _x] call BIS_fnc_inAngleSector) && _x distance _veh < _distanceAhead  && speed _x > 15 && !(lineIntersects [eyePos _veh, aimPos _x, _veh, _x]) && !(_x IN ivory_em_radarArr) && !("ivory_laser_jammer" IN magazineCargo _x)) then {
				_target = _x;
				ivory_em_radarArr pushBack _target;
				  
				[format["ivory_eh_rad%1",_target], "onEachFrame", 
				{
					params["_target","_veh"];
					_fontColor = [1,1,0,1];
					_speed = round(speed _target);
					
					if(_speed > ivory_setting_alertspeed) then {
					  
					  _fontColor = [1,0,0,1];
					  
					};
					_pos = visiblePosition _target;
					_pos set[2,(getPosATL _target select 2) + 2];
					drawIcon3D ["",_fontColor,_pos,1,1,1,format["%1 Km/h",_speed],0,0.05];
				
				}, [_target,_veh]] call BIS_fnc_addStackedEventHandler;
				
						[_veh, _target, _antenna, _distanceAhead] spawn {
							params["_veh","_target", "_antenna", "_distanceAhead"]; 

							_speed = 0;
							while{([position _veh, getDir _veh, _antenna, position _target] call BIS_fnc_inAngleSector) && _target distance _veh < _distanceAhead && speed _target > 15 && !(lineIntersects [eyePos _veh, aimPos _target, _veh, _target]) && _veh getVariable ['ani_radar',1] == 1 && !("ivory_laser_jammer" IN magazineCargo _target)} do {
							
								sleep 0.01;	
								
								if(speed _target > _speed) then {
									_speed = speed _target;
								};
								
								if(speed _target > ivory_setting_alertspeed && isNil "ivory_alert_speed" && ivory_setting_alertsound) then {
									ivory_alert_speed = [_target] spawn {
										params["_target"];
										while {speed _target > ivory_setting_alertspeed && _target IN ivory_em_radarArr} do {
											
											playSound "ivory_alert";
											
											sleep 0.5;
										};
										ivory_alert_speed = nil;
									};
								
								};
					  
								
							};
					
							if(_speed > ivory_setting_alertspeed) then {
							  
							  [_target, _speed] spawn ivory_fnc_vehicleData;
							  
							};
							
							ivory_em_radarArr = ivory_em_radarArr - [_target];
							
							[format["ivory_eh_rad%1",_target], "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
						  };
				  };

		  } forEach _targets;
	  };

      sleep 0.25;

};

_veh setVariable ['ani_radar',0,true];
_veh setVariable ['radarRunning',0];
terminate _scriptBeep;