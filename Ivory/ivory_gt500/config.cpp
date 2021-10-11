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

	class ivory_gt500_base: Car_F
	{
		model 	= "\ivory_gt500\ivory_gt500";  /// simple path to model
		picture = "\ivory_gt500\data\portrait_car_CA.paa";
		Icon = "\ivory_gt500\data\map_car_CA.paa";
		editorPreview = "\ivory_gt500\data\ivory_gt500.jpg";

		vehicleClass = "Ivory";

		displayName = "Shelby GT500"; /// displayed in Editor

		supplyRadius = 2;
viewCargoShadow = 0;
viewDriverShadow = 0;
castCargoShadow = 0;
castDriverShadow = 0;
weapons[] = {};

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
			"license13"
		};

		terrainCoef 	= 2; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 3; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 80; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle

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

		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;

		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};

		class Library
		{
			year="1968";
			manufacturer="Shelby";
			model="GT500";
			engineLayout="V8";
			country="United States";
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

		driverAction 		= ivory_gt500_driver; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
        driverInAction      = ivory_gt500_driver;
		cargoAction[] 		= {ivory_gt500_cargo,ivory_gt500_cargo2,ivory_gt500_cargo3}; /// the same of all the crew
        cargoInAction[]     = {ivory_gt500_cargo,ivory_gt500_cargo2,ivory_gt500_cargo3};
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
		thrustDelay            	= 0;
		engineStartSpeed 		= 1.1;
		brakeIdleSpeed         	= 1.78;
		maxSpeed               	= 255;
		fuelCapacity           	= 20;
		wheelCircumference     	= 2.277;
		antiRollbarForceCoef	= 0;
		antiRollbarForceLimit	= 0;
		antiRollbarSpeedMin 	= 0;
		antiRollbarSpeedMax		= 0;
		idleRpm = 1000;
		redRpm = 5500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.16,"N",0,"D1",4.0,"D2",2.6,"D3",1.9,"D4",1.5,"D5",1.2,"D6",0.9,"D7",0.7};
			TransmissionRatios[] = {"High",3.3};
			gearBoxMode = "full-auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.025;
		differentialType = "rear_limited";
		frontRearSplit=0.3;
		frontBias=2.5;
		rearBias=2.5;
		centreBias=2.5;
		clutchStrength = 5.0;
		maxOmega = 837.76;
		enginePower = 342;
		peakTorque = 385;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		slowSpeedForwardCoef = 1;
		normalSpeedForwardCoef = 1;
		torqueCurve[] = {
			{0 , 0},
			{0.14 , 0.54},
			{0.29 , 0.73},
			{0.43 , 0.89},
			{0.57 , 0.94},
			{0.71 , 0.97},
			{0.86 , 0.95},
			{1 , 0.86}
		};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.87, 0.87, 0.87, 0.87, 0.87, 0.87, 0.87};
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
				MOI = 3;
				dampingRate = 0.5;
				maxBrakeTorque = 3000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.1;
				sprungMass = 400;
				springStrength = 36400;
				springDamperRate = 3600;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 18;
				latStiffY = 180;
				frictionVsSlipGraph[] = {
					{ 0,1 },
					{ 0.5,1 },
					{ 1,1 }};
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
			"ivory_gt500\data\shelby_gt50067_wheel_diffuse_00.paa",
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

			class backfire: turn_left{};
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
	class ivory_gt500: ivory_gt500_base /// some class that is going to be visible in editor
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
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ivory_gt500_driver = "ivory_gt500_driver";
		ivory_gt500_cargo = "ivory_gt500_cargo";
		ivory_gt500_cargo2 = "ivory_gt500_cargo2";
		ivory_gt500_cargo3 = "ivory_gt500_cargo3";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class ivory_gt500_driver: Crew
		{
			file = "ivory_gt500\anim\driver.rtm";
		};
		class ivory_gt500_cargo: Crew
		{
			file = "ivory_gt500\anim\cargo.rtm";
		};
		class ivory_gt500_cargo2: Crew
		{
			file = "ivory_gt500\anim\cargo2.rtm";
		};
		class ivory_gt500_cargo3: Crew
		{
			file = "ivory_gt500\anim\cargo3.rtm";
		};
	};
};
