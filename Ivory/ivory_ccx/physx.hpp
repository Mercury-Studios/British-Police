		/// splendid tutorial by RedPhoenix could be found at
		/// http://forums.bistudio.com/showthread.php?165390-Tutorial-Creating-Custom-Engine-Gearbox-and-Suspension-Vehicle-configuration

		thrustDelay = 0;
		engineStartSpeed = 2;
		brakeIdleSpeed = 1.78;
		maxSpeed = 407;
		fuelCapacity = 20;
		wheelCircumference = 2.277;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		idleRpm = 1000;
		redRpm = 7600;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4.16,"N",0,"D1",3.18,"D2",2.26,"D3",1.68,"D4",1.29,"D5",1.06,"D6",0.88,"D7",0.80}; // 
			TransmissionRatios[] = {"High",2.5};
			gearBoxMode = "full-auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		simulation = "carx";
		dampersBumpCoef = 0.025;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 2.5;
		rearBias = 2.5;
		centreBias = 2.5;
		clutchStrength = 5;
		maxOmega = 795.87;
		enginePower = 895;
		peakTorque = 1499;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 0.05;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		slowSpeedForwardCoef = 1;
		normalSpeedForwardCoef = 1;
		torqueCurve[] = {
			{0 , 0},
			{0.14 , 0.54},
			{0.29 , 0.73},
			{0.43 , 0.89},
			{0.57 , 0.95},
			{0.71 , 0.95},
			{0.86 , 0.93},
			{1 , 0.86}
		};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.87, 0.87, 0.87, 0.87, 0.87, 0.87, 0.87};
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 20;
				MOI = 2;  		
				dampingRate = 0.5;
				dampingRateDamaged = 5;
				dampingRateDestroyed = 5000;
				maxBrakeTorque = 3000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				maxDroop = 0.1;
				sprungMass = 500;
				springStrength = 90000;
				springDamperRate = 5990;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 18;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{ 0,1 },{ 0.5,1 },{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				latStiffX = 18;
				latStiffY = 180;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 4000;
				latStiffX = 18;
				latStiffY = 18000;
			};
		};