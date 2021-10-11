class CfgPatches
{
	class ivory_challenger
	{
		units[]={"ivory_challenger","ivory_challenger_marked","ivory_challenger_marked_norb","ivory_challenger_unmarked","ivory_challenger_unmarked_norb","ivory_challenger_slicktop","ivory_challenger_slicktop_norb","ivory_challenger_marked_classic","ivory_challenger_slicktop_classic"};
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
			class ivory_challenger {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};