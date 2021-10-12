/*
	Execution On: Client/Server

	Purpose: Sets up variables on mission start and executes CBA keybinds

	Made by: Silence

*/

lights = false;
sirens = false;
sirenType = "";
finished = false;

pos1 = [];
pos2 = [];

execVM "\MS_PR\functions\fn_enforcer.sqf";
execVM "\MS_PR\functions\fn_mainpanic.sqf";