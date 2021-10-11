class CfgPatches
{
	class ivory_isf
	{
		units[]={"ivory_isf","ivory_isf_marked","ivory_isf_marked_norb","ivory_isf_unmarked","ivory_isf_unmarked_norb","ivory_isf_slicktop","ivory_isf_slicktop_norb","ivory_isf_marked_classic","ivory_isf_slicktop_classic"};
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
			class ivory_isf {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};