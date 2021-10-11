#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

#include "CfgPatches.hpp"

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitFuel;
			class HitEngine;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class EventHandlers;
		class AnimationSources;
	};

	class ivory_taurus_base: Car_F
	{
		model 	= "\ivory_taurus\ivory_taurus";  /// simple path to model
		picture = "\ivory_taurus\data\portrait_car_CA.paa";
		Icon	= "\ivory_taurus\data\map_car_CA.paa";
		editorPreview = "\ivory_taurus\data\ivory_taurus.jpg";

		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		displayName = "Ford Taurus"; /// displayed in Editor

		supplyRadius = 2;
viewCargoShadow = 0;
viewDriverShadow = 0;
castCargoShadow = 0;
castDriverShadow = 0;
weapons[] = {};

		driverAction = "ivory_taurus_driver";
		driverInAction = "ivory_taurus_driver";
		cargoAction[] = {"ivory_taurus_cargo","ivory_taurus_cargo2","ivory_taurus_cargo3"};
		cargoInAction[] = {"ivory_taurus_cargo","ivory_taurus_cargo2","ivory_taurus_cargo3"};

		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 3"};
		memoryPointsGetInCargoDir[] = {"pos cargo 1 dir","pos cargo 2 dir","pos cargo 3 dir","pos cargo 3 dir"};

		hiddenSelections[] = {
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"license1",
			"license2",
			"license3",
			"license4",
			"license5",
			"license6",
			"license7",
			"license8",
			"license9",
			"license10",
			"license11",
			"license12",
			"license13",
			"target1",
			"target2",
			"target3",
			"lock1",
			"lock2",
			"lock3",
			"patrol1",
			"patrol2",
			"patrol3",
			"lbb-left-1",
			"lbb-left-2",
			"lbb-right-1",
			"lbb-right-2",
			"lbf-left-1",
			"lbf-left-2",
			"lbf-right-1",
			"lbf-right-2",
			"lbg-left-1",
			"lbg-right-1",
			"lbt-back-left-1",
			"lbt-back-left-2",
			"lbt-back-left-3",
			"lbt-back-left-4",
			"lbt-back-left-5",
			"lbt-back-right-1",
			"lbt-back-right-2",
			"lbt-back-right-3",
			"lbt-back-right-4",
			"lbt-back-right-5",
			"lbt-front-left-1",
			"lbt-front-left-2",
			"lbt-front-left-3",
			"lbt-front-left-4",
			"lbt-front-left-5",
			"lbt-front-right-1",
			"lbt-front-right-2",
			"lbt-front-right-3",
			"lbt-front-right-4",
			"lbt-front-right-5",
			"lbr-left-1",
			"lbr-right-1"
		};

		terrainCoef 	= 2; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 3; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 80;
		cost			= 50000; /// how likely is the enemy going to target this vehicle

		transportMaxBackpacks 	= 3; /// just some backpacks fit the trunk by default
		transportSoldier 		= 3; /// number of cargo except driver

		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		class Library
		{
			year="2002";
			manufacturer="Ford";
			model="Taurus";
			engineLayout="V8";
			country="United States";
			libTextDesc = "";
		};
		class TransportItems {};
		class Turrets{}; /// doesn't have any gunner nor commander
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.125;
				passThrough = 0;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				passThrough = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				passThrough = 1;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.05;
				passThrough = 1;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.05;
				passThrough = 1;
			};
		};

		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out

		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"		/// PiPs are in a separate file to make this one simple
		#include "physx.hpp"	/// PhysX settings are in a separate file to make this one simple

		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 1.0;
			turnIncreaseLinear = 3.0;
			turnIncreaseTime = 0.0;
			turnDecreaseConst = 8.0;
			turnDecreaseLinear = 0.0;
			turnDecreaseTime = 0.0;
			maxTurnHundred = 1.0;
		};

		/// memory points where do tracks of the wheel appear
		// front left track, left offset
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";

		class Damage 
		{
			tex[]={};
			mat[]=
			{
				"ivory_data\data\glass_veh_int.rvmat","ivory_data\data\glass_veh_damage.rvmat","ivory_data\data\glass_veh_damage.rvmat",		

				"ivory_data\data\glass_veh.rvmat","ivory_data\data\glass_veh_damage.rvmat","ivory_data\data\glass_veh_damage.rvmat",
				
				"ivory_data\data\glass_veh_lights.rvmat","ivory_data\data\glass_veh_lights_damage.rvmat","ivory_data\data\glass_veh_lights_damage.rvmat",
				
				"ivory_data\data\glossy.rvmat","ivory_data\data\glossy_damage.rvmat","ivory_data\data\glossy_destruct.rvmat",
				
				"ivory_data\data\metallic.rvmat","ivory_data\data\metallic_damage.rvmat","ivory_data\data\metallic_destruct.rvmat",
				
				"ivory_data\data\matte.rvmat","ivory_data\data\matte_damage.rvmat","ivory_data\data\matte_destruct.rvmat",
				
				"ivory_data\data\chrome.rvmat","ivory_data\data\chrome_damage.rvmat","ivory_data\data\chrome_destruct.rvmat",
				
				"ivory_data\data\pearlescentblue.rvmat","ivory_data\data\pearlescentblue_damage.rvmat","ivory_data\data\pearlescentblue_destruct.rvmat",
				
				"ivory_data\data\pearlescentred.rvmat","ivory_data\data\pearlescentred_damage.rvmat","ivory_data\data\pearlescentred_destruct.rvmat",
				
				"ivory_data\data\pearlescentgreen.rvmat","ivory_data\data\pearlescentgreen_damage.rvmat","ivory_data\data\pearlescentgreen_destruct.rvmat"
			};
		};

		class Exhausts /// specific exhaust effects for the car
		{
			class Exhaust1 /// the car has two exhausts - each on one side
			{
				position 	= "exhaust";  		/// name of initial memory point
				direction 	= "exhaust_dir";	/// name of memory point for exhaust direction
				effect 		= "ExhaustsEffect";	/// what particle effect is it going to use
			};

			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffect";
			};
		};

		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 50;						/// angle of full light
				outerAngle 		= 120;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.5;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class LightCarHeadL03: LightCarHeadL01
			{
				position 	= "LightCarHeadL03";
				direction 	= "LightCarHeadL03_end";
				hitpoint 	= "Light_LH";
				selection 	= "Light_LH";
				size 			= 3;
				flareSize 		= 1.5;
				intensity 		= 3;
				innerAngle 		= 70;						
				outerAngle 		= 150;						
			};
			class LightCarHeadR03: LightCarHeadL03
			{
				position 	= "LightCarHeadR03";
				direction 	= "LightCarHeadR03_end";
				hitpoint 	= "Light_RH";
				selection 	= "Light_RH";
			};
		};

		hiddenSelectionsTextures[] = {
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"ivory_taurus\data\wheel.paa",
			"#(argb,8,8,3)color(0,0,0,0.01,CA)",
			"#(argb,8,8,3)color(0,0,0,0.01,CA)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",//
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\liberty_lights.paa",
			"ivory_data\police\commander.paa",
			"ivory_data\police\commander.paa"
			
		};


		class AnimationSources: AnimationSources
		{
			class turn_left
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class turn_right: turn_left{};
 			class light_l: turn_left{};
 			class light_r: turn_left{};
 			class light_lh: turn_left{};
 			class light_rh: turn_left{};
 			class light_lp: turn_left{};
 			class light_rp: turn_left{};

			class spoiler: turn_left{};
			class lightf_l: turn_left{initPhase = 1;};
			class lightf_r: turn_left{initPhase = 1;};
			class lightb_l: turn_left{initPhase = 1;};
			class lightb_r: turn_left{initPhase = 1;};

 			class lbSystem_top: turn_left{};
			class lbSystem_front: turn_left{};
			class lbSystem_back: turn_left{};
			class lbSystem_cage: turn_left{};
			class lbSystem_rambar: turn_left{};
			class lbSystem_radar: turn_left{};
			class lbSystem_num: turn_left{};
			class lbSystem_antenna: turn_left{};
 			class lbSystem_spotlight: turn_left{};
			
			class wheel_1_1_default: turn_left{initPhase = 1;};
			class wheel_1_2_default: turn_left{initPhase = 1;};
			class wheel_2_1_default: turn_left{initPhase = 1;};
			class wheel_2_2_default: turn_left{initPhase = 1;};
			class wheel_1_1_police: turn_left{};
			class wheel_1_2_police: turn_left{};
			class wheel_2_1_police: turn_left{};
			class wheel_2_2_police: turn_left{};

			class spotlight_light: turn_left{};
			class spotlight_head: turn_left{};
			class computerscreen: turn_left
			{
				source = "user";
				animPeriod = 4;
				initPhase = 0;
			};

			class ani_lightbar: turn_left{};
			class ani_siren: turn_left{};
			class ani_directional: turn_left{};
			class backfire: turn_left{};

			class lbb_left_1: turn_left{};
			class lbb_left_2: turn_left{};
			class lbb_right_1: turn_left{};
			class lbb_right_2: turn_left{};
			class lbf_left_1: turn_left{};
			class lbf_left_2: turn_left{};
			class lbf_right_1: turn_left{};
			class lbf_right_2: turn_left{};
			class lbg_left_1: turn_left{};
			class lbg_right_1: turn_left{};
			class lbr_left_1: turn_left{};
			class lbr_right_1: turn_left{};
			class lbt_back_left_1: turn_left{};
			class lbt_back_left_2: turn_left{};
			class lbt_back_left_3: turn_left{};
			class lbt_back_left_4: turn_left{};
			class lbt_back_left_5: turn_left{};
			class lbt_back_right_1: turn_left{};
			class lbt_back_right_2: turn_left{};
			class lbt_back_right_3: turn_left{};
			class lbt_back_right_4: turn_left{};
			class lbt_back_right_5: turn_left{};
			class lbt_front_left_1: turn_left{};
			class lbt_front_left_2: turn_left{};
			class lbt_front_left_3: turn_left{};
			class lbt_front_left_4: turn_left{};
			class lbt_front_left_5: turn_left{};
			class lbt_front_right_1: turn_left{};
			class lbt_front_right_2: turn_left{};
			class lbt_front_right_3: turn_left{};
			class lbt_front_right_4: turn_left{};
			class lbt_front_right_5: turn_left{};

		};
		class UserActions
		{
			class Manual
			{
				displayName = "<t color=""#4EB1BA"">Read Manual</t>";
				position = "PIP0_pos";
				radius = 100;
				condition = "driver this == player";
				statement = "[this] call ivory_fnc_manual;";
				shortcut = "";
				onlyForplayer=1;
				showWindow = 0;
			};
		};
		
				class eventhandlers {


			init = "_this spawn ivory_fnc_initCar";
		};
		class PlateInfos
		{
		    // name of section where plate number should generated
		     name = "spz";
		     // color used for plate number in (r,g,b,a) format
		     color[] = {0.196,0.439,0.463,1};
		     plateFont        = "RobotoCondensed";
		     // "#" represent number & "$" represents letter
		     plateFormat        = "$$$-####";
		     // Required even if you don't use any letters in plateFormat
		     plateLetters    = "ABCDEFHKLMPRSTVXYZ";
		};
	};
	// Derivate from the base class
	class ivory_taurus: ivory_taurus_base /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		editorSubcategory="Ivory";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
	};
	class ivory_taurus_marked: ivory_taurus_base /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Marked)";
		editorSubcategory="IvoryPoliceMarked";
		editorPreview = "\ivory_taurus\data\ivory_taurus_marked.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 1;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 1;
		emergencyRadar = 1;
		emergencyAntenna = 1;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
				maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
		
		weapons[]={};

		class eventhandlers: eventhandlers {
			
		};
		
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 50;						/// angle of full light
				outerAngle 		= 120;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 0.5;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class LightCarHeadL03: LightCarHeadL01
			{
				position 	= "LightCarHeadL03";
				direction 	= "LightCarHeadL03_end";
				hitpoint 	= "Light_LH";
				selection 	= "Light_LH";
				size 			= 3;
				flareSize 		= 1.5;
				intensity 		= 3;
				innerAngle 		= 70;						
				outerAngle 		= 150;			
			};
			class LightCarHeadR03: LightCarHeadL03
			{
				position 	= "LightCarHeadR03";
				direction 	= "LightCarHeadR03_end";
				hitpoint 	= "Light_RH";
				selection 	= "Light_RH";
			};
			class SpotLight: LightCarHeadL01
			{
				position 	= "spotlight_pos";
				direction 	= "spotlight_dir";
				hitpoint 	= "spotlight_light";
				selection 	= "spotlight_light";
				
				color[] 		= {10000, 10000, 10000};		/// approximate colour of standard lights
				ambient[]		= {7, 7, 7};				/// nearly a white one
				size 			= 3;						/// size of the light point seen from distance
				innerAngle 		= 60;						/// angle of full light
				outerAngle 		= 150;						/// angle of some light
				coneFadeCoef 	= 20;						/// attenuation of light between the above angles
				intensity 		= 2;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= true;					/// switching light off during day saves CPU a lot
				flareSize 		= 6;						/// how big is the flare
			};
		};
	};
	class ivory_taurus_marked_norb: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Marked/No Pushbar)";
		editorSubcategory="IvoryPoliceMarked";
		editorPreview = "\ivory_taurus\data\ivory_taurus_marked_norb.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 1;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyAntenna = 1;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;

	};
	class ivory_taurus_marked_classic: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Marked/Classic)";
		editorSubcategory="IvoryPoliceMarked";
		editorPreview = "\ivory_taurus\data\ivory_taurus_marked_norb.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 1;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyAntenna = 0;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;

	};
	class ivory_taurus_unmarked: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Unmarked)";
		editorSubcategory="IvoryPoliceUnmarked";
		editorPreview = "\ivory_taurus\data\ivory_taurus_unmarked.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 1;
		emergencyRadar = 1;
		emergencyAntenna = 0;
		emergencyNumbers = 0;
		emergencyTinted = 1;
		emergencySpotlight = 0;
		texture="black";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
	};
	class ivory_taurus_unmarked_norb: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Unmarked/No Pushbar)";
		editorSubcategory="IvoryPoliceUnmarked";
		editorPreview = "\ivory_taurus\data\ivory_taurus_unmarked_norb.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyAntenna = 0;
		emergencyNumbers = 0;
		emergencyTinted = 1;
		emergencySpotlight = 0;
		texture="black";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
	};
	class ivory_taurus_slicktop: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Slicktop)";
		editorSubcategory="IvoryPoliceSlicktop";
		editorPreview = "\ivory_taurus\data\ivory_taurus_slicktop.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 1;
		emergencyRadar = 1;
		emergencyAntenna = 1;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
	};
	class ivory_taurus_slicktop_norb: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Slicktop/No Pushbar)";
		editorSubcategory="IvoryPoliceSlicktop";
		editorPreview = "\ivory_taurus\data\ivory_taurus_slicktop_norb.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyAntenna = 1;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
	};
	class ivory_taurus_slicktop_classic: ivory_taurus_marked /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		displayName="Ford Taurus (Police/Slicktop/Classic)";
		editorSubcategory="IvoryPoliceSlicktop";
		editorPreview = "\ivory_taurus\data\ivory_taurus_slicktop_norb.jpg";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction

		tf_hasLRradio = 1; 
emergencySiren = 1;
		emergencyLightbarType = 1;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 1;
		emergencyRambar = 0;
		emergencyRadar = 1;
		emergencyAntenna = 0;
		emergencyNumbers = 1;
		emergencyTinted = 0;
		emergencySpotlight = 1;
		texture="taurus_police";
		
		maxSpeed = 225.308+90;
		enginePower = 699;
		peakTorque = 720;
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ivory_taurus_driver = "ivory_taurus_driver";
		ivory_taurus_cargo = "ivory_taurus_cargo";
		ivory_taurus_cargo2 = "ivory_taurus_cargo2";
		ivory_taurus_cargo3 = "ivory_taurus_cargo3";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class ivory_taurus_driver: Crew
		{
			file = "ivory_taurus\anim\driver.rtm";
		};
		class ivory_taurus_cargo: Crew
		{
			file = "ivory_taurus\anim\cargo.rtm";
		};
		class ivory_taurus_cargo2: Crew
		{
			file = "ivory_taurus\anim\cargo2.rtm";
		};
		class ivory_taurus_cargo3: Crew
		{
			file = "ivory_taurus\anim\cargo3.rtm";
		};
	};
};

class CfgIvoryTextures
{
	class taurus_police
	{
		displayName = "Police"; 
		texture = "ivory_taurus\data\taurus_police.paa"; 
	};
};