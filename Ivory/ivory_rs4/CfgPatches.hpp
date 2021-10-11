class CfgPatches
{
	class ivory_rs4
	{
		units[]={"ivory_rs4","ivory_rs4_marked","ivory_rs4_marked_norb","ivory_rs4_unmarked","ivory_rs4_unmarked_norb","ivory_rs4_slicktop","ivory_rs4_slicktop_norb","ivory_rs4_taxi","ivory_rs4_marked_classic","ivory_rs4_slicktop_classic","ivory_rs4_armed"};
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
			class ivory_rs4 {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};