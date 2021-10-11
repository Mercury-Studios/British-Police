_nearest = (nearestObjects [getPos TFAR_currentUnit, ["GroundWeaponHolder"], ivory_speakerDistance]); 
_nearestFind = _nearest findIf {_x getVariable ["ivory_megaphone",false]};

if(_nearestFind == -1) exitWith {
	if((missionNamespace getVariable "tf_speakerDistance") != ivory_default_dist) exitWith {
		missionNamespace setVariable ["tf_speakerDistance", ivory_default_dist];
	};
};

if(tf_speakerDistance != ivory_speakerDistance) then {
	missionNamespace setVariable ["tf_speakerDistance", ivory_speakerDistance];
};

tf_speakerRadios = [];
call ivory_fnc_processSpeakerRadios; 