class CfgPatches
{
	class MSBP_Items_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgVehicles
{
	class ReammoBox;
	class NHS_Backpack: ReammoBox
	{
		scope = 2;
		class TransportMagazines {};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = Backpacks;
		allowedSlots[] = {901};
		model = "\MS_Items\NHSBackpack";
		displayName = "NHS Backpack";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		class DestructionEffects {};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		maximumLoad = 350;
		side = 3;
	};
	class HEMS_Backpack: ReammoBox
	{
		scope = 2;
		class TransportMagazines {};
		class TransportWeapons{};
		isbackpack = 1;
		reversed = 1;
		mapSize = 2;
		vehicleClass = Backpacks;
		allowedSlots[] = {901};
		model = "\MS_Items\HEMSBackpack";
		displayName = "HEMS Backpack";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\ui\backpack_CA.paa";
		icon = "iconBackpack";
		transportMaxWeapons = 1;
		transportMaxMagazines = 20;
		class DestructionEffects {};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		maximumLoad = 400;
		side = 3;
	};
    class Headgear_Base_F;
    class MS_Cuffs: Headgear_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "UK Handcuffs";
        author = "Silence/Zelo";
        vehicleClass = ItemsHeadgear;
        model = "\MS_Items\handcuffs";        // Omit this, if the headgear is a helmet.
        class TransportItems
        {
            class MS_handCuffs
            {
                name = MS_handCuffs;
                count = 1;
            };
        };
    };
    class MS_Enforcer: Headgear_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "UK Enforcer";
        author = "Silence/Zelo";
        vehicleClass = ItemsHeadgear;
        model = "\MS_Items\ukenforcer";        // Omit this, if the headgear is a helmet.
        class TransportItems
        {
            class MS_EnforcerRam
            {
                name = MS_EnforcerRam;
                count = 1;
            };
        };
    };
	class Static;
	class MS_EnforcerStatic : Static {
		scope = 2;
		model = "\MS_Items\ukenforcer";
		displayName = "Enforcer (Carryable)";
	};
	class MS_Lightbar : Static {
		scope = 2;
		model = "\MS_Items\lightbar";
		displayName = "Lightbar (Police)";
	};
};


/// All firemodes, to be sure
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

/// Weapon slots
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;


class CfgWeapons
{
	class Rifle;

	class Enforcer_Base: Rifle /// Just basic values common for all testing rifle variants
	{
		magazines[] = {}; /// original custom made magazines and a group of several standardized mags
		descriptionShort = "";//tooltip text
        class Library {
        libtextdesc = "";//another description
        };
		descriptionUse = "Enforcer";
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

		handAnim[] = {"OFP2_ManSkeleton", "A3\Weapons_F\Rifles\MX\data\Anim\MX.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;
		modes[] = {Single}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////
		class Single: Mode_SemiAuto /// Pew
		{
			// the new parameter to distinguish muzzle accessories type

			reloadTime = 0.096; /// means some 625 rounds per minute
			dispersion = 0.00087; /// A bit less than 3 MOA

            memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
			minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
	};
	class MS_Enforcer: Enforcer_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Enforcer"; /// some name
		model = "MS_Items\enforcer"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
	
	class Crusher_Base: Rifle /// Just basic values common for all testing rifle variants
	{
		magazines[] = {}; /// original custom made magazines and a group of several standardized mags
		descriptionShort = "";//tooltip text
        class Library {
        libtextdesc = "";//another description
        };
		descriptionUse = "Jaws of Life";
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

		handAnim[] = {"OFP2_ManSkeleton", "A3\Weapons_F\Rifles\MX\data\Anim\MX.rtm"}; /// MX hand animation actually fits this rifle well
		dexterity = 1.8;
		modes[] = {Single}; /// Includes fire modes for AI

    ////////////////////////////////////////////////////// NO OPTICS ///////////////////////////////////////////////////////////
		class Single: Mode_SemiAuto /// Pew
		{
			// the new parameter to distinguish muzzle accessories type

			reloadTime = 0.096; /// means some 625 rounds per minute
			dispersion = 0.00087; /// A bit less than 3 MOA

            memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
			minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
	};
	class MS_Crusher: Crusher_Base
	{
		scope = 2; /// should be visible and useable in game
		displayName = "Jaws of Life"; /// some name
		model = "MS_Items\doorcrusher"; /// path to model

		picture = "\MS_PR\ms_logo.jpg"; /// different accessories have M, S, T instead of X
		UiPicture = "\MS_PR\ms_logo.jpg"; /// weapon with grenade launcher should be marked such way

		weaponInfoType = "RscWeaponZeroing"; /// display with zeroing is good for iron sights

		muzzles[] = {this}; /// to be able to switch between bullet muzzle and TGL
	};
};