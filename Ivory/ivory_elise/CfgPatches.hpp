class CfgPatches
{
	class ivory_elise
	{
		units[]={"ivory_elise"};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]	= {"A3_Soft_F","ivory_data","CBA_Main","cba_settings"};
		version = 2.1.2;
		versionStr = "2.1.2";
		versionAr[] = {2,1,2};
	};
};
class CfgSettings {
	class CBA {
		class Versioning {
			class ivory_elise {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};