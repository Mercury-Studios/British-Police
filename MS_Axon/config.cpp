class CfgPatches
{
	class MSBP_Axon_Config
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class cfgGlasses
{
	class None;
	class MS_Base: None
	{
		author = "Silence";
		scope = 0;
		weaponPoolAvailable = 1;
		picture = "\MS_PR\ms_logo.jpg";
		mass = 4;
	}
	class MS_Axon: MS_Base
	{
		displayname = "[MS] Axon Body Camera";
		model = "\MS_Axon\axoncamerawearable";
	};
	class MS_Headcam: MS_Base
	{
		displayname = "[MS] Helmet Camera";
		model = "\MS_Axon\helmetcam";
	};
};

class cfgVehicles
{
    class Headgear_Base_F;
    class AXON_Prop: Headgear_Base_F
    {
        scope = 1;
        scopeCurator = 1;
        displayName = "Axon Body Camera";
        author = "Silence";
        vehicleClass = ItemsHeadgear;
        model = "\MS_Axon\axoncamera";        // Omit this, if the headgear is a helmet.
        class TransportItems
        {
            class AXON_PropCamera
            {
                name = AXON_PropCamera;
                count = 1;
            };
        };
    };
    class Baton_Prop: Headgear_Base_F
    {
        scope = 2;
        scopeCurator = 2;
        displayName = "Baton";
        author = "Silence/Zelo";
        vehicleClass = ItemsHeadgear;
        model = "\MS_Axon\ukbaton";        // Omit this, if the headgear is a helmet.
        class TransportItems
        {
            class Prop_Baton
            {
                name = Prop_Baton;
                count = 1;
            };
        };
    };
};