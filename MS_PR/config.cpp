class CfgPatches
{
	class PR_Soldier
	{
		units[] = 
		{
			"PR_CTSFO516",
			"PR_TSUVan",
			"PR_TSUVanCargo",
			"PR_ARVOfficer",
			"PR_Ambulance",
			"PR_AmbulanceHART",
			"PR_CTSFOBeret",
			"PR_CTSFOHK",
			"PR_CTSFOMCX",
			"PR_CTSFOSRO",
			"PR_NHSCBRN",
			"PR_NHSEMT",
			"PR_NHSHARTCBRN",
			"PR_NHSHARTCBRNMedic",
			"PR_NHSParamedic",
			"PR_NHSStaff",
			"PR_NHSTrainee",
			"PR_NHS_Surgeon",
			"PR_NPASPilot",
			"PR_HEMSMedicUniform",
			"PR_HEMSPilotUniform",
			"PR_HARTEngineer",
			"PR_HARTMedic",
			"PR_NCAPlain",
			"PR_NCAUniformed",
			"PR_SCO19Officer",
			"PR_PaDPPlain",
			"PR_PaDPUniformed",
			"PR_MetOfficerBlack",
			"PR_MetOfficerWhite",
			"PR_RPUEngineer",
			"PR_RPUOfficer",
			"PR_Ghosthawk",
			"PR_Hummingbird",
			"PR_Taru",
			"PR_Hatchback",
			"PR_HatchbackANPR",
			"PR_HatchbackArmed",
			"PR_HatchbackPaDP",
			"MS_SUV",
			"MS_SUVArmed",
			"MS_SUVMet",
			"MS_SUVPaDP",
			"PR_Prowler",
			"PR_ProwlerArmed",
			"PR_RapidSUV",
			"PR_HatchbackRapid",
			"PR_ProwlerRapid"
		};
		weapons[] = 
		{
			"MS_Enforcer",
			"MS_Crusher"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
	class Ghosthawk_Textures 
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
	class Badges
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};

class CfgFactionClasses
{
	class pr_police
	{
		displayName = "British Police";
		author = "Silence";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 2;
		side = 1; // Blufor
	};
	class pr_NHS
	{
		displayName = "National Health Service";
		author = "Silence";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 1;
		side = 2; // Blufor
	};
};

class CfgEditorSubcategories
{
	// Police
	class pr_police_sco
	{
		displayName = "Specialist Firearms Command"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_police_met
	{
		displayName = "Metropolitan Police"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_police_traffic
	{
		displayName = "Traffic Police"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_police_NCA
	{
		displayName = "National Crime Agency"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_police_PaDP
	{
		displayName = "Parliamentary and Diplomatic Protection"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_police_npas
	{
		displayName = "National Police Air Service"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	// NHS
	class pr_nhs_paramedics
	{
		displayName = "Paramedics"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_nhs_HART
	{
		displayName = "Hazardous Area Response Team"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_nhs_HEMS
	{
		displayName = "Helicopter Emergency Medical Service"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_nhs_staff
	{
		displayName = "Medical Staff"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_nhs_CBRN
	{
		displayName = "CBRN Specialists"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
	class pr_nhs_quickresponse
	{
		displayName = "Rapid Response"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the editorSubcategory is different. Makes it work with zeus
	};
};

class CfgMagazines
{
	class CA_Magazine;
	class MS_PanicButton: CA_Magazine
	{
		author = "Silence";
		scope = 2;
		displayName = "Panic Button";
		picture = "\MS_PR\ms_logo.jpg";
		model = "\A3\Structures_F_EPA\Items\Food\BottlePlastic_V2_F.p3d";
		icon = "iconObject_circle";
		descriptionShort = "Panic Button";
	};
};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class WeaponSlotsInfo;

class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class Rifle_Base_F;

class cfgGlasses
{
	class None;
	class MS_Base: None
	{
		author = "Silence";
		scope = 1;
		weaponPoolAvailable = 1;
		picture = "\MS_PR\ms_logo.jpg";
		mass = 4;
	};
	class MS_SurgicalMask: MS_Base
	{
		displayname = "[MS] Surgical Mask";
		model = "\MS_PR\NHSMask";
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class EventHandlers;
	class Rubber_duck_base_F;
	class PR_CTSFOMCX : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] CTSFO (MCX)";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_CTSFOUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\clothing1_ctsfo_co.jpg"};
		weapons[] = {MS_MCXRattlerBlack, ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {MS_MCXRattlerBlack, ms_tazer_yellow};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};	
		linkedItems[] = {MS_FACP_CTSFO, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {MS_FACP_CTSFO, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class PR_CTSFOHK : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] CTSFO (HK416, 5.56)";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_CTSFOUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\clothing1_ctsfo_co.jpg"};
		weapons[] = {hlc_rifle_416D10_st6};				// Which weapons the character has.
		respawnWeapons[] = {hlc_rifle_416D10_st6};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};	
		linkedItems[] = {MS_CTSFOPlateCarrier, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {MS_CTSFOPlateCarrier, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class PR_CTSFO516 : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		scopeCurator = 1;
		displayName = "[PR] CTSFO (SIG 516, 5.56)";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_CTSFOUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\clothing1_ctsfo_co.jpg"};
		weapons[] = {MS_SIG516};				// Which weapons the character has.
		respawnWeapons[] = {MS_SIG516};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};	
		linkedItems[] = {MS_LBT6094_CTSFOAlt, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {MS_LBT6094_CTSFOAlt, MS_CTSFOCore, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class PR_CTSFOSRO : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] CTSFO Specialist Rifles Officer (AWM)";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_CTSFOUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\clothing1_ctsfo_co.jpg"};
		weapons[] = {hlc_rifle_awmagnum_BL};				// Which weapons the character has.
		respawnWeapons[] = {hlc_rifle_awmagnum_BL};		// Which weapons the character respawns with.
		Items[] = {FirstAidKit};				// Which items the character has.
		RespawnItems[] = {FirstAidKit};			// Which items the character respawns with.
		magazines[] = {Chemlight_green, Chemlight_green};				// What ammunition the character has.
		respawnMagazines[] = {Chemlight_green, Chemlight_green};	
		linkedItems[] = {MS_CTSFOPlateCarrier, PR_CTSFOBeret, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_CTSFOPlateCarrier, PR_CTSFOBeret, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_ARVOfficer : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] ARV Officer (G36C, 5.56)";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01"
		uniformClass = "PR_ARVUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\sco19_uniform_co.jpg"};
		weapons[] = {hlc_rifle_G36C, ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {hlc_rifle_G36C, ms_tazer_yellow};		// Which weapons the character respawns with.
		linkedItems[] = {PR_ARVHelmet, MS_LBT6094_SCO, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {PR_ARVHelmet, MS_LBT6094_SCO, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class PR_NCAUniformed : B_Soldier_base_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {removeUniform (_this select 0), (_this select 0) forceAddUniform ""PR_ARVUniform""};";
		};
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] NCA Officer (Uniformed)";
		faction = "pr_police";
		editorSubcategory = "pr_police_NCA";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_ARVUniform"; //the uniform item
		weapons[] = {MS_MCXRattler, ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {MS_MCXRattler, ms_tazer_yellow};		// Which weapons the character respawns with.
		linkedItems[] = {TacHelmet, MS_LBT6094_NCA, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles_OPFOR};
		respawnLinkedItems[] = {TacHelmet, MS_LBT6094_NCA, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles_OPFOR};
	};
	class PR_NCAPlain : B_Soldier_base_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {removeUniform (_this select 0), (_this select 0) forceAddUniform ""U_C_Journalist""};";
		};
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] NCA Officer (Plain Clothed)";
		faction = "pr_police";
		editorSubcategory = "pr_police_NCA";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_C_Journalist"; //the uniform item
		weapons[] = {hlc_smg_mp5a3_tac, ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {hlc_smg_mp5a3_tac, ms_tazer_yellow};		// Which weapons the character respawns with.
		linkedItems[] = {PR_ARVHelmet, MS_FACP_NCABreacher, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles_OPFOR};
		respawnLinkedItems[] = {PR_ARVHelmet, MS_FACP_NCABreacher, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles_OPFOR};
	};
	class PR_PaDPUniformed : B_Soldier_base_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {removeUniform (_this select 0), (_this select 0) forceAddUniform ""PR_MetUniformWhite""};";
		};
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] PaDP Officer (Uniformed)";
		faction = "pr_police";
		editorSubcategory = "pr_police_PaDP";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_MetUniformWhite"; //the uniform item
		weapons[] = {MS_MCX, ms_tazer};				// Which weapons the character has.
		respawnWeapons[] = {MS_MCX, ms_tazer};		// Which weapons the character respawns with.
		linkedItems[] = {PR_MetCap, MS_PaDPPlateCarrier, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {PR_MetCap, MS_PaDPPlateCarrier, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_PaDPPlain : B_Soldier_base_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {removeUniform (_this select 0), (_this select 0) forceAddUniform ""U_C_FormalSuit_01_tshirt_black_F""};";
		};
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] PaDP Officer (Plain Clothed)";
		faction = "pr_police";
		editorSubcategory = "pr_police_PaDP";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "U_C_FormalSuit_01_tshirt_black_F"; //the uniform item
		weapons[] = {hlc_smg_mp5k_PDW};				// Which weapons the character has.
		respawnWeapons[] = {hlc_smg_mp5k_PDW};		// Which weapons the character respawns with.
		linkedItems[] = {PR_CTSFOBeret, MS_PaDPVestAlt, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {PR_CTSFOBeret, MS_PaDPVestAlt, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_SCO19Officer : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] SCO-19 Officer";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_SCO19Uniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\sco19_uniform2_co.paa"};
		weapons[] = {MS_MCXBlack, ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {MS_MCXBlack, ms_tazer_yellow};		// Which weapons the character respawns with.
		linkedItems[] = {PR_ARVHelmet, MS_SCOPlateCarrier, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
		respawnLinkedItems[] = {PR_ARVHelmet, MS_SCOPlateCarrier, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};
	};
	class PR_MetOfficerWhite : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Met Officer (White)";
		faction = "pr_police";
		editorSubcategory = "pr_police_met";
		model = "\A3\Characters_F\Civil\c_poloshirtpants";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_MetUniformWhite"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\metuniformwhite_co.paa"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_MetOfficerBlack : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Met Officer (Black)";
		faction = "pr_police";
		editorSubcategory = "pr_police_met";
		model = "\A3\Characters_F\Civil\c_poloshirtpants";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_MetUniformBlack"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\metuniformblack_co.paa"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {PR_MetCap, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {PR_MetCap, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_RPUOfficer : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] RPU Officer (Standard)";
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		model = "a3\characters_f\opfor\o_officer.p3d";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_RPUUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"MS_PR\Uniforms\Data\rpu_uniform.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_RPUCore, MS_FACP_RPU, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_RPUCore, MS_FACP_RPU, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_RPUEngineer : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] RPU Officer (Engineer)";
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		model = "\A3\Characters_F\Civil\c_poloshirtpants";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_MetOfficerBlack"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\metuniformblack_co.paa"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_RPUCore, MS_LBT6094_RPUAlt, MS_TacMask, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_RPUCore, MS_LBT6094_RPUAlt, MS_TacMask, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_CTSFOBeret : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] CTSFO - Beret";
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_CTSFOUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\clothing1_ctsfo_co.paa"};
		weapons[] = {ms_tazer_yellow};				// Which weapons the character has.
		respawnWeapons[] = {ms_tazer_yellow};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_HEMSMedicUniform : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HEMS Medic";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HEMS";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "\a3\characters_f\common\coveralls.p3d";
		uniformClass = "PR_HEMSMedic"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hems_medic.jpg"};
		backpack = "HEMS_Backpack";
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_LBT6094_HEMSAlt, MS_HEMSCore, ItemMap, G_Respirator_white_F, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_LBT6094_HEMSAlt, MS_HEMSCore, G_Respirator_white_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_HEMSPilotUniform : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HEMS Pilot";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HEMS";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "\a3\characters_f\common\coveralls.p3d";
		uniformClass = "PR_HEMSPilot"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hems_pilot.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_FACP_HEMS, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_FACP_HEMS, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSParamedic : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Paramedic";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_paramedics";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "PR_NHSParamedicUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\nhs_uniform.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSEMT : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Emergency Medical Technician";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_quickresponse";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "PR_EMTUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\nhs_uniform_emt.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_LBT6094_NHSAlt, MS_NHSCore, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_LBT6094_NHSAlt, MS_NHSCore, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSTrainee : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Student Paramedic";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_paramedics";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
		uniformClass = "PR_NHSTraineeUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\nhs_uniform_student.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHS_Surgeon : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Field Surgeon";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_paramedics";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NHS_SurgeonUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\nhs_surgeon.jpg"};
		backpack = "NHS_Backpack";
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_FACP_NHSAlt, MS_NHSCore, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_FACP_NHSAlt, MS_NHSCore, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSStaff : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] Field Staff";
		model = "a3\characters_f\opfor\o_officer.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_staff";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NHSStaffUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\nhs_staff.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSCBRN : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] CBRN Specialist";
		model = "a3\characters_f_enoch\uniforms\cbrn_suit_01_f.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_CBRN";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NHSCBRNUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\cbrn_outfit.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_CBRNCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_CBRNCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSHARTCBRN : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HART CBRN Specialist";
		model = "a3\characters_f_enoch\uniforms\cbrn_suit_01_f.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HART";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NHSHARTCBRNUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hart_outfit.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_LBT6094_HART, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_LBT6094_HART, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NHSHARTCBRNMedic : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HART CBRN Paramedic";
		model = "a3\characters_f_enoch\uniforms\cbrn_suit_01_f.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HART";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NHSHARTCBRNUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hart_outfit.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_FACP_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_FACP_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_HARTMedic : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HART Paramedic";
		model = "a3\characters_f\blufor\b_soldier_03.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HART";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_HARTUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hart_uniform.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {MS_FACP_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_FACP_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_HARTEngineer : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		side = 2;
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] HART Engineer (WIP)";
		model = "a3\characters_f\blufor\b_soldier_03.p3d";
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HART";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_HARTUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\hart_uniform.jpg"};
		weapons[] = {MS_Crusher};				// Which weapons the character has.
		respawnWeapons[] = {MS_Crusher};		// Which weapons the character respawns with.
		linkedItems[] = {MS_LBT6094_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {MS_LBT6094_HARTAlt, NHS_Backpack, MS_HARTCore, G_RegulatorMask_F, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class PR_NPASPilot : B_Soldier_base_F
	{
		author = "Mercury Studios - Silence"
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		scopeCurator = 2;
		displayName = "[PR] NPAS Pilot";
		faction = "pr_police";
		editorSubcategory = "pr_police_npas";
		model = "a3\characters_f\common\coveralls.p3d";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "PR_NPASUniform"; //the uniform item
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Uniforms\Data\npasuniform.jpg"};
		weapons[] = {};				// Which weapons the character has.
		respawnWeapons[] = {};		// Which weapons the character respawns with.
		linkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	class Heli_Transport_01_base_F;
	class PR_Ghosthawk: Heli_Transport_01_base_F
	{
		author = "Mercury Studios - Silence/StevioUK"
		_generalMacro = "B_Heli_Transport_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_npas";
		displayName="NPAS Ghost Hawk";
		crew = "PR_NPASPilot";
		hiddenSelections[]= {"camo1", "camo2"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\npas_GH1.jpg", "\MS_PR\Vehicles\Data\npas_GH2.jpg"};
		typicalCargo[] = {"PR_NPASPilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class B_Heli_Light_01_F;
	class PR_Hummingbird: B_Heli_Light_01_F
	{
		author = "Mercury Studios - StevioUK"
		_generalMacro = "B_Heli_Light_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_npas";
		displayName="NPAS Hummingbird";
		crew = "PR_NPASPilot";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\hummingbird_npas_co.jpg"};
		typicalCargo[] = {"PR_NPASPilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class O_Heli_Transport_04_covered_F;
	class PR_Taru: O_Heli_Transport_04_covered_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false];(_this select 0) setObjectTextureGlobal [1,""MS_PR\Vehicles\Data\npas_taru_main.jpg""];(_this select 0) setObjectTextureGlobal [0,""MS_PR\Vehicles\Data\npas_taru_secondary.jpg""];(_this select 0) setObjectTextureGlobal [3,""MS_PR\Vehicles\Data\npas_taru_pod.jpg""];(_this select 0) setObjectTextureGlobal [2,""MS_PR\Vehicles\Data\npas_taru_podsecondary.jpg""];};";
		};
		author = "Mercury Studios - Silence"
		_generalMacro = "O_Heli_Transport_04_covered_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_npas";
		displayName="NPAS Taru";
		crew = "PR_NPASPilot";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {"","","",""};
		typicalCargo[] = {"PR_NPASPilot"};
		availableForSupportTypes[] = {"Drop", "Transport"};
	};
	class Hatchback_01_base_F;
	class PR_Hatchback: Hatchback_01_base_F 
	{
		author = "Silence/Tattie";
		_generalMacro = "C_Hatchback_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		displayName="Police Hatchback";
		crew = "PR_RPUOfficer";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\met_police_hatchback.jpg"};
		typicalCargo[] = {"PR_RPUEngineer"};
		availableForSupportTypes[] = {"Transport"};
	};
	class C_IDAP_Van_02_medevac_F;
	class PR_Ambulance: C_IDAP_Van_02_medevac_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false], (_this select 0) setObjectTextureGlobal [0,""\MS_PR\Vehicles\Data\van_body_nhs.jpg""];[(_this select 0),[""NHS_Ambulance"",1],[""Door_1_source"",0, ""Door_2_source"",0,""Door_3_source"",0,""Door_4_source"",0, ""Hide_Door_1_source"",0,""Hide_Door_2_source"",0,""Hide_Door_3_source"",0,""Hide_Door_4_source"",0,""lights_em_hide"",0, ""ladder_hide"",1,""spare_tyre_holder_hide"",1,""spare_tyre_hide"",1, ""reflective_tape_hide"",0,""roof_rack_hide"",1,""LED_lights_hide"",0, ""sidesteps_hide"",1,""rearsteps_hide"",0,""side_protective_frame_hide"",0,""front_protective_frame_hide"",0,""beacon_front_hide"",0,""beacon_rear_hide"",0]] call BIS_fnc_initVehicle}";
		};
		author = "Silence";
		_generalMacro = "C_IDAP_Van_02_medevac_F";
		scope = 2;
		side = 2;
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_paramedics";
		displayName="Ambulance";
		crew = "PR_NHSParamedic";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\van_body_nhs.jpg"};
		typicalCargo[] = {"PR_NHS_Surgeon"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"NHS_Ambulance", 1};
		animationList[] =
		{
			"Door_1_source",0,
			"Door_2_source",0,
			"Door_3_source",0,
			"Door_4_source",0,
			"Hide_Door_1_source",0,
			"Hide_Door_2_source",0,
			"Hide_Door_3_source",0,
			"Hide_Door_4_source",0,
			"lights_em_hide",0,
			"ladder_hide",1,
			"spare_tyre_holder_hide",1,
			"spare_tyre_hide",1,
			"reflective_tape_hide",0,
			"roof_rack_hide",1,
			"LED_lights_hide",0,
			"sidesteps_hide",1,
			"rearsteps_hide",0,
			"side_protective_frame_hide",0,
			"front_protective_frame_hide",0,
			"beacon_front_hide",0,
			"beacon_rear_hide",0
		};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class NHS_Ambulance
			{
				// Display name of the texture, use 
				displayName = "NHS Ambulance";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\van_body_nhs.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class C_Van_02_transport_F;
	class PR_TSUVan: C_Van_02_transport_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false], (_this select 0) setObjectTextureGlobal [0,""\MS_PR\Vehicles\Data\van_body_tsu.jpg""];[(_this select 0),[""TSU_Van"",1],[""Door_1_source"",0, ""Door_2_source"",0,""Door_3_source"",0,""Door_4_source"",0, ""Hide_Door_1_source"",0,""Hide_Door_2_source"",0,""Hide_Door_3_source"",0,""Hide_Door_4_source"",0,""lights_em_hide"",0, ""ladder_hide"",1,""spare_tyre_holder_hide"",1,""spare_tyre_hide"",1, ""reflective_tape_hide"",0,""roof_rack_hide"",1,""LED_lights_hide"",0, ""sidesteps_hide"",1,""rearsteps_hide"",0,""side_protective_frame_hide"",0,""front_protective_frame_hide"",0,""beacon_front_hide"",0,""beacon_rear_hide"",0]] call BIS_fnc_initVehicle}";
		};
		author = "Silence";
		_generalMacro = "C_IDAP_Van_02_medevac_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		displayName="Tactical Support Van";
		crew = "PR_MetOfficerBlack";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\van_body_tsu.jpg"};
		typicalCargo[] = {"PR_MetOfficerWhite"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"TSU_Van", 1};
		animationList[] =
		{
			"Door_1_source",0,
			"Door_2_source",0,
			"Door_3_source",0,
			"Door_4_source",0,
			"Hide_Door_1_source",0,
			"Hide_Door_2_source",0,
			"Hide_Door_3_source",0,
			"Hide_Door_4_source",0,
			"lights_em_hide",0,
			"ladder_hide",1,
			"spare_tyre_holder_hide",1,
			"spare_tyre_hide",1,
			"reflective_tape_hide",0,
			"roof_rack_hide",1,
			"LED_lights_hide",0,
			"sidesteps_hide",1,
			"rearsteps_hide",0,
			"side_protective_frame_hide",0,
			"front_protective_frame_hide",0,
			"beacon_front_hide",0,
			"beacon_rear_hide",0
		};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class TSU_Van
			{
				// Display name of the texture, use 
				displayName = "TSU Van";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\van_body_tsu.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class C_Van_02_vehicle_F;
	class PR_TSUVanCargo: C_Van_02_vehicle_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false], (_this select 0) setObjectTextureGlobal [0,""\MS_PR\Vehicles\Data\van_body_tsu.jpg""];[(_this select 0),[""TSU_Van"",1],[""Door_1_source"",0, ""Door_2_source"",0,""Door_3_source"",0,""Door_4_source"",0, ""Hide_Door_1_source"",0,""Hide_Door_2_source"",0,""Hide_Door_3_source"",0,""Hide_Door_4_source"",0,""lights_em_hide"",0, ""ladder_hide"",1,""spare_tyre_holder_hide"",1,""spare_tyre_hide"",1, ""reflective_tape_hide"",0,""roof_rack_hide"",1,""LED_lights_hide"",0, ""sidesteps_hide"",1,""rearsteps_hide"",0,""side_protective_frame_hide"",0,""front_protective_frame_hide"",0,""beacon_front_hide"",0,""beacon_rear_hide"",0]] call BIS_fnc_initVehicle}";
		};
		author = "Silence";
		_generalMacro = "C_IDAP_Van_02_medevac_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		displayName="Tactical Support Van (Cargo)";
		crew = "PR_MetOfficerBlack";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\van_body_tsu.jpg"};
		typicalCargo[] = {"PR_MetOfficerWhite"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"TSU_Van", 1};
		animationList[] =
		{
			"Door_1_source",0,
			"Door_2_source",0,
			"Door_3_source",0,
			"Door_4_source",0,
			"Hide_Door_1_source",0,
			"Hide_Door_2_source",0,
			"Hide_Door_3_source",0,
			"Hide_Door_4_source",0,
			"lights_em_hide",0,
			"ladder_hide",1,
			"spare_tyre_holder_hide",1,
			"spare_tyre_hide",1,
			"reflective_tape_hide",0,
			"roof_rack_hide",1,
			"LED_lights_hide",0,
			"sidesteps_hide",1,
			"rearsteps_hide",0,
			"side_protective_frame_hide",0,
			"front_protective_frame_hide",0,
			"beacon_front_hide",0,
			"beacon_rear_hide",0
		};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class TSU_Van
			{
				// Display name of the texture, use 
				displayName = "TSU Van";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\van_body_tsu.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class PR_AmbulanceHART: C_IDAP_Van_02_medevac_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false], (_this select 0) setObjectTextureGlobal [0,""\MS_PR\Vehicles\Data\van_body_hart.jpg""],[(_this select 0),[""NHS_AmbulanceHART"",1],[""Door_1_source"",0, ""Door_2_source"",0,""Door_3_source"",0,""Door_4_source"",0, ""Hide_Door_1_source"",0,""Hide_Door_2_source"",0,""Hide_Door_3_source"",0,""Hide_Door_4_source"",0,""lights_em_hide"",0, ""ladder_hide"",0,""spare_tyre_holder_hide"",0,""spare_tyre_hide"",1, ""reflective_tape_hide"",0,""roof_rack_hide"",0,""LED_lights_hide"",0, ""sidesteps_hide"",1,""rearsteps_hide"",0,""side_protective_frame_hide"",0,""front_protective_frame_hide"",0,""beacon_front_hide"",0,""beacon_rear_hide"",0]] call BIS_fnc_initVehicle};";
		};
		author = "Silence";
		_generalMacro = "C_IDAP_Van_02_medevac_F";
		scope = 2;
		side = 2;
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_HART";
		displayName="Ambulance (HART)";
		crew = "PR_NHSHARTCBRN";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\van_body_hart.jpg"};
		typicalCargo[] = {"PR_NHSHARTCBRNMedic"};
		availableForSupportTypes[] = {"Transport"};
		animationList[] =
		{
			"Door_1_source",0,
			"Door_2_source",0,
			"Door_3_source",0,
			"Door_4_source",0,
			"Hide_Door_1_source",0,
			"Hide_Door_2_source",0,
			"Hide_Door_3_source",0,
			"Hide_Door_4_source",0,
			"lights_em_hide",0,
			"ladder_hide",0,
			"spare_tyre_holder_hide",0,
			"spare_tyre_hide",1,
			"reflective_tape_hide",0,
			"roof_rack_hide",0,
			"LED_lights_hide",0,
			"sidesteps_hide",1,
			"rearsteps_hide",0,
			"side_protective_frame_hide",0,
			"front_protective_frame_hide",0,
			"beacon_front_hide",0,
			"beacon_rear_hide",0
		};
		textureList[] = {"NHS_AmbulanceHART", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class NHS_AmbulanceHART
			{
				// Display name of the texture, use 
				displayName = "NHS Ambulance (HART)";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\van_body_hart.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class C_SUV_01_F;
	class PR_RapidSUV: C_SUV_01_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 2;
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_quickresponse";
		displayName="Rapid Response SUV";
		crew = "PR_NHSParamedic";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\suv_nhs.jpg"};
		typicalCargo[] = {"PR_NHS_Surgeon"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"SUV_Rapid", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class SUV_Rapid
			{
				// Display name of the texture, use 
				displayName = "NHS Rapid Response";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\suv_nhs.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class C_Hatchback_01_sport_F;
	class PR_HatchbackANPR: C_Hatchback_01_sport_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false];};";
		};
		author = "Silence/Tattie";
		_generalMacro = "C_Hatchback_01_sport_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		displayName="Police ANPR Interceptor Hatchback";
		crew = "PR_RPUOfficer";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\anpr_police_hatchback.jpg"};
		typicalCargo[] = {"PR_RPUOfficer"};
		availableForSupportTypes[] = {"Transport"};
	};
	class PR_HatchbackRapid: C_Hatchback_01_sport_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false];};";
		};
		author = "Silence";
		_generalMacro = "C_Hatchback_01_sport_F";
		scope = 2;
		side = 2;
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_quickresponse";
		displayName="Rapid Response Hatchback";
		crew = "PR_NHSEMT";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\nhs_hatchback.jpg"};
		typicalCargo[] = {"PR_NHS_Surgeon"};
		availableForSupportTypes[] = {"Transport"};
	};
	class PR_HatchbackArmed: Hatchback_01_base_F 
	{
		author = "Silence/Tattie";
		_generalMacro = "C_Hatchback_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		displayName="Armed Police Hatchback";
		crew = "PR_ARVOfficer";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\armed_police_hatchback.jpg"};
		typicalCargo[] = {"PR_ARVOfficer"};
		availableForSupportTypes[] = {"Transport"};
	};
	class PR_HatchbackPaDP: Hatchback_01_base_F 
	{
		author = "Silence/Tattie";
		_generalMacro = "C_Hatchback_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_PaDP";
		displayName="PaDP Hatchback";
		crew = "PR_PaDPUniformed";
		hiddenSelections[]= {"camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\padp_police_hatchback.jpg"};
		typicalCargo[] = {"PR_PaDPUniformed"};
		availableForSupportTypes[] = {"Transport"};
	};
	class B_LSV_01_unarmed_F;
	class PR_Prowler: B_LSV_01_unarmed_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Silence/Stevio";
		_generalMacro = "B_LSV_01_unarmed_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		displayName="Police Prowler";
		crew = "PR_RPUEngineer";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {"\MS_PR\Vehicles\Data\prowler.jpg","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa"};
		typicalCargo[] = {"PR_RPUEngineer"};
		availableForSupportTypes[] = {"Transport"};
	};
	class PR_ProwlerRapid: B_LSV_01_unarmed_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Silence/Stevio";
		_generalMacro = "B_LSV_01_unarmed_F";
		scope = 2;
		side = 2;
		faction = "pr_nhs";
		editorSubcategory = "pr_nhs_quickresponse";
		displayName="Rapid Response Prowler";
		crew = "PR_NHSEMT";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {"\MS_PR\Vehicles\Data\prowlernhs.jpg","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa"};
		typicalCargo[] = {"PR_NHS_Surgeon"};
		availableForSupportTypes[] = {"Transport"};
	};
	class PR_ProwlerArmed: B_LSV_01_unarmed_F 
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Silence/Stevio";
		_generalMacro = "B_LSV_01_unarmed_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		displayName="Armed Police Prowler";
		crew = "PR_ARVOfficer";
		hiddenSelections[] = {"Camo_1","Camo_2","Camo_3","Camo_4"};
		hiddenSelectionsTextures[] = {"\MS_PR\Vehicles\Data\prowlerarmed.jpg","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa","\MS_PR\Vehicles\Data\prowler2.paa"};
		typicalCargo[] = {"PR_ARVOfficer"};
		availableForSupportTypes[] = {"Transport"};
	};
	class MS_SUV: C_SUV_01_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Mercury Studios - Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		displayName="Police ANPR Interceptor SUV";
		crew = "PR_RPUOfficer";
		hiddenSelections[]= {"Camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\suv.jpg"};
		typicalCargo[] = {"PR_RPUOfficer"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"SUV_ANPR", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class SUV_ANPR
			{
				// Display name of the texture, use 
				displayName = "Police ANPR";
				// Author of the texture
				author = "Silence/Stevio";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\suv.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class MS_SUVMet: C_SUV_01_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Mercury Studios - Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_traffic";
		displayName="Police SUV";
		crew = "PR_RPUOfficer";
		hiddenSelections[]= {"Camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\suvnormal.jpg"};
		typicalCargo[] = {"PR_RPUOfficer"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"SUV_Met", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class SUV_Met
			{
				// Display name of the texture, use 
				displayName = "Police";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\suvnormal.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class MS_SUVArmed: C_SUV_01_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Mercury Studios - Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_sco";
		displayName="Armed Police SUV";
		crew = "PR_ARVOfficer";
		hiddenSelections[]= {"Camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\suvarmed.jpg"};
		typicalCargo[] = {"PR_ARVOfficer"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"SUV_Armed", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class SUV_Armed
			{
				// Display name of the texture, use 
				displayName = "Armed Police";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\suvarmed.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
	class MS_SUVPaDP: C_SUV_01_F
	{
		class EventHandlers: EventHandlers
		{
			init = "if (local (_this select 0)) then {(_this select 0) setVariable [""BIS_enableRandomization"",false]};";
		};
		author = "Mercury Studios - Silence";
		_generalMacro = "C_SUV_01_F";
		scope = 2;
		side = 1;
		faction = "pr_police";
		editorSubcategory = "pr_police_PaDP";
		displayName="PaDP SUV";
		crew = "PR_PaDPUniformed";
		hiddenSelections[]= {"Camo1"};
		hiddenSelectionsTextures[]= {"\MS_PR\Vehicles\Data\suvpadp.jpg"};
		typicalCargo[] = {"PR_PaDPUniformed"};
		availableForSupportTypes[] = {"Transport"};
		textureList[] = {"SUV_PaDP", 1};
		class textureSources
		{
			// This texture source will be available for every defined factions
			class SUV_PaDP
			{
				// Display name of the texture, use 
				displayName = "PaDP";
				// Author of the texture
				author = "Silence";
				// Textures, in the same order as the hidden selection names
				textures[] =
				{
					"\MS_PR\Vehicles\Data\suvpadp.jpg",
				};
				materials[] = {}; // if such is needed
				// This source should be available for the following factions
				factions[] = 
				{
					"BLU_F", "BLU_G_F", // Side Blufor
					"OPF_F", "OPF_G_F", // Side Opfor
					"IND_F", "IND_G_F", // Side independent
					"CIV_F" // side civilian
				};
			};
		};
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class HeadgearItem;
	class VestItem;
 
	class PR_CTSFOUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] CTSFO Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_CTSFOMCX"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHSCBRNUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] CBRN Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_NHSCBRN"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_HARTUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] HART Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_HARTMedic"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHSHARTCBRNUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] HART CBRN Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_NHSHARTCBRN"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_HEMSPilot : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] HEMS Pilot Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_HEMSPilotUniform"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_HEMSMedic : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] HEMS Medic Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "\a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_HEMSMedicUniform"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHSParamedicUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Paramedic Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
			uniformClass = "PR_NHSParamedic"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHSTraineeUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Student Paramedic Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
			uniformClass = "PR_NHSTrainee"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHS_SurgeonUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Surgeon Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f\blufor\b_soldier_01.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f\blufor\b_soldier_01.p3d";
			uniformClass = "PR_NHS_Surgeon"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NHSStaffUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] NHS Staff Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f_beta\indep\ia_officer.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f_beta\indep\ia_officer.p3d";
			uniformClass = "PR_NHSStaff"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_EMTUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Emergency Medical Technician Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f_gamma\guerrilla\ig_guerrilla2_1.p3d";
			uniformClass = "PR_NHSEMT"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_ARVUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] ARV Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_ARVOfficer"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_SCO19Uniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] SCO19 Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_SCO19Officer"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_MetUniformWhite : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Met Police Uniform (White)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Civil\c_poloshirtpants";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_MetOfficerWhite"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_MetUniformBlack : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] Met Police Uniform (Black)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Civil\c_poloshirtpants";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_MetOfficerBlack"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_RPUUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] RPU Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f\opfor\o_officer";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "PR_RPUOfficer"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_NPASUniform : Uniform_Base
	{
		scope = 2;
		displayName = "[PR] NPAS Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "a3\characters_f\common\coveralls.p3d";
 
		class ItemInfo : UniformItem
		{
			uniformModel = "a3\characters_f\common\coveralls.p3d";
			uniformClass = "PR_NPASPilot"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
		};
	};
	class PR_CTSFOBeret : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] CTSFO Beret";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\headgear_beretctsfo_co.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class PR_NHSBeret : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] NHS Beret";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\nhsberet.jpg"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class PR_MetBeret : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] Met Police Beret";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\metberet.jpg"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class PR_MetCap : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] Met Cap";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\Common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\metcap.jpg"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F\Common\capb.p3d";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class PR_NHSCap : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] NHS Cap";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\Common\capb.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\nhscap.jpg"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F\Common\capb.p3d";
			modelSides[] = {3, 1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
	class MS_CTSFOHelmet : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] CTSFO Helmet";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\headgear_ctsfo_co.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class PR_ARVHelmet : ItemCore
	{
		author = "Mercury Studios - Silence"
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "[PR] ARV Helmet";
		picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MS_PR\Helmets\Data\sco19_helmet_co.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 10;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			armor = 3*0.5;
			passThrough = 0.8;
			hiddenSelections[] = {"camo"};
		};
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class MS_CTSFOVest: Vest_Camo_Base
	{
		author = "Mercury Studios - Silence";
		scope = 0;
		displayName = "[PR] CTSFO Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F";
		hiddenSelectionsTextures[] = {"\MS_PR\Vests\Data\armor1_ctsfo_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F_Enoch\Vests\V_CarrierRigKBT_01_F";			
			containerClass = Supply80;		
			mass = 15;
			
			class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 16;
						passThrough = 0.3;
				};
			};
		};
	};
	// Military Gear Pack Stuffs
	/*
	*/
	class MS_JPCSCO_Medic: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC Medic (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_medic_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19_JPC_co.jpg",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_medic_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_JPCSCO_Assaulter: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC Assaulter + Belt (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_assaulter_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19_JPC_co.jpg",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_assaulter_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_JPCSCO_Teamleader: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC TeamLeader + Belt (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_teamleader_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19_JPC_co.jpg",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_teamleader_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACSCO_Medic_Belt: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Medic + Belt (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_medic_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19MMAC_co.jpg",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_medic_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACSCO_Light: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Light (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_light_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19MMAC_co.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_light_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3"
            };
            containerClass="Supply60";
            mass=60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACSCO_Assaulter_Belt: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Assaulter + Belt (SCO-19)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_assaulter_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\SCO19MMAC_co.jpg",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\SCO19Gear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_assaulter_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_Airframe_CTSFO: ItemCore
	{
		author="Adacas/Silence";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Airframe 01 (CTSFO)";
		picture="MS_PR\ms_logo.jpg";
		model="\milgp_headgear\models\h_airframe_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\MS_PR\Helmets\Data\h_airframe_ctsfo_co.jpg",
			"\MS_PR\Helmets\Data\h_opscore_ctsfo_co.jpg",
			"\milgp_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\milgp_headgear\models\h_airframe_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class MS_Opscore_CTSFO: ItemCore
	{
		author="Adacas/Silence";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore + Goggles (CTSFO)";
		picture="MS_PR\ms_logo.jpg";
		model="\milgp_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\MS_PR\Helmets\Data\h_opscore_ctsfo_co.jpg",
			"\milgp_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\milgp_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class MS_Airframe_Black: ItemCore
	{
		author="Adacas/Silence";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Airframe 01 (Black)";
		picture="MS_PR\ms_logo.jpg";
		model="\milgp_headgear\models\h_airframe_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"_Camera",
			"_Chemlights",
			"_CW",
			"_ESS",
			"_IR_Strobe",
			"_Surefire",
			"_Manta_Back",
			"_Manta_Top",
			"_Vlite_Green",
			"_Vlite_Red"
		};
		hiddenSelectionsTextures[]=
		{
			"\MS_PR\Helmets\Data\MTFAirframe_co.jpg",
			"\MS_PR\Helmets\Data\MTFOpscore_co.jpg",
			"\milgp_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\milgp_headgear\models\h_airframe_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"_Camera",
				"_Chemlights",
				"_CW",
				"_ESS",
				"_IR_Strobe",
				"_Surefire",
				"_Manta_Back",
				"_Manta_Top",
				"_Vlite_Green",
				"_Vlite_Red"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class MS_Opscore_Black: ItemCore
	{
		author="Adacas/Silence";
		scope=2;
		weaponPoolAvailable=1;
		displayName="OpsCore + Goggles (Black)";
		picture="MS_PR\ms_logo.jpg";
		model="\milgp_headgear\models\h_opscore_base.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"_Chemlights",
			"_Manta_Back",
			"_Manta_Top"
		};
		hiddenSelectionsTextures[]=
		{
			"\MS_PR\Helmets\Data\MTFOpscore_co.jpg",
			"\milgp_headgear\textures\h_gear_01_khk_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\milgp_headgear\models\h_opscore_base.p3d";
			modelSides[]=
			{
				"TWest"
			};
			hiddenSelections[]=
			{
				"camo",
				"camo2",
				"_Chemlights",
				"_Manta_Back",
				"_Manta_Top"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class MS_JPC_Medic: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC Medic (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_medic_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFO_JPC_co.jpg",
            "MS_PR\Vests\Data\CTSFO_battlebelt.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_medic_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_JPC_Assaulter: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC Assaulter + Belt (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_assaulter_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFO_JPC_co.jpg",
            "MS_PR\Vests\Data\CTSFO_battlebelt.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_assaulter_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_JPC_Teamleader: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="JPC TeamLeader + Belt (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_jpc_teamleader_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFO_JPC_co.jpg",
            "MS_PR\Vests\Data\CTSFO_battlebelt.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_jpc_teamleader_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACCTSFO_Medic_Belt: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Medic + Belt (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_medic_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFOMMAC_co.jpg",
            "MS_PR\Vests\Data\CTSFO_battlebelt.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_medic_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACCTSFO_Light: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Light (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_light_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFOMMAC_co.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_light_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo2",
                "camo3"
            };
            containerClass="Supply60";
            mass=60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class MS_MMACCTSFO_Assaulter_Belt: ItemCore
    {
        author="Adacas/Silence";
        scope=2;
        weaponPoolAvailable=1;
        allowedSlots[]={901};
        displayname="MMAC Assaulter + Belt (CTSFO)";
        picture="MS_PR\ms_logo.jpg";
        model="milgp_vests\models\v_mmac_assaulter_belt_base.p3d";
        hiddenSelections[]=
        {
            "camo",
            "camo1",
            "camo2",
            "camo3"
        };
        hiddenSelectionsTextures[]=
        {
            "MS_PR\Vests\Data\CTSFOMMAC_co.jpg",
            "MS_PR\Vests\Data\CTSFO_battlebelt.jpg",
            "MS_PR\Vests\Data\CTSFOGear_co.jpg",
            "milgp_vests\textures\v_gear_02_co.paa"
        };
        class ItemInfo: VestItem
        {
            uniformModel="milgp_vests\models\v_mmac_assaulter_belt_base.p3d";
            hiddenSelections[]=
            {
                "camo",
                "camo1",
                "camo2",
                "camo3"
            };
            containerClass="Supply200";
            mass=100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=20;
                    PassThrough=0.2;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=20;
                    PassThrough=0.2;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=20;
                    passThrough=0.2;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=20;
                    passThrough=0.2;
                };
            };
        };
    };
	class PR_SCO19Vest: Vest_Camo_Base
	{
		author = "Mercury Studios - Silence";
		scope = 1;
		displayName = "[PR] SCO19 Vest";
		picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		hiddenSelectionsTextures[] = {"\MS_PR\Vests\Data\sco19_vest_co.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";		
			containerClass = Supply80;		
			mass = 30;
			
			class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 16;
						passThrough = 0.3;
				};
			};
		};
	};
	class MS_CTSFOPlateCarrier: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (CTSFO/Operator)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\ctsfo_Chestrig_co.jpg",
			"MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
			"MS_PR\Vests\Data\carrier_rig_ctsfo.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_CTSFOVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (CTSFO/Gunner)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
			"MS_PR\Vests\Data\ctsfo_boxmag.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
			"MS_PR\Vests\Data\carrier_rig_ctsfo.jpg"
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_NCAPlateCarrier: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (NCA/Operator)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\nca_Chestrig_co.jpg",
			"MS_PR\Vests\Data\nca_battlebelt.jpg",
			"",
			"MS_PR\Vests\Data\gear_nca_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_nca.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_NCAVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (NCA/Gunner)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\nca_Chestrig_co.jpg",
			"MS_PR\Vests\Data\nca_battlebelt.jpg",
			"MS_PR\Vests\Data\nca_boxmag.jpg",
			"",
			"MS_PR\Vests\Data\gear_nca_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_nca.jpg",
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_SCOPlateCarrier: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (SCO-19/Operator)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\sco19_Chestrig_co.jpg",
			"MS_PR\Vests\Data\sco_battlebelt.jpg",
			"",
			"MS_PR\Vests\Data\gear_sco19_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_sco.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_SCOVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (SCO-19/Gunner)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\sco19_Chestrig_co.jpg",
			"MS_PR\Vests\Data\sco_battlebelt.jpg",
			"MS_PR\Vests\Data\sco_boxmag.jpg",
			"",
			"MS_PR\Vests\Data\gear_sco19_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_sco.jpg",
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_RPUPlateCarrier: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (RPU/Operator)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\rpu_Chestrig_co.jpg",
			"MS_PR\Vests\Data\traffic_battlebelt.jpg",
			"",
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_traffic.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_RPUVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (RPU/Engineer)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"MS_PR\Vests\Data\traffic_battlebelt.jpg",
			"MS_PR\Vests\Data\traffic_boxmag.jpg",
			"",
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"",
			"MS_PR\Vests\Data\carrier_rig_traffic.jpg",
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_PaDPPlateCarrier: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (PaDP/Operator)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_Operator.p3d";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\padp_battlebelt.jpg",
			"",
			"",
			"",
			"MS_PR\Vests\Data\carrier_rig_padp.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_operator.p3d";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_PaDPVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="VanSchmoozin - Specter/Silence";
		displayName="[MS] Plate Carrier (PaDP/Undercover)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_boxmag",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\padp_battlebelt.jpg",
			"",
			"",
			"",
			"",
			"MS_PR\Vests\Data\carrier_rig_padpU.jpg",
		};
		descriptionShort="$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel="\VSM_Vests\Spectergear_LBT\VSM_CarrierRig_MG.p3d";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_boxmag",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_CTSFOCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (CTSFO)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\ctsfohelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	
	class MS_LBT6094_RPU: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (RPU/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\traffic_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "MS_PR\Vests\Data\gear_rpu_co.jpg",
            "",
            "MS_PR\Vests\Data\RPU_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_RPUAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (RPU/Gunner)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "vsm_vests\spectergear_lbt\data\vsm_multicamtropic_chestrig.paa",
            "MS_PR\Vests\Data\traffic_battlebelt.jpg",
            "MS_PR\Vests\Data\traffic_boxmag.jpg",
            "",
            "MS_PR\Vests\Data\gear_rpu_co.jpg",
            "",
            "MS_PR\Vests\Data\RPU_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	
	class MS_LBT6094_CTSFO: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (CTSFO/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
            "MS_PR\Vests\Data\CTSFO_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_CTSFOAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (CTSFO/Gunner)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
            "MS_PR\Vests\Data\ctsfo_boxmag.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
            "MS_PR\Vests\Data\CTSFO_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	
	class MS_LBT6094_NCA: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (NCA/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\nca_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "MS_PR\Vests\Data\gear_nca_co.jpg",
            "",
            "MS_PR\Vests\Data\NCA_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_NCAAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (NCA/Gunner)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\nca_battlebelt.jpg",
            "MS_PR\Vests\Data\nca_boxmag.jpg",
            "",
            "MS_PR\Vests\Data\gear_nca_co.jpg",
            "",
            "MS_PR\Vests\Data\NCA_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };	
	
	class MS_LBT6094_SCO: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (SCO/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "MS_PR\Vests\Data\gear_sco19_co.jpg",
            "",
            "MS_PR\Vests\Data\SCO_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_SCOAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (SCO/Gunner)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\sco_battlebelt.jpg",
            "MS_PR\Vests\Data\sco_boxmag.jpg",
            "",
            "MS_PR\Vests\Data\gear_sco19_co.jpg",
            "",
            "MS_PR\Vests\Data\SCO_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	
	class MS_FACP_RPU: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (RPU/Operator)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\traffic_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_RPU.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_RPUBreacher: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (RPU/Breacher)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\traffic_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_RPU.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_RPUAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (RPU/Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\traffic_battlebelt.jpg",
			"MS_PR\Vests\Data\traffic_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_rpu_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_RPU.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class MS_FACP_CTSFO: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (CTSFO/Operator)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
			"MS_PR\Vests\Data\FACP_CTSFO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_CTSFOBreacher: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (CTSFO/Breacher)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
			"MS_PR\Vests\Data\FACP_CTSFO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_CTSFOAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (CTSFO/Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\ctsfo_battlebelt.jpg",
			"MS_PR\Vests\Data\ctsfo_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"MS_PR\Vests\Data\serpa_ctsfo_co.jpg",
			"MS_PR\Vests\Data\gear_CTSFO_co.jpg",
			"MS_PR\Vests\Data\radio_pouch_ctsfo_co.jpg",
			"MS_PR\Vests\Data\FACP_CTSFO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class MS_FACP_NCA: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (NCA/Operator)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\nca_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_nca_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_NCA.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_NCABreacher: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (NCA/Breacher)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\nca_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_nca_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_NCA.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_NCAAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (NCA/Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\nca_battlebelt.jpg",
			"MS_PR\Vests\Data\nca_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_nca_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_NCA.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class MS_FACP_SCO: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (SCO-19/Operator)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\sco_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_sco19_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_SCO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_SCOBreacher: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (SCO-19/Breacher)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\sco_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_sco19_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_SCO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Breacher";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_SCOAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (SCO-19/Gunner)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\sco_battlebelt.jpg",
			"MS_PR\Vests\Data\sco_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"MS_PR\Vests\Data\gear_sco19_co.jpg",
			"",
			"MS_PR\Vests\Data\FACP_SCO.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_NHS: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (NHS/Standard)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\NHS_battlebelt.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_NHS.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_NHSAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (NHS/Surgeon)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\NHS_battlebelt.jpg",
			"MS_PR\Vests\Data\NHS_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_NHS.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_HEMS: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (HEMS/Pilot)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\HEMS_battlebelt.jpg",
			"",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_HEMS.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_HEMSAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (HEMS/Paramedic)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\HEMS_battlebelt.jpg",
			"MS_PR\Vests\Data\HEMS_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_HEMS.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_HART: ItemCore
	{
		scope=2;
		displayName="[MS] DT FACP (HART/Operator)";
		author="VanSchmoozin - Ardvarkdb/Silence";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_1961aPouches",
			"_battleBelt",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMPouches"
		};
		hiddenSelectionsTextures[]=
		{
			"",
			"MS_PR\Vests\Data\HART_battlebelt.jpg",
			"",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_HART.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_Operator";
			containerClass="Supply200";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_1961aPouches",
				"_battleBelt",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMPouches"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	class MS_FACP_HARTAlt: ItemCore
	{
		scope=2;
		displayName="[MS] DT FAPC (HART/Paramedic)";
		author="VanSchmoozin - Ardvarkdb";
		picture="\MS_PR\ms_logo.jpg"
		model="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
		descriptionShort="$STR_A3_SP_AL_IV";
		hiddenSelections[]=
		{
			"_battleBelt",
			"_boxMag",
			"_DropHolster",
			"_Serpa",
			"_SOTGGear",
			"_SOTGRadio",
			"_vestBase",
			"_VSMButtPouch"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Vests\Data\HART_battlebelt.jpg",
			"MS_PR\Vests\Data\HART_boxmag.jpg",
			"MS_PR\Vests\Data\RPU_Holster.jpg",
			"",
			"",
			"",
			"MS_PR\Vests\Data\FACP_HART.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="VSM_Vests\VSM_FAPC\Models\VSM_FAPC_MG";
			containerClass="Supply300";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"_battleBelt",
				"_boxMag",
				"_DropHolster",
				"_Serpa",
				"_SOTGGear",
				"_SOTGRadio",
				"_vestBase",
				"_VSMButtPouch"
			};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=25;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=25;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=25;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
		};
	};
	
	class MS_LBT6094_NHS: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (NHS/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\NHS_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\NHS_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_NHSAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (NHS/Paramedic)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\NHS_battlebelt.jpg",
            "MS_PR\Vests\Data\NHS_boxmag.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\NHS_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	class MS_LBT6094_HEMS: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (HEMS/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\HEMS_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\HEMS_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_HEMSAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (HEMS/Paramedic)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\HEMS_battlebelt.jpg",
            "MS_PR\Vests\Data\HEMS_boxmag.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\HEMS_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	class MS_LBT6094_HART: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (HART/Operator)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_DropHolster",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase",
            "_VSMPouches",
            "_VSMButtPouch"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\HART_battlebelt.jpg",
            "MS_PR\Vests\Data\RPU_Holster.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\HART_LBT.jpg",
            "",
            ""
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_operator.p3d";
            containerClass="Supply200";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_DropHolster",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase",
                "_VSMPouches",
                "_VSMButtPouch"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
    class MS_LBT6094_HARTAlt: Vest_Camo_Base
    {
        scope=2;
        author="VanSchmoozin/Silence";
        displayName="[MS] LBT6094 (HART/Paramedic)";
        picture="\MS_PR\ms_logo.jpg"
        model="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
        hiddenSelections[]=
        {
            "_1961aPouches",
            "_battleBelt",
            "_boxMag",
            "_Serpa",
            "_SOTGGear",
            "_SOTGRadio",
            "_vestBase"
        };
        hiddenSelectionsTextures[]=
        {
            "",
            "MS_PR\Vests\Data\HART_battlebelt.jpg",
            "MS_PR\Vests\Data\HART_boxmag.jpg",
            "",
            "",
            "",
            "MS_PR\Vests\Data\HART_LBT.jpg"
        };
        descriptionShort="$STR_A3_SP_AL_IV";
        class ItemInfo: VestItem
        {
            uniformModel="\VSM_Vests\lbt6094\models\VSM_lbt6094_MG.p3d";
            containerClass="Supply300";
            mass=50;
            passThrough=1;
            hiddenSelections[]=
            {
                "_1961aPouches",
                "_battleBelt",
                "_boxMag",
                "_Serpa",
                "_SOTGGear",
                "_SOTGRadio",
                "_vestBase"
            };
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName="HitChest";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Diaphragm
                {
                    HitpointName="HitDiaphragm";
                    armor=25;
                    PassThrough=0.30000001;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=25;
                    passThrough=0.30000001;
                };
                class Body
                {
                    hitpointName="HitBody";
                    passThrough=0.30000001;
                };
            };
        };
    };
	
	class MS_RPUCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (RPU)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\rpuhelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class MS_HEMSCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (HEMS)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\HEMShelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.7;
				};
			};
		};
	};
	class MS_CBRNCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (CBRN)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\CBRNhelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.7;
				};
			};
		};
	};
	class MS_HARTCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (HART)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\HARThelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.7;
				};
			};
		};
	};
	class MS_NHSCore: ItemCore
	{
		scope=2;
		weaponPoolAvailable=1;
		displayName="[MS] Opscore (NHS)";
		picture="\MS_PR\ms_logo.jpg"
		model="\VSM_Helmets\models\VSM_ops";
		hiddenSelections[]=
		{
			"_helmBase",
			"_helmGear",
			"_nvgWeight",
			"_Peltor"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_PR\Helmets\Data\NHShelmet.jpg",
			"vsm_helmets\textures\vsm_helmet_pouch.paa",
			"vsm_helmets\textures\secco2.paa",
			""
		};
		class ItemInfo: HeadgearItem
		{
			mass=15;
			allowedSlots[]={901,605};
			uniformModel="\VSM_Helmets\models\VSM_ops";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"_helmBase",
				"_helmGear",
				"_nvgWeight",
				"_Peltor"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=4;
					passThrough=0.7;
				};
			};
		};
	};
	class hlc_ar15_base;
	class hlc_G36_base; // arifle_SPAR_01_base_F;
	class 516_Base: hlc_G36_base// arifle_SPAR_01_base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = {""}; /// original custom made magazines and a group of several standardized mags
		descriptionShort = "A clean rifle developed by Sig Sauer";//tooltip text
        class Library {
        libtextdesc = "A clean rifle developed by Sig Sauer";//another description
        };
		descriptionUse = "Sig Sauer";
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;
		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		handAnim[] = {"OFP2_ManSkeleton", "\a3\weapons_f\LongRangeRifles\EBR\data\Anim\ebr.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;
		modes[] = {"FullAuto", "Semi"}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////
	class Semi: Mode_SemiAuto /// Pew
	{
		sounds[] = {StandardSound};
		class BaseSoundModeType
		{
		weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
		closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_1", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
		closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.235142, 1.100000, 30};
		soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
			begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.020000, 1, 600};
			begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 600};
			soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
        };

		reloadTime = 0.096; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

        memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
		minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};
	class Full: Mode_FullAuto /// Pew
	{
		sounds[] = {StandardSound};
		class BaseSoundModeType
		{
		weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
		closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_1", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
		closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.235142, 1.100000, 30};
		soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
			begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.020000, 1, 600};
			begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 600};
			soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
        };
		class SilencedSound: BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			begin1[] = { "A3\sounds_f\weapons\silenced\silent-07", db-1, 1, 200 };
			begin2[] = { "A3\sounds_f\weapons\silenced\silent-08", db-1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
		};
		reloadTime = 0.096; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

        memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
		minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};
};
	class Rattler_Base: hlc_ar15_base// arifle_SPAR_01_base_F /// Just basic values common for all testing rifle variants
	{
		magazines[] = {""}; /// original custom made magazines and a group of several standardized mags
		descriptionShort = "A clean rifle developed by Sig Sauer";//tooltip text
        class Library {
        libtextdesc = "A clean rifle developed by Sig Sauer";//another description
        };
		descriptionUse = "Sig Sauer";
		reloadAction = "GestureReloadMX"; /// MX hand animation actually fits this rifle well
		// Size of recoil sway of the cursor
		maxRecoilSway=0.0125;
        // Speed at which the recoil sway goes back to zero (from maxRecoilSway to 0 in 1/swayDecaySpeed seconds)
        swayDecaySpeed=1.25;
		/// inertia coefficient of the weapon
		inertia = 0.5;
		/// positive value defines speed of the muzzle independent on the magazine setting, negative value is a coefficient of magazine initSpeed
		initSpeed = -1; /// this means that initSpeed of magazine is used
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////
		opticsZoomMin=0.375;
		opticsZoomMax=1.1;
		opticsZoomInit=0.75;
		distanceZoomMin = 300;
		distanceZoomMax = 300;
/////////////////////////////////////////////////////  I R O N S I G H T S  /////////////////////////////////////////////////////

		handAnim[] = {"OFP2_ManSkeleton", "\A3\Weapons_F_Gamma\Smgs\pdw2000\data\Anim\SMG_03.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;
		modes[] = {"Full", "Semi"}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////
	class Semi: Mode_SemiAuto /// Pew
	{
		sounds[] = {StandardSound};
		class BaseSoundModeType
		{
		weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
		closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_1", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
		closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.235142, 1.100000, 30};
		soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
			begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.020000, 1, 600};
			begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 600};
			soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
        };

		reloadTime = 0.096; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

        memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
		minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};
	class Full: Mode_FullAuto /// Pew
	{
		sounds[] = {StandardSound};
		class BaseSoundModeType
		{
		weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
		closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_1", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
		closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_2", 0.235142, 1.100000, 30};
		soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
		};
		class StandardSound: BaseSoundModeType
		{
			begin1[] = {"A3\sounds_f\weapons\EBR\EBR_st_4", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
			begin2[] = {"A3\sounds_f\weapons\EBR\EBR_st_5", 1.020000, 1, 600};
			begin3[] = {"A3\sounds_f\weapons\EBR\EBR_st_6", 1.000000, 1, 600};
			soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
        };
		class SilencedSound: BaseSoundModeType // Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
		{
			begin1[] = { "A3\sounds_f\weapons\silenced\silent-07", db-1, 1, 200 };
			begin2[] = { "A3\sounds_f\weapons\silenced\silent-08", db-1, 1, 200 };
			soundBegin[] = { begin1, 0.5, begin2, 0.5 };
		};
		reloadTime = 0.096; /// means some 625 rounds per minute
		dispersion = 0.00087; /// A bit less than 3 MOA

        memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
		minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
		midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
		maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
	};
};
	class MS_SIG516: 516_Base
	{
		scope = 0; /// should be visible and useable in game
		displayName = "SIG-516"; /// some name
		model = "\MS_PR\sig516"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	class MS_SIG516PDW: 516_Base
	{
		scope = 0; /// should be visible and useable in game
		displayName = "SIG-516 (PDW-Stock)"; /// some name
		model = "\MS_PR\sig516pdw"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	class MS_MCX: 516_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "SIG-MCX Virtus"; /// some name
		model = "\MS_PR\mcx"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	class MS_MCXBlack: 516_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "SIG-MCX Virtus (Black)"; /// some name
		model = "\MS_PR\mcxblack"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	class MS_MCXSBR: 516_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "SIG-MCX SBR"; /// some name
		model = "\MS_PR\mcxsbr"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	class MS_MCXSBRBlack: 516_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "SIG-MCX SBR (Black)"; /// some name
		model = "\MS_PR\mcxsbrblack"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
};

/*
*/
class CfgSounds {
	sounds[] = {};
	class DoorKickSound
	{
        name = "DoorKickSound";
        sound[] = {"\MS_PR\sounds\DoorKickSound.ogg", 1,1};
        titles[] = {};
    };
    class Smash
    {
        name = "Smash";
        sound[] = {"\MS_PR\sounds\Smash.ogg", 1,1};
        titles[] = {};
    };
	class Wail 
	{
		name = "Wail";
		sound[] = {"\MS_PR\sounds\Wail.ogg", db20, 1};
		titles[] = {0, ""};
	};
	class YelpFinal 
	{
		name = "YelpFinal";
		sound[] = {"\MS_PR\sounds\YelpFinal.ogg", 600, 1};
		titles[] = {0, ""};
	};
	class panic
	{
		name = "panic";
		sound[] = {"\MS_PR\sounds\panic_sfx.ogg", 15, 1.0};
		titles[] = {0, ""};
	};
	class reset
	{
		name = "reset";
		sound[] = {"\MS_PR\sounds\reset.ogg", 1, 1.0};
		titles[] = {0, ""};
	};
};

class CfgFunctions
{
	class MS_PR
	{
		class functions
		{
			class init
			{
				postInit = 1;
				file = "\MS_PR\functions\fn_init.sqf";
			};
			class jawsInit
			{
				postInit = 1;
				file = "\MS_PR\functions\fn_jawsInit.sqf";
			};
			/*
			class panicButton
			{
				postInit = 1;
				file = "\MS_PR\functions\trigger.sqf";
			}
			*/
		};
	};
};