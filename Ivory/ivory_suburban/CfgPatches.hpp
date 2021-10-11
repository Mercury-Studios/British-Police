class CfgPatches
{
	class ivory_suburban
	{
		units[]={"ivory_suburban","ivory_suburban_marked","ivory_suburban_marked_norb","ivory_suburban_unmarked","ivory_suburban_unmarked_norb","ivory_suburban_slicktop","ivory_suburban_slicktop_norb","ivory_suburban_ems","ivory_suburban_ems_slicktop","ivory_suburban_marked_classic","ivory_suburban_slicktop_classic"};
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
			class ivory_suburban {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};