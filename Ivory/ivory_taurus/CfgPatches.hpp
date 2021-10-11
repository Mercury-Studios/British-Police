class CfgPatches
{
	class ivory_taurus
	{
		units[]={"ivory_taurus","ivory_taurus_marked","ivory_taurus_marked_norb","ivory_taurus_unmarked","ivory_taurus_unmarked_norb","ivory_taurus_slicktop","ivory_taurus_slicktop_norb","ivory_taurus_marked_classic","ivory_taurus_slicktop_classic"};
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
			class ivory_taurus {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};