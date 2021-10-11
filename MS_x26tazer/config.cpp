#include "cfgMagazines.hpp" /// specific magazines for this rifle
#include "cfgAmmo.hpp" /// specific ammo for this rifle
class CfgPatches
{
    class ms_x26 //class of our weapon. Below includes the classes we create so the game can include them.
 {
    requiredaddons[] = {};
    requiredversion = 0.1;
    units[] = {};
    weapons[] = {"ms_tazer"};
    magazines[] = {"ms_tazerRound"};
    };
};
/* class Mode_SemiAuto;
class ItemCore;
class PistolCore;   // External class reference
class Pistol;       // External class reference
class Rifle;        // External class reference
class RifleCore;    // External class reference
class Pistol_Base_F;
class WeaponSlotsInfo;
class SlotInfo;
*/
 
/*
REFER TO THE BIS WIKI:
 
https://community.bistudio.com/wiki/Arma_3_Weapon_Config_Guidelines
 
https://community.bistudio.com/wiki/CfgWeapons_Config_Reference
 
https://community.bistudio.com/wiki/CfgAmmo_Config_Reference
 
THIS CONFIG IS AN ANNOTATED SAMPLE FOR REFERENCE. IT MAY CONTAIN UNNCESSARY / INCORRECT VALUES
 
www.benredmond.net
 
*/
class Mode_SemiAuto;//importing an external class as we use the Mode_SemiAuto below
class CfgWeapons//beginning of our cfgWeapons entry
{
    class ItemCore;
    class PistolCore;   // External class reference
    class Pistol;       // External class reference
	class UGL_F;
    //class Rifle;        // External class reference
    //class RifleCore;    // External class reference
    class Pistol_Base_F;
    class WeaponSlotsInfo;
    class SlotInfo;
    class ItemInfo;
    class ms_tazer: Pistol_Base_F //slaves off Arma's Pistol_Base_F class. The values defined below overwrite Pistol_Base_F, anything not defined is inherited. Consult the wiki/sample content for a full config with every possible value.
    {
        scope = 2;//From BIS wiki: 2 = can use in-game, with a picture in gear present. 1 = can use in-game with no picture in gear. Not totally sure what this does myself, I haven't yet tested a value of 1.
        //type = 2;//Is a pistol. Unncessary because we slave from Pistol_Base_F
        //requiredaddons[] = {};
        //requiredversion = 0.1;
        //units[] = {};
        //weapons[] = {"bek_makarov"};//testingthisdisabled
        displayName = "X26 Tazer";//Our item's name in the UI
        model = "\MS_x26tazer\tazera3";//relative path to the p3d file. The p3d suffix is likely unnecessary.
        picture = "\MS_x26tazer\ms_logo.jpg";//UI image.
        magazines[] = {"ms_tazerRound"};//list of magazines this weapon takes
        descriptionShort = "A tazer employed by law enforcement around the world";//tooltip text
        class Library {
            libtextdesc = "A tazer employed by law enforcement around the world";//another description
        };
        descriptionUse = "X26 Tazer";
        //changeFiremodeSound[] = {""};
        //selectionFireAnim = "";
        //nameSound = "";
        reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};//the first (0.3) number is the sound's loudness, while the last number is it's audible distance in meters.
        drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};//sound played when the magazine is dry (empty).
        inertia = 0.60000;//Inertia value of the weapon — higher values = greater inertia. Weapons with a greater amount of weight towards their front should have higher inertia, like an M1 Garand compared to an MP5. 
        initSpeed = -1.02;//This is a 2% increase in the ammo's velocity for this weapon. This allows weapons with longer/better barrels to fire the same ammo as other weapons yet at a different muzzle velocity. A 2% decrease would be = -0.98;
        recoil = "recoil_pistol_rook40";//recoil profile defined in arma's weapon config, or a custom profile defined in this file's CfgRecoils
        modes[] = {"Single"};//firemodes like Single, FullAuto
        muzzles[] = {"this", "Safe"};//muzzles. Used for things like underbarrel grenade launchers or in this case a faked safety. If we give a muzzle no magazines to use it cannot fire, this mimicks a safety.
        class Single : Mode_SemiAuto
        {
            sounds[] = {StandardSound};
            class BaseSoundModeType
            {
                weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
                soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
                begin2[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_2b", 1.020000, 1, 600};
                begin3[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_3b", 1.000000, 1, 600};
                soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
            };
            reloadTime = 0.100000;//NOT the time to reload the magazine but the time in seconds between shots. It would more appropriately be called cycleTime.
            dispersion = 0.007000;//Accuracy. Lower values are higher accuracy. To find a realistic value you should consider your weapon's barrel length and quality and compare it to values from A3's weapons, plus test in-game.
            memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
			minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
        };
        class Safe : UGL_F//A custom muzzle "Safe" which slaves off Arma's UGL_F muzzle
        {
            magazines[] = {};//no magazines defined for this muzzle = cannot be fired.
            displayName = "Safe";//name displayed in Arma's GUI when this firemode is active
            drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.1822, 1, 5};
            modes[] = {"Single"};
            class Single: Mode_SemiAuto
            {
                sounds[] = {StandardSound};
                class BaseSoundModeType
                {
                    weaponSoundEffect  = "DefaultRifle";
                    closure1[] = {};
                    soundClosure[] = {};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};
                    soundBegin[] = {"begin1", 1.00000};
                };
            };
            reloadTime = 0.100000;//unnecessary copy-paste from above because we give the "safe" muzzle no possible magazines, but I included this anyway just incase.
            dispersion = 0.007000;
            optics = 1;
            modelOptics = "";//Would refer to the .p3d (a 2D plane) on which a scope reticle texture would be placed.
            cameraDir = "";
            autoReload = 0;
            memoryPointCamera = "eye";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            holsterOffset = "holster";//named selection in the Memory LOD for the pistol's position when holstered. If not included the center is used. (Center of scene I believe, not center of geo)
            holsterScale = 1;//scale of model in holster
            mass = 20;
            allowedSlots[] = {701,801,901};//what storage slots this item can "fit" in — clothing (701), vest(801), backpack(901).
            class MuzzleSlot : SlotInfo
            {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};//What items (classname) can be used in our weapon's MuzzleSlot (the model's center point is placed on the weapon's MuzzleProxy).
            };
            class CowsSlot : SlotInfo//Top / optic slot
            {
                //linkProxy = "\a3\data_f\proxies\weapon_slots\top";
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo//side slot
            {
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
                compatibleItems[] = {"hlc_acc_dbalpl","hlc_acc_dbalpl_fl", "acc_flashlight_pistol"};
            };
        };
    };
    class ms_tazer_yellow: Pistol_Base_F //slaves off Arma's Pistol_Base_F class. The values defined below overwrite Pistol_Base_F, anything not defined is inherited. Consult the wiki/sample content for a full config with every possible value.
    {
        scope = 2;//From BIS wiki: 2 = can use in-game, with a picture in gear present. 1 = can use in-game with no picture in gear. Not totally sure what this does myself, I haven't yet tested a value of 1.
        //type = 2;//Is a pistol. Unncessary because we slave from Pistol_Base_F
        //requiredaddons[] = {};
        //requiredversion = 0.1;
        //units[] = {};
        //weapons[] = {"bek_makarov"};//testingthisdisabled
        displayName = "X26 Tazer (Yellow)";//Our item's name in the UI
        model = "\MS_x26tazer\tazera3";//relative path to the p3d file. The p3d suffix is likely unnecessary.
        picture = "\MS_x26tazer\ms_logo.jpg";//UI image.
        magazines[] = {"ms_tazerRound"};//list of magazines this weapon takes
        descriptionShort = "A tazer employed by law enforcement around the world";//tooltip text
        class Library {
            libtextdesc = "A tazer employed by law enforcement around the world";//another description
        };
        descriptionUse = "X26 Tazer";
        //changeFiremodeSound[] = {""};
        //selectionFireAnim = "";
        //nameSound = "";
        reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};//the first (0.3) number is the sound's loudness, while the last number is it's audible distance in meters.
		hiddenSelections[] = {"taser", "magazine"};
		hiddenSelectionsTextures[] = {"MS_x26tazer\taseryellow.jpg", "MS_x26tazer\cartridgegreen.jpg"};
        drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};//sound played when the magazine is dry (empty).
        inertia = 0.60000;//Inertia value of the weapon — higher values = greater inertia. Weapons with a greater amount of weight towards their front should have higher inertia, like an M1 Garand compared to an MP5. 
        initSpeed = -1.02;//This is a 2% increase in the ammo's velocity for this weapon. This allows weapons with longer/better barrels to fire the same ammo as other weapons yet at a different muzzle velocity. A 2% decrease would be = -0.98;
        recoil = "recoil_pistol_rook40";//recoil profile defined in arma's weapon config, or a custom profile defined in this file's CfgRecoils
        modes[] = {"Single"};//firemodes like Single, FullAuto
        muzzles[] = {"this", "Safe"};//muzzles. Used for things like underbarrel grenade launchers or in this case a faked safety. If we give a muzzle no magazines to use it cannot fire, this mimicks a safety.
        class Single : Mode_SemiAuto
        {
            sounds[] = {StandardSound};
            class BaseSoundModeType
            {
                weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
                soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
                begin2[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_2b", 1.020000, 1, 600};
                begin3[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_3b", 1.000000, 1, 600};
                soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
            };
            reloadTime = 0.100000;//NOT the time to reload the magazine but the time in seconds between shots. It would more appropriately be called cycleTime.
            dispersion = 0.007000;//Accuracy. Lower values are higher accuracy. To find a realistic value you should consider your weapon's barrel length and quality and compare it to values from A3's weapons, plus test in-game.
            memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
			minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
        };
        class Safe : UGL_F//A custom muzzle "Safe" which slaves off Arma's UGL_F muzzle
        {
            magazines[] = {};//no magazines defined for this muzzle = cannot be fired.
            displayName = "Safe";//name displayed in Arma's GUI when this firemode is active
            drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.1822, 1, 5};
            modes[] = {"Single"};
            class Single: Mode_SemiAuto
            {
                sounds[] = {StandardSound};
                class BaseSoundModeType
                {
                    weaponSoundEffect  = "DefaultRifle";
                    closure1[] = {};
                    soundClosure[] = {};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};
                    soundBegin[] = {"begin1", 1.00000};
                };
            };
            reloadTime = 0.100000;//unnecessary copy-paste from above because we give the "safe" muzzle no possible magazines, but I included this anyway just incase.
            dispersion = 0.007000;
            optics = 1;
            modelOptics = "";//Would refer to the .p3d (a 2D plane) on which a scope reticle texture would be placed.
            cameraDir = "";
            autoReload = 0;
            memoryPointCamera = "eye";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            holsterOffset = "holster";//named selection in the Memory LOD for the pistol's position when holstered. If not included the center is used. (Center of scene I believe, not center of geo)
            holsterScale = 1;//scale of model in holster
            mass = 20;
            allowedSlots[] = {701,801,901};//what storage slots this item can "fit" in — clothing (701), vest(801), backpack(901).
            class MuzzleSlot : SlotInfo
            {
                //linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};//What items (classname) can be used in our weapon's MuzzleSlot (the model's center point is placed on the weapon's MuzzleProxy).
            };
            class CowsSlot : SlotInfo//Top / optic slot
            {
                //linkProxy = "\a3\data_f\proxies\weapon_slots\top";
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo//side slot
            {
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
                compatibleItems[] = {"hlc_acc_dbalpl","hlc_acc_dbalpl_fl", "acc_flashlight_pistol"};
            };
        };
    };
   class ms_tazer_green: Pistol_Base_F //slaves off Arma's Pistol_Base_F class. The values defined below overwrite Pistol_Base_F, anything not defined is inherited. Consult the wiki/sample content for a full config with every possible value.
    {
        scope = 2;//From BIS wiki: 2 = can use in-game, with a picture in gear present. 1 = can use in-game with no picture in gear. Not totally sure what this does myself, I haven't yet tested a value of 1.
        //type = 2;//Is a pistol. Unncessary because we slave from Pistol_Base_F
        //requiredaddons[] = {};
        //requiredversion = 0.1;
        //units[] = {};
        //weapons[] = {"bek_makarov"};//testingthisdisabled
        displayName = "X26 Tazer (Green)";//Our item's name in the UI
        model = "\MS_x26tazer\tazera3";//relative path to the p3d file. The p3d suffix is likely unnecessary.
        picture = "\MS_x26tazer\ms_logo.jpg";//UI image.
        magazines[] = {"ms_tazerRound"};//list of magazines this weapon takes
        descriptionShort = "A tazer employed by law enforcement around the world";//tooltip text
        class Library {
            libtextdesc = "A tazer employed by law enforcement around the world";//another description
        };
        descriptionUse = "X26 Tazer";
        //changeFiremodeSound[] = {""};
        //selectionFireAnim = "";
        //nameSound = "";
        reloadMagazineSound[] = {"A3\sounds_f\weapons\Reloads\pistols", 0.300000, 1, 50};//the first (0.3) number is the sound's loudness, while the last number is it's audible distance in meters.
		hiddenSelections[] = {"taser", "magazine"};
		hiddenSelectionsTextures[] = {"MS_x26tazer\tasergreen.jpg", "MS_x26tazer\cartridgegreen.jpg"};
        drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.330957, 1, 80};//sound played when the magazine is dry (empty).
        inertia = 0.60000;//Inertia value of the weapon — higher values = greater inertia. Weapons with a greater amount of weight towards their front should have higher inertia, like an M1 Garand compared to an MP5. 
        initSpeed = -1.02;//This is a 2% increase in the ammo's velocity for this weapon. This allows weapons with longer/better barrels to fire the same ammo as other weapons yet at a different muzzle velocity. A 2% decrease would be = -0.98;
        recoil = "recoil_pistol_rook40";//recoil profile defined in arma's weapon config, or a custom profile defined in this file's CfgRecoils
        modes[] = {"Single"};//firemodes like Single, FullAuto
        muzzles[] = {"this", "Safe"};//muzzles. Used for things like underbarrel grenade launchers or in this case a faked safety. If we give a muzzle no magazines to use it cannot fire, this mimicks a safety.
        class Single : Mode_SemiAuto
        {
            sounds[] = {StandardSound};
            class BaseSoundModeType
            {
                weaponSoundEffect  = "DefaultRifle";//DefaultHandgun
                closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1, 30};//"sound file", volume modifier, unknown, audible distance in meters
                closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3", 0.235142, 1.100000, 30};
                soundClosure[] = {"closure1", 0.500000, "closure2", 0.500000};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};//"sound file", volume modifier, unknown, audible distance in meters
                begin2[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_2b", 1.020000, 1, 600};
                begin3[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_3b", 1.000000, 1, 600};
                soundBegin[] = {"begin1", 0.330000, "begin2", 0.330000, "begin3", 0.340000};//chance of sound playing. So 3 sounds = 33% each for a fair distribution.
            };
            reloadTime = 0.100000;//NOT the time to reload the magazine but the time in seconds between shots. It would more appropriately be called cycleTime.
            dispersion = 0.007000;//Accuracy. Lower values are higher accuracy. To find a realistic value you should consider your weapon's barrel length and quality and compare it to values from A3's weapons, plus test in-game.
            memoryPointCamera = "eye";//the named selection in our model.p3d's memory LOD to be used for the camera's position when in ADS view (Aim Down Sights)
			minRange = 10; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 10; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 10; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
        };
        class Safe : UGL_F//A custom muzzle "Safe" which slaves off Arma's UGL_F muzzle
        {
            magazines[] = {};//no magazines defined for this muzzle = cannot be fired.
            displayName = "Safe";//name displayed in Arma's GUI when this firemode is active
            drySound[] = {"A3\sounds_f\weapons\other\dry1", 0.1822, 1, 5};
            modes[] = {"Single"};
            class Single: Mode_SemiAuto
            {
                sounds[] = {StandardSound};
                class BaseSoundModeType
                {
                    weaponSoundEffect  = "DefaultRifle";
                    closure1[] = {};
                    soundClosure[] = {};
                };
                class StandardSound: BaseSoundModeType
                {
                    begin1[] = {"A3\sounds_f\weapons\SMG_02\SMG_02_st_1b", 1.010000, 1, 600};
                    soundBegin[] = {"begin1", 1.00000};
                };
            };
            reloadTime = 0.100000;//unnecessary copy-paste from above because we give the "safe" muzzle no possible magazines, but I included this anyway just incase.
            dispersion = 0.007000;
            optics = 1;
            modelOptics = "";//Would refer to the .p3d (a 2D plane) on which a scope reticle texture would be placed.
            cameraDir = "";
            autoReload = 0;
            memoryPointCamera = "eye";
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            holsterOffset = "holster";//named selection in the Memory LOD for the pistol's position when holstered. If not included the center is used. (Center of scene I believe, not center of geo)
            holsterScale = 1;//scale of model in holster
            mass = 20;
            allowedSlots[] = {701,801,901};//what storage slots this item can "fit" in — clothing (701), vest(801), backpack(901).
            class MuzzleSlot : SlotInfo
            {
                // linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};//What items (classname) can be used in our weapon's MuzzleSlot (the model's center point is placed on the weapon's MuzzleProxy).
            };
            class CowsSlot : SlotInfo//Top / optic slot
            {
                // linkProxy = "\a3\data_f\proxies\weapon_slots\top";
                compatibleItems[] = {};
            };
            class PointerSlot : SlotInfo//side slot
            {
				linkProxy = "\a3\data_f\proxies\weapon_slots\SIDE";
                compatibleItems[] = {"hlc_acc_dbalpl","hlc_acc_dbalpl_fl", "acc_flashlight_pistol"};
            };
        };
    };
};

class CfgFunctions
{
    class MST
    {
        class functions
        {
            class tazer
            {
				postInit = 1;
                file = "MS_x26tazer\functions\fn_tazer.sqf";
            };
        };
    };
};

class CfgSounds
{
	sounds[] = {};
	class tasersfx
	{
		name = "tasersfx";
		sound[] = {"\MS_x26tazer\sounds\tasersfx.ogg", 130, 1.0};
		titles[] = {0, ""};
	};

	class tasershot
	{
		name = "tasershot";
		sound[] = {"\MS_x26tazer\sounds\tasershot.ogg", 300, 1.0};
		titles[] = {0, ""};
	};
};