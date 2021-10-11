class CfgPatches
{
	class ivory_m3
	{
		units[]={"ivory_m3","ivory_m3_marked","ivory_m3_marked_norb","ivory_m3_unmarked","ivory_m3_unmarked_norb","ivory_m3_slicktop","ivory_m3_slicktop_norb","ivory_m3_marked_classic","ivory_m3_slicktop_classic", "ivory_m3_armedARV"};
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
			class ivory_m3 {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};