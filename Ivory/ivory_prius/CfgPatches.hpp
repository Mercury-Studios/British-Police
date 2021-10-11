class CfgPatches
{
	class ivory_evox
	{
		units[]={"ivory_prius","ivory_prius_marked","ivory_prius_marked_norb","ivory_prius_unmarked","ivory_prius_unmarked_norb","ivory_prius_slicktop","ivory_prius_slicktop_norb","ivory_prius_taxi","ivory_prius_marked_classic","ivory_prius_slicktop_classic"};
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
			class Ivory_evox {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};