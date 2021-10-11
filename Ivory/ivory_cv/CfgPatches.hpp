class CfgPatches
{
	class ivory_cv
	{
		units[]={"ivory_cv","ivory_cv_marked","ivory_cv_marked_norb","ivory_cv_unmarked","ivory_cv_unmarked_norb","ivory_cv_slicktop","ivory_cv_slicktop_norb","ivory_cv_taxi","ivory_cv_unmarked_taxi","ivory_cv_marked_classic","ivory_cv_slicktop_classic"};
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
			class ivory_cv {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};