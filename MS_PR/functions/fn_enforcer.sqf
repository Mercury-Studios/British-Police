fnc = {
  if (swingCount == 1) then {p = getPosATL fat, pl = p select 0; p1 = p select 1, ps = p select 2; fat setPos [pl,p1,ps]};
};

fncpull = {
    fat setPosATL p;
};

fat = this;
isUsingEnforcer = false;
enforcerUsed = false;
timesUsed = 1;
swingCount = 1;
isPulledBack = false;

player addAction ["Deploy Enforcer", {
wpn = primaryWeapon player;
if (wpn == "MS_Enforcer") then {
fat = "bottle" createVehicle position player;
fat setPos (player modelToWorld [0,0,1.2]);
dir = vectorDir player;
up = vectorUp player;
fat setVectorDir dir;
fat setVectorUp up;
fat enableSimulation false;
fat allowDamage false;
player removeWeapon wpn;
act = player addAction ["Swing Enforcer",{
    if (isPulledBack) then {
        isPulledBack = false;
        if (timesUsed >= 3) then {
            fat say3D "doorDestroy";
            swingCount = 1;
            building = nearestObjects [player, ["Building"], 30] select 0;
            _class = configFile >> "CfgVehicles" >> typeOf building; 
            _num = getNumber (_class >> "numberofdoors");
            hint str _num;
            for "_i" from 1 to _num do { 
            var = format ["bis_disabled_Door%1", 0, i];
            if (var distance player < 3) then {
                    anim = format ["Door%1_rot", _i];
                    building animate[anim, 1]; 
                    building setVariable[var,1,true];
                    timesUsed = 1;
                    player removeAction act;
                    player removeAction act2;
                };
            };
         } else {
            isUsingEnforcer = true,
            fat say3D "doorDestroy";
            while {isUsingEnforcer} do {call fnc, sleep 0.1; call fnc, sleep 0.1, call fnc, sleep 0.1, call fnc; call fncpull; swingCount = 2; timesUsed = timesUsed + 1; swingCount = 1;
            waitUntil {timesUsed >= 2}; waitUntil {enforcerUsed}; isUsingEnforcer = false, sleep 0.2};
        };
    } else {
        hint "You Need To Pull The Enforcer Back!";
    };
}];