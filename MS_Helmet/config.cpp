class CfgPatches
{
	class MSBP_Helmet_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgGlasses
{
	class None;
	class MS_Base: None
	{
		author = "Silence";
		scope = 2;
		weaponPoolAvailable = 1;
		picture = "\MS_PR\ms_logo.jpg";
		mass = 4;
	};
	class MS_TacMask: MS_Base
	{
		displayname = "[MS] Tac Mask";
		model = "\MS_Helmet\tacmask";
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
	class TacHelmet : H_HelmetB
	{
		author = "Mercury Studios - Silence";
		weaponPoolAvailable = 1;
		displayName = "[MS] Tac Helmet";
		picture = "\MS_PR\ms_logo.jpg";
		model = "\MS_Helmet\tachelmet";
		class ItemInfo: HeadgearItem
		{
			mass = 50;
			uniformModel = "\MS_Helmet\tachelmet";
			modelSides[] = { TCivilian, TWest };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 7;
					passThrough = 0.75;
				};
			};
		};
	};
	class SCO19Helmet : H_HelmetB
	{
		scope = 1;
		author = "Mercury Studios - Silence\Zelo";
		weaponPoolAvailable = 1;
		displayName = "[MS] SCO-19 Helmet";
		picture = "\MS_PR\ms_logo.jpg";
		model = "\MS_Helmet\scohelmet";
		class ItemInfo: HeadgearItem
		{
			mass = 50;
			uniformModel = "\MS_Helmet\scohelmet";
			modelSides[] = { TCivilian, TWest };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 7;
					passThrough = 0.75;
				};
			};
		};
	};
};