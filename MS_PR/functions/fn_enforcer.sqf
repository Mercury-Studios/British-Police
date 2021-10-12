/*
	Execution On: Client/Server

	Made by: OpticCobra

*/

#include "\a3\editor_f\Data\Scripts\dikCodes.h"

["Project Reality - British Emergency Services","Enforcer1", "Enforcer",
{
	if (currentWeapon player isKindOf "MS_Enforcer") then
	{
		_playerPos = position player;
		_nearestBuilding = nearestBuilding player;
		_distancetohouse = _playerPos distance _nearestBuilding;

		private "_intersects";
		private _begin = ASLtoATL eyepos player;
		private  _end = _begin vectorAdd (eyeDirection player vectorMultiply 1.5);
		{
			_intersects = ([cursorObject, _x] intersect [_begin,_end]);
			if (count (_intersects select 0) > 0) exitwith {_intersects}
		} forEach  ["VIEW","GEOM","FIRE"];
		if (currentWeapon player isKindOf "MS_Enforcer" && (count (_intersects select 0) > 0)) then
		{
			private _seed = [1,101] call BIS_fnc_randomInt;
			if (count (_intersects select 0) > 0 and _seed > 40) then
			{
				[cursortarget, ["DoorKickSound", 100, 1]] remoteExec ["say3D"];
				_select_door = format ["%1_rot", (_intersects select 0 select 0)];
				cursorObject animate [_select_door, 1, 8];
			}
			else
			{
				[cursortarget, ["Smash", 100, 1]] remoteExec ["say3D"];
				[] spawn
				{
					disableUserInput true;
					sleep 0.7;
					disableUserInput false;
				};
			};
		};
	};
}
, "", [DIK_B, [false, true, false]]] call CBA_fnc_addKeybind;
