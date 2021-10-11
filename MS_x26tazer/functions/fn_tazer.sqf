titleText ["x26 Init: True","PLAIN"];

mst_fnc_ppe = {
    params["_tazedman"];
    if (player == _tazedman) then
    {
     private _ppeCA = ppEffectCreate["ChromAberration", 200];
     private _ppeDB = ppEffectCreate["DynamicBlur", 400];


     _ppeCA ppEffectAdjust [.15, .15, true];
     _ppeDB ppEffectAdjust [10];

     _ppeCA ppEffectEnable true;
     _ppeDB ppEffectEnable true;

     [_ppeDB ,_ppeCA] ppEffectCommit 10;
     waitUntil {ppEffectCommitted _ppeCA};
     ppEffectDestroy _ppeCA;
     ppEffectDestroy _ppeDB;
    };
};


mst_fnc_taze = {
    params["_tazerman","_tazedman"];
    private _chance = selectRandom [1,2,3,4,5];
    if (_chance == 3) then {
        _tazedman forceWeaponFire [currentWeapon _tazedman, "FullAuto"];
    };
    //systemChat str _tazerman;
    //systemChat str _tazedman;
    if(!isNil "_tazedman") then
    {
        _tazedman setDamage 0;
        _tazedman addForce [[150,0,0],[0,0,3]];
        [_tazedman,["tasersfx",15,1]] remoteExec ["say3D",0,true];
        [_tazerman,["tasershot",10,1]] remoteExec ["say3D",0,true];
        _tazedman allowDamage false;
        sleep 1.5;
        _tazedman setUnconscious true;
        sleep 7.5;
        _tazedman setUnconscious false;
        _tazedman setDamage 0;
        _tazedman allowDamage true;
        sleep 1;
        [ _tazedman ] call ACE_medical_treatment_fnc_fullHealLocal;
    };
};

mst_fnc_addTazerToEH = {
    params["_unit"];
    _unit addMPEventHandler ["MPHit",{
        params ["_tazedman", "_causedBy", "_damage", "_tazerman"];
        _tazers = ["ms_tazer","ms_tazer_yellow", "ms_tazer_green"];
        _weapon = currentWeapon _tazerman;
        private _distancePlayer = _tazerman distance _tazedman;
        if (_weapon in _tazers && _distancePlayer <= 10) then
        {
            //systemChat str name _tazerman;
            //systemChat str name _tazedman;
            _tazerman setVariable ["tazerMan",_tazerman];
            _tazerman setVariable ["tazedMan",_tazedman];
            _tazerman addAction ["Send Surge",
            {
                params["_target","_caller","_tazeID"];

                _target removeAction _tazeID;
                _tazerman = _target getVariable "tazerMan";
                _tazedman = _target getVariable "tazedMan";
                [_tazerman,_tazedman] spawn mst_fnc_taze;
                sleep 0.2;
                _target setVariable ["tazerMan",nil];
                _target setVariable ["tazedMan",nil];
            },[],1,false,true,"","_target == _this"];

            [_tazedman] call mst_fnc_ppe;
            [_tazerman,_tazedman] spawn mst_fnc_taze;
        }
        else
        {
            _tazedman setDamage 0;
            _tazedman setHit ["legs", 1];
        };
    }];
};

{
	[_x] call mst_fnc_addTazerToEH;
} forEach allUnits;

addMissionEventHandler ["GroupCreated",
{
	params ["_group"];
    [_group] spawn
    {
        params ["_group"];
        sleep 1;
        {
            [_x] call mst_fnc_addTazerToEH;
        } foreach units _group;
    };
}];

// Thank you OpticCobra for rewriting this