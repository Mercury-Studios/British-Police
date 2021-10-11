class CfgMagazines
{
	class Default;

	class CA_Magazine;

	class ms_tazerRound: CA_Magazine 
	{
		scope = 2; /// or 2, to be precise
		displayName = "X26 Tazer Mag";
		picture = "\MS_x26tazer\ms_logo.jpg"; /// just some icon
		ammo = "B_Test_Caseless";
		count = 2; /// 30 rounds is enough
		initSpeed = 800; /// standard muzzle speed
		tracersEvery = 0; /// disable tracers by default
		lastRoundsTracer = 1; /// tracers to track low ammo
		descriptionShort = "Used to taze people!"; /// on mouse-over in Inventory
		magazineGroup[]	= {"test_mag_group"}; /// all magazines in the same group may be used in weapon that has the group defined as compatible
	};
};
/*
	class 30Rnd_test_mag_Tracer: 30Rnd_test_mag /// a magazine full of tracer rounds
	{
		tracersEvery = 1; /// moar tracers
		lastRoundsTracer = 30; /// tracers everywhere
		displayName = "Test tracer magazine";
		descriptionShort = "Used to shoot test tracer bullets";
		displaynameshort = "Tracers";
		magazineGroup[]	= {"test_mag_group"};
	};
};
/*