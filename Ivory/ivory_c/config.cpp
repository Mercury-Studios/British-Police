#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

#include "CfgPatches.hpp"

class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;

class RscPicture;

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

	class ivory_c_base: Car_F
	{
		model 	= "\ivory_c\ivory_c";  /// simple path to model
		picture = "\ivory_c\data\portrait_car_CA.paa";
		Icon = "\ivory_c\data\map_car_CA.paa";
		editorPreview = "\ivory_c\data\ivory_c.jpg";

		vehicleClass = "Ivory";

		displayName = "Bentley Continental Supersports"; /// displayed in Editor

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

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 80; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle
		supplyRadius = 2;
viewCargoShadow = 0;
viewDriverShadow = 0;
castCargoShadow = 0;
castDriverShadow = 0;
weapons[] = {};

		transportMaxBackpacks 	= 5; /// just some backpacks fit the trunk by default
		transportSoldier 		= 3; /// number of cargo except driver

		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		autoSpoiler=1;
		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;

		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};

		class Library
		{
			year="2009";
			manufacturer="Bentley";
			model="Continental Supersports";
			engineLayout="W12";
			country="United Kingdom";
			libTextDesc = "";
		};
		class TransportItems {};
		class Turrets{};
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
		
		driverAction 		= ivory_c_driver; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
        driverInAction      = ivory_c_driver;
		cargoAction[] 		= {ivory_c_cargo,ivory_c_cargo2,ivory_c_cargo3}; /// the same of all the crew
        cargoInAction[]     = {ivory_c_cargo,ivory_c_cargo2,ivory_c_cargo3};
		getInAction 		= GetInLow; 		/// how does driver look while getting in
		getOutAction 		= GetOutLow; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 3","pos cargo 3"};
		memoryPointsGetInCargoDir[] = {"pos cargo 1 dir","pos cargo 2 dir","pos cargo 3 dir","pos cargo 3 dir"};
		
		#include "sounds.hpp"	/// sounds are in a separate file to make this one simple
		#include "pip.hpp"		/// PiPs are in a separate file to make this one simple
		brakeDistance = 5.0;
		thrustDelay = 0;
		brakeIdleSpeed = 2;
		maxSpeed = 329;
		fuelCapacity = 20;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		acceleration = 15;
		idleRpm = 900;
		redRpm = 6000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.16,"N",0,"D1",2.875,"D2",1.773,"D3",1.267,"D4",1.000,"D5",0.833,"D6",0.711}; 
			TransmissionRatios[] = {"High",3.364};
			gearBoxMode = "full-auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.025;
		differentialType = "all_limited";
		frontRearSplit=0.3;
		frontBias=2.5;
		rearBias=2.5;
		centreBias=2.5;
		clutchStrength = 5;
		maxOmega = 628.32;
		enginePower = 563;
		peakTorque = 800;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		slowSpeedForwardCoef = 1;
		normalSpeedForwardCoef = 1;
		torqueCurve[] = {
			{0 , 0},
			{0.14 , 0.66},
			{0.29 , 0.92},
			{0.43 , 0.97},
			{0.57 , 1},
			{0.71 , 1},
			{0.86 , 0.96},
			{1 , 0.9},
		};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.91, 0.91, 0.91, 0.91, 0.91, 0.91};
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 2;
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 3000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.1;
				sprungMass = 400;
				springStrength = 72000;
				springDamperRate = 3990;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 18;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				latStiffX = 18;
				latStiffY = 180;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
			};
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
				position 	= "exhaust1_pos";  		/// name of initial memory point
				direction 	= "exhaust1_dir";	/// name of memory point for exhaust direction
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
			class LightCarHeadL02: LightCarHeadL01
			{
				position 	= "LightCarHeadL02";
				direction 	= "LightCarHeadL02_end";
				hitpoint 	= "";
				selection 	= "";
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class LightCarHeadR02: LightCarHeadL01
			{
				position 	= "LightCarHeadR02";
				direction 	= "LightCarHeadR02_end";
				hitpoint 	= "";
				selection 	= "";
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
			"ivory_c\data\bentley_con_wheel_diff_00.paa",
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
			""
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

			class spoiler
			{
				source = "user";
				animPeriod = 0.5;
				initPhase = 0;
			};
			class lightf_l: turn_left{};
			class lightf_r: turn_left{};
			class lightb_l: turn_left{};
			class lightb_r: turn_left{};

 			class lbSystem_top: turn_left{};
			class lbSystem_front: turn_left{};
			class lbSystem_back: turn_left{};
			class lbSystem_cage: turn_left{};
			class lbSystem_rambar: turn_left{};
			class lbSystem_radar: turn_left{};
			class lbSystem_num: turn_left{};
			class lbSystem_antenna: turn_left{};
 			class lbSystem_spotlight: turn_left{};

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
	class ivory_c: ivory_c_base /// some class that is going to be visible in editor
	{
        author  = "Ivory";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
        typicalCargo[] = {"C_man_1"};
		editorSubcategory="Ivory";

	};
	class ivory_c_president: ivory_c_base /// some class that is going to be visible in editor
	{
		displayName = "Bentley Continental Supersports (Presidential)"; /// displayed in Editor
		editorPreview = "\ivory_c\data\ivory_c_president.jpg";
		
        author  = "Ivory";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
        typicalCargo[] = {"C_man_1"};
		editorSubcategory="IvoryPresidential";
		texture="black";

		tf_hasLRradio = 1; 
		emergencySiren = 1;
		emergencyLightbarType = 6;
		emergencyLightbarTop = 0;
		emergencyLightbarFront = 1;
		emergencyLightbarBack = 1;
		emergencyCage = 0;
		emergencyRambar = 0;
		emergencyRadar = 0;
		emergencyAntenna = 0;
		emergencyNumbers = 0;
		emergencyTinted = 1;
		emergencySpotlight = 0;
		
		armor 			= 115; 
		
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitFuel: HitFuel
			{
				armor = 1;
				material = -1;
				passThrough = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 1;
				material = -1;
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				passThrough = 0;
			};
			class HitGlass1: HitGlass1
			{
				armor = 1;
				passThrough = 0;
			};
			class HitGlass2: HitGlass2
			{
				armor = 1;
				passThrough = 0;
			};
			class HitGlass3: HitGlass3
			{
				armor = 1;
				passThrough = 0;
			};
			class HitGlass4: HitGlass4
			{
				armor = 1;
				passThrough = 0;
			};
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ivory_c_driver = "ivory_c_driver";
		ivory_c_cargo = "ivory_c_cargo";
		ivory_c_cargo2 = "ivory_c_cargo2";
		ivory_c_cargo3 = "ivory_c_cargo3";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class ivory_c_driver: Crew
		{
			file = "ivory_c\anim\driver.rtm";
		};
		class ivory_c_cargo: Crew
		{
			file = "ivory_c\anim\cargo.rtm";
		};
		class ivory_c_cargo2: Crew
		{
			file = "ivory_c\anim\cargo2.rtm";
		};
		class ivory_c_cargo3: Crew
		{
			file = "ivory_c\anim\cargo3.rtm";
		};
	};
};