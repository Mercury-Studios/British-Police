class CfgPatches
{
	class ivory_charger
	{
		units[]={"ivory_charger","ivory_charger_marked","ivory_charger_marked_norb","ivory_charger_unmarked","ivory_charger_unmarked_norb","ivory_charger_slicktop","ivory_charger_slicktop_norb","ivory_charger_marked_classic","ivory_rs4_slicktop_classic"};
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
			class ivory_charger {
				class Dependencies {
					Ivory_Data[]={"ivory_data", {2,1,2}, "true"};
				};
			};
		};
	};
};