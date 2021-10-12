class CfgPatches
{
	class PR_Eurocopters
	{
		units[] = 
		{
			"PR_EurocopterHEMS",
			"PR_EurocopterHEMSYorkshire",
			"PR_EurocopterNPAS135",
			"PR_EurocopterNPAS635",
			"PR_EurocopterHMCG"
		};
		weapons[] = 
		{
			"MS_Enforcer",
			"MS_Crusher"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class cfgVehicles
{
	class ECXlu_base_F;
	class EC135ADlu;
	class EventHandlers;
	class PR_EurocopterHEMS: EC135ADlu
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0),[""NHS_Ambulance"",1],""ECX_civ_proxy"",1,""ECX_mil_proxy"",1,""ECX_med_proxy"",0,""ECX_cam_proxy"",0,""ECX_gun_proxy"",1] call BIS_fnc_initVehicle };";
		};
		author = "Mercury Studios - Silence/EC135 Creators"
		_generalMacro = "EC135ADlu";
		scope = 2;
		side = 2;
		faction = "pr_NHS";
		editorSubcategory = "pr_nhs_HEMS";
		displayName="HEMS EC-135 (Medical)";
		crew = "PR_HEMSPilotUniform";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4", "Camo5", "Camo6"};
		hiddenSelectionsTextures[] = {"MS_Eurocopter\Vehicles\Data\eurocopter.jpg","MS_Eurocopter\Vehicles\Data\camo2.jpg","MS_Eurocopter\Vehicles\Data\camo3.jpg","MS_Eurocopter\Vehicles\Data\camo4.jpg", "Luke_ECX\Skin\SC\body5.paa", ""};
		animationList[] = 
		{
			"ECX_civ_proxy",1,
			"ECX_mil_proxy",1,
			"ECX_med_proxy",0,
			"ECX_cam_proxy",0,
			"ECX_gun_proxy",1
		};
		typicalCargo[] = {"PR_HEMSMedicUniform"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class PR_EurocopterHEMSYorkshire: EC135ADlu
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0),[""NHS_Ambulance"",1],""ECX_civ_proxy"",1,""ECX_mil_proxy"",1,""ECX_med_proxy"",0,""ECX_cam_proxy"",0,""ECX_gun_proxy"",1] call BIS_fnc_initVehicle };";
		};
		author = "Mercury Studios - Silence/EC135 Creators"
		_generalMacro = "EC135ADlu";
		scope = 2;
		side = 2;
		faction = "pr_NHS";
		editorSubcategory = "pr_nhs_HEMS";
		displayName="HEMS EC-135 Yorkshire (Medical)";
		crew = "PR_HEMSPilotUniform";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4", "Camo5", "Camo6"};
		hiddenSelectionsTextures[] = {"MS_Eurocopter\Vehicles\Data\eurocopteryork.jpg","MS_Eurocopter\Vehicles\Data\camo2york.jpg","MS_Eurocopter\Vehicles\Data\camo3york.jpg","MS_Eurocopter\Vehicles\Data\camo4york.jpg", "Luke_ECX\Skin\SC\body5.paa", ""};
		animationList[] = 
		{
			"ECX_civ_proxy",1,
			"ECX_mil_proxy",1,
			"ECX_med_proxy",0,
			"ECX_cam_proxy",0,
			"ECX_gun_proxy",1
		};
		typicalCargo[] = {"PR_HEMSMedicUniform", "PR_HEMSMedicUniform"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class PR_EurocopterHMCG: EC135ADlu
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0),[""NHS_Ambulance"",1],""ECX_civ_proxy"",1,""ECX_mil_proxy"",1,""ECX_med_proxy"",0,""ECX_cam_proxy"",0,""ECX_gun_proxy"",1] call BIS_fnc_initVehicle };";
		};
		author = "Mercury Studios - Silence/EC135 Creators"
		_generalMacro = "EC135ADlu";
		scope = 2;
		side = 2;
		faction = "pr_NHS";
		editorSubcategory = "pr_nhs_HEMS";
		displayName="HMCG EC-135";
		crew = "PR_HEMSPilotUniform";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4", "Camo5", "Camo6"};
		hiddenSelectionsTextures[] = {"MS_Eurocopter\Vehicles\Data\eurocopterhmcg.jpg","MS_Eurocopter\Vehicles\Data\camo2hmcg.jpg","MS_Eurocopter\Vehicles\Data\camo3hmcg.jpg","MS_Eurocopter\Vehicles\Data\camo4hmcg.jpg", "Luke_ECX\Skin\SC\body5.paa", ""};
		animationList[] = 
		{
			"ECX_civ_proxy",1,
			"ECX_mil_proxy",1,
			"ECX_med_proxy",0,
			"ECX_cam_proxy",0,
			"ECX_gun_proxy",1
		};
		typicalCargo[] = {"PR_HEMSMedicUniform", "PR_HEMSMedicUniform"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class PR_EurocopterNPAS135: EC135ADlu
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0),[""NHS_Ambulance"",1],""ECX_civ_proxy"",1,""ECX_mil_proxy"",1,""ECX_med_proxy"",0,""ECX_cam_proxy"",0,""ECX_gun_proxy"",1] call BIS_fnc_initVehicle };";
		};
		author = "Mercury Studios - Silence/EC135 Creators"
		_generalMacro = "EC135SClu";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_NPAS";
		displayName="NPAS EC-135";
		crew = "PR_NPASPilot";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4", "Camo5", "Camo6"};
		hiddenSelectionsTextures[] = {"MS_Eurocopter\Vehicles\Data\eurocopternpas.jpg","MS_Eurocopter\Vehicles\Data\camo2npas.jpg","MS_Eurocopter\Vehicles\Data\camo3npas.jpg","MS_Eurocopter\Vehicles\Data\camo4npas.jpg", "Luke_ECX\Skin\SC\body5.paa","Luke_ECX\Skin\SC\body6.paa"};
		animationList[] =
		{
			"ECX_civ_proxy",1,
			"ECX_mil_proxy",1,
			"ECX_med_proxy",0,
			"ECX_cam_proxy",0,
			"ECX_gun_proxy",1
		};
		typicalCargo[] = {"PR_NPASPilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class EC135GNlu;
	class PR_EurocopterNPAS635: EC135GNlu
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {[(_this select 0),[""NHS_Ambulance"",1],""ECX_civ_proxy"",1,""ECX_mil_proxy"",1,""ECX_med_proxy"",0,""ECX_cam_proxy"",0,""ECX_gun_proxy"",1] call BIS_fnc_initVehicle };";
		};
		author = "Mercury Studios - Silence/EC635 Creators"
		_generalMacro = "EC135SClu";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_NPAS";
		displayName="NPAS EC-635";
		crew = "PR_NPASPilot";
		hiddenSelections[] = {"Camo1","Camo2","Camo3","Camo4", "Camo5", "Camo6"};
		hiddenSelectionsTextures[] = {"MS_Eurocopter\Vehicles\Data\eurocopternpas.jpg","MS_Eurocopter\Vehicles\Data\camo2npas.jpg","MS_Eurocopter\Vehicles\Data\camo3npas.jpg","MS_Eurocopter\Vehicles\Data\camo4npas.jpg", "Luke_ECX\Skin\SC\body5.paa","Luke_ECX\Skin\SC\body6.paa"};
		animationList[] =
		{
			"ECX_civ_proxy",1,
			"ECX_mil_proxy",0,
			"ECX_med_proxy",1,
			"ECX_cam_proxy",0,
			"ECX_gun_proxy",1
		};
		typicalCargo[] = {"PR_NPASPilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
};

class CfgFunctions
{
	class MS_Eurocopter
	{
		class functions
		{
			class deployBoard
			{
				file="\MS_Eurocopter\functions\fn_deployBoard.sqf";
				postInit=1;
			};
		};
	};
};