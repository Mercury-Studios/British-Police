#include "macros.h"
/**
  @Author : [Utopia] Amaury
  @Creation : ??
  @Modified : 23/10/17
  @Description : Load all roads from road file , if file is not found gets all road manually (freeze the game)
  @Return : ARRAY - array of roads
**/

_worlds = ["Altis","Jackson_County","Malden","Stratis","Tanoa"];

if(worldName IN _worlds) then {
	_allRoads = parseSimpleArray loadFile (gps_core_dir +  format["data\%1\AllRoads.sqf",worldName]);
};

if (isNil "_allRoads") exitWith {
	[worldSize / 2,worldSize / 2,0] nearRoads worldSize; // actually , does not freeze on server
};

// return all roads
_allRoads apply {
	_road = (_x nearRoads 0.1) param [0,objNull];
	if (isNull _road) then {
		[_x,150] call bis_fnc_nearestRoad; // damn bridges
	}else{
		_road;
	};	
};