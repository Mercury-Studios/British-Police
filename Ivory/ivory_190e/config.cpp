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

	class ivory_190e_base: Car_F
	{
		model 	= "\ivory_190e\ivory_190e";  /// simple path to model
		picture = "\ivory_190e\data\portrait_car_CA.paa";
		Icon	= "\ivory_190e\data\map_car_CA.paa";
		editorPreview = "\ivory_190e\data\ivory_190e.jpg";

		extCameraPosition[] = {0,1,-8};
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		displayName = "Mercedes-Benz 190E"; /// displayed in Editor
		supplyRadius = 2;
viewCargoShadow = 0;
viewDriverShadow = 0;
castCargoShadow = 0;
castDriverShadow = 0;
weapons[] = {};

		driverAction = "ivory_190e_driver";
		driverInAction = "ivory_190e_driver";
		cargoAction[] = {"ivory_190e_cargo","ivory_190e_cargo2","ivory_190e_cargo3"};
		cargoInAction[] = {"ivory_190e_cargo","ivory_190e_cargo2","ivory_190e_cargo3"};
		
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
			"license13"
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
			year="1991";
			manufacturer="Mercedes-Benz";
			model="190E";
			engineLayout="S4";
			country="Germany";
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
				armor = 0.01;
				passThrough = 1;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.01;
				passThrough = 1;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.01;
				passThrough = 1;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.01;
				passThrough = 1;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.01;
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

		hiddenSelectionsTextures[]={
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"ivory_190e\data\merc_evo2_wheel_diffuse_00.paa",
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
			class taxi: turn_left
			{
				displayName = "Add Taxi";
			};
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
	class ivory_190e: ivory_190e_base /// some class that is going to be visible in editor
	{
		author	= "Ivory";
		editorSubcategory="Ivory";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
	};
	class ivory_190e_taxi: ivory_190e_base /// some class that is going to be visible in editor
	{
		displayName = "Mercedes-Benz 190E (Taxi)";
		editorPreview = "\ivory_190e\data\ivory_190e_taxi.jpg";
		
		author	= "Ivory";
		editorSubcategory="IvoryTaxi";
		scope	= 2; 			/// makes the car visible in editor
		scopeCurator=2;			// scope 2 means it's available in Zeus mode (0 means hidden)
		crew 	= "C_man_1"; 	/// we need someone to fit into the car
		side	= 3; 			/// civilian car should be on civilian side
		faction	= CIV_F;		/// and with civilian faction
		
		texture="190e_taxi";
		
		class AnimationSources: AnimationSources
		{
			class taxi: taxi{initPhase = 1;};
		};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ivory_190e_driver = "ivory_190e_driver";
		ivory_190e_cargo = "ivory_190e_cargo";
		ivory_190e_cargo2 = "ivory_190e_cargo2";
		ivory_190e_cargo3 = "ivory_190e_cargo3";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class ivory_190e_driver: Crew
		{
			file = "ivory_190e\anim\driver.rtm";
		};
		class ivory_190e_cargo: Crew
		{
			file = "ivory_190e\anim\cargo.rtm";
		};
		class ivory_190e_cargo2: Crew
		{
			file = "ivory_190e\anim\cargo2.rtm";
		};
		class ivory_190e_cargo3: Crew
		{
			file = "ivory_190e\anim\cargo3.rtm";
		};
	};
};
class CfgIvoryTextures
{
	class 190e_taxi
	{
		displayName = "Taxi"; 
		texture = "ivory_190e\data\190e_taxi.paa"; 
	};
};