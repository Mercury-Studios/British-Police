class CfgPatches
{
	class MSBP_Vest_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgVehicles
{
	class Vest_Base_F;
	class MS_UKVest: Vest_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "UK Vest";
		author = "Silence/Zelo";
		vehicleClass = ItemsVests;
		model = "\MS_Vest\UKVest";  
		class TransportItems
		{
			class UKVest
			{
				name = UKVest;
				count = 1;
			};
		};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class H_HelmetB;
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	
	class MS_ARVUKVest: Vest_Camo_Base
	{
		scope=2;
		author="Silence/Zelo";
		displayName="[MS] Stab Vest (ARV)";
		picture="\VSM_Vests\Icons\VSM_Multicam.paa";
		model="\MS_Vest\ukvest";
		descriptionShort="A Unique Stab Vest";
		hiddenSelections[]=
		{
			"Vest",
			"Taser",
			"Radio",
			"Cuffs",
			"Axon"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_Vest\textures\ukvetslayout.jpg",
			"MS_Vest\textures\taseryellow.jpg",
			"MS_Vest\textures\radio.jpg",
			"MS_Vest\textures\cuffs.jpg",
			"MS_Vest\textures\axon.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MS_Vest\ukvest";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"Vest",
				"Taser",
				"Radio",
				"Cuffs",
				"Axon"
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
	class MS_ARVUKVestAlt: Vest_Camo_Base
	{
		scope=2;
		author="Silence/Zelo";
		displayName="[MS] Stab Vest (ARV/Alt)";
		picture="\VSM_Vests\Icons\VSM_Multicam.paa";
		model="\MS_Vest\ukvest";
		descriptionShort="A Unique Stab Vest";
		hiddenSelections[]=
		{
			"Vest",
			"Taser",
			"Radio",
			"Cuffs",
			"Axon"
		};
		hiddenSelectionsTextures[]=
		{
			"MS_Vest\textures\ukvetslayout.jpg",
			"",
			"MS_Vest\textures\radio.jpg",
			"MS_Vest\textures\cuffs.jpg",
			""
		};
		class ItemInfo: VestItem
		{
			uniformModel="\MS_Vest\ukvest";
			containerClass="Supply170";
			mass=50;
			passThrough=1;
			hiddenSelections[]=
			{
				"Vest",
				"Taser",
				"Radio",
				"Cuffs",
				"Axon"
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
};