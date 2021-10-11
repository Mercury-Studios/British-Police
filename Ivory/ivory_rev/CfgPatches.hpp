class CfgPatches
{
	class ivory_rev
	{
		units[]={"ivory_rev","ivory_rev_marked","ivory_rev_marked_norb","ivory_rev_unmarked","ivory_rev_unmarked_norb","ivory_rev_slicktop","ivory_rev_slicktop_norb","ivory_rev_marked_classic","ivory_rev_slicktop_classic"};
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
			class ivory_rev {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};