class CfgPatches
{
	class ivory_evox
	{
		units[]={"ivory_evox","ivory_evox_marked","ivory_evox_marked_norb","ivory_evox_unmarked","ivory_evox_unmarked_norb","ivory_evox_slicktop","ivory_evox_slicktop_norb","ivory_evox_marked_classic","ivory_evox_slicktop_classic"};
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