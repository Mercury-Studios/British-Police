class CfgPatches
{
	class ivory_wrx
	{
		units[]={"ivory_wrx","ivory_wrx_marked","ivory_wrx_marked_norb","ivory_wrx_unmarked","ivory_wrx_unmarked_norb","ivory_wrx_slicktop","ivory_wrx_slicktop_norb","ivory_wrx_marked_classic","ivory_wrx_slicktop_classic"};
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
			class ivory_wrx {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};