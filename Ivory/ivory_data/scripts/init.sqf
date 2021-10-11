#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
    "ivory_setting_locnames",
    "CHECKBOX",
    ["Display Location Names","Display names of locations such as cities or villages upon entering."],
    "Ivory", 
    false, 
    nil, 
    {  
        params ["_value"];
        ivory_setting_locnames = _value;
    }
] call CBA_Settings_fnc_init;

[
    "ivory_setting_alertspeed",
    "SLIDER",
    ["Emergency - Radar Alert Speed","When the Radar is enabled, this is the speed at which data about vehicles will be recorded and will display the speed as red."],
    "Ivory", 
    [10, 300, 100, 0], 
    nil, 
    {  
        params ["_value"];
        ivory_setting_alertspeed = round(_value);
    }
] call CBA_Settings_fnc_init;

[
    "ivory_setting_alertsound",
    "CHECKBOX",
    ["Emergency - Alert Sound","When the Radar is enabled, an alert sound is played whenever the target vehicle is going above the 'Radar Alert Speed' value."],
    "Ivory", 
    true, 
    nil, 
    {  
        params ["_value"];
        ivory_setting_alertsound = _value;
    }
] call CBA_Settings_fnc_init;


["Ivory", "ivory_horn", ["Car Horn", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player) then {
      _this setVariable ["ani_horn",1,true];
   };
}, {
    _this = vehicle player;
    _this setVariable ["ani_horn",0,true];
}, [DIK_F, [false, false, false]], true] call CBA_fnc_addKeybind;

["Ivory", "ivory_navigation", ["Navigation", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if((driver _this == player || (_this) getCargoIndex (player) == 0)) then {

    openMap false;

    if(isNil "ivory_eh_gps") then {
        ivory_eh_gps = [] execVM "ivory_data\A3GPS\init.sqf";
    };
     if(isNil "gps_core_init_done") exitWith {
       "Navigation is now starting up. This usually takes 10 seconds. Please press your navigation key again in a few moments." spawn ivory_fnc_showNotification;
     };
     if(!gps_core_init_done) exitWith {
       "Navigation is still starting up. Try again in a few moments." spawn ivory_fnc_showNotification;
     };

     [] spawn ivory_gps_menu_fnc_loadNavMenu;

   };
}, {}, [DIK_BACKSLASH, [false, false, false]]] call CBA_fnc_addKeybind;


["Ivory", "ivory_indicator_left", ["Left Indicator", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(Alive(_this) AND driver _this == player) then {
       if(_this animationSourcePhase "turn_left" < 0.5) then {
         _this animateSource ["turn_left",1];

          /*(ivory_indicatorl = true;
          if!(ivory_indicatorr) then {
            [_this,player] spawn ivory_fnc_indicator;
          };*/

       } else {
          //ivory_indicatorl = false;
         _this animateSource ["turn_left",0];
       };
   };
}, {}, [DIK_Q, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_indicator_right", ["Right Indicator", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(Alive(_this) AND driver _this == player) then {
       if(_this animationSourcePhase "turn_right" < 0.5) then {
         _this animateSource ["turn_right",1];

          /*ivory_indicatorr = true;
          if!(ivory_indicatorl) then {
            [_this,player] spawn ivory_fnc_indicator;
          };*/
          
       } else {
          //ivory_indicatorr = false;
         _this animateSource ["turn_right",0];
       };
   };
}, {}, [DIK_E, [false, false, false]]] call CBA_fnc_addKeybind;


["Ivory", "ivory_highbeams", ["High Beams", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(Alive(_this) AND driver _this == player) then {


      if((_this animationPhase "light_lh" == 0 || _this animationPhase "light_rh" == 0) || !isLightOn _this) then {

        player action["lightOn", _this];

        _this animate["light_lh",1];
        _this animate["light_rh",1];

      } else {

        _this animate["light_lh",0];
        _this animate["light_rh",0];

      };
   };
}, {}, [DIK_F, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_cruise_control", ["Cruise Control", ""], {
  [] spawn {
      _this = vehicle player;
      if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};

      if(driver _this != player) exitWith {};

      _cruiseControl = _this getVariable["ivory_cc",0]; 

      if(_cruiseControl == 1) exitWith {_this setVariable ["ivory_cc",0];};

      _speed = speed _this;


      format["Cruise control has been engaged."] spawn ivory_fnc_showNotification;

      _this setVariable ["ivory_cc",1];
      _damage = damage _this;
      _currentDir = getDir _this;

      ivory_eh_cc = _this addEventHandler ["epeContact", { _this spawn ivory_fnc_epeContact; }];

      [_this] spawn {
        params["_this"];

        while{_this getVariable "ivory_cc" == 1} do {

          _dir1 = sin (getDir _this);

          sleep 1;

          _dir2 = sin (getDir _this);

          if(abs(_dir1-_dir2)>0.45) exitWith{
              _this setVariable ["ivory_cc",0];
          };
        };

      };

      while {true} do {


        if (isNil {_this}) then { _this setVariable ["ivory_cc",0];};
        if (driver _this != player) then {_this setVariable ["ivory_cc",0];};
        if ((getpos _this select 2) > 0.35) then {_this setVariable ["ivory_cc",0];};
        if !(istouchingground _this) then {_this setVariable ["ivory_cc",0];};

        if (_this getVariable "ivory_cc" == 0) exitWith { format["Cruise control has been disengaged."] spawn ivory_fnc_showNotification; _this setVariable ["ivory_cc",0];};

        if (_speed < 10 || speed _this < 10) exitWith { format["Moving too slow for cruise control."] spawn ivory_fnc_showNotification; _this setVariable ["ivory_cc",0]; };

        if (damage _this > 0.5) exitWith { format["Vehicle is too damaged to continue on cruise control."] spawn ivory_fnc_showNotification; _this setVariable ["ivory_cc",0]; };


        _dir = getDir _this;
        _x = (sin _dir)*(_speed/3.6);
        _y = (cos _dir)*(_speed/3.6);
        _this setVelocity [(_x), (_y), ((velocity _this) select 2)];
        sleep 0.5;

      };
      
      _this removeEventHandler ["epeContact", ivory_eh_cc];
 
  };

}, {}, [DIK_C, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_spoiler", ["Spoiler Control", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(driver _this != player) exitWith {};
   if(dialog) exitWith {};

    _autoSpoiler = getNumber(configFile >> "cfgVehicles" >> typeOf _this >> "autoSpoiler");
    if(_autoSpoiler != 1) exitWith {};


    if(_this getVariable "ani_spoiler" == 1) exitWith { // Manual Raise Spoiler
      
      _this setVariable ["ani_spoiler", 0, true];
      _this animateSource ["spoiler",1];
      "Spoiler is now manaully raised." spawn ivory_fnc_shownotification;

    };

    if(_this getVariable "ani_spoiler" == 0 && _this animationSourcePhase "spoiler" == 1) exitWith {

      _this animateSource ["spoiler",0];
      "Spoiler is now manaully lowered." spawn ivory_fnc_shownotification;

    };
    
    if(_this getVariable "ani_spoiler" == 0 && _this animationSourcePhase "spoiler" == 0) exitWith {

      _this animateSource ["spoiler",0];
      _this setVariable ["ani_spoiler", 1, true];
      "Spoiler is now automatic." spawn ivory_fnc_shownotification;

    };


}, {}, [DIK_U, [false, false, false]]] call CBA_fnc_addKeybind;


["Ivory", "ivory_sirens", ["Emergency - Sirens", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
    playSound "ivory_beep2";
     if(_this getVariable 'ani_siren' == 0) then {
        _this setVariable ['ani_lightbar', (_this getVariable "ani_lightbar_todo"), true]; 
        _this setVariable ['ani_siren', (_this getVariable "ani_siren_todo"), true];
      } else {
        _this setVariable ['ani_siren', 0, true];
      };

   };
}, {}, [DIK_R, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_sirens_next", ["Emergency - Sirens (Next)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
      playSound "ivory_beep2";

     if((_this getVariable "ani_siren_todo") == 1) exitWith { 
       _this setVariable ["ani_siren_todo",2];
      format["Switched to siren phase 2 (Yelp)."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_siren" > 0) then {
              _this setVariable ["ani_siren",2,true];
          };
       };

     if((_this getVariable "ani_siren_todo") == 2) exitWith { 
       _this setVariable ["ani_siren_todo",3];
      format["Switched to siren phase 3 (Priority)."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_siren" > 0) then {
              _this setVariable ["ani_siren",3,true];
          };
       };
     if((_this getVariable "ani_siren_todo") == 3) exitWith { 
       _this setVariable ["ani_siren_todo",4];
      format["Switched to siren phase 4 (HiLo)."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_siren" > 0) then {
              _this setVariable ["ani_siren",4,true];
          };
       };
     if((_this getVariable "ani_siren_todo") == 4) exitWith { 
       _this setVariable ["ani_siren_todo",1];
      format["Switched to siren phase 1 (Wail)."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_siren" > 0) then {
              _this setVariable ["ani_siren",1,true];
          };
       };

   };
}, {}, [DIK_R, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_sirens_phase_1", ["Emergency - Sirens (Wail)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        
        if(_this getVariable "ani_siren" > 0) then {
          _this setVariable ["ani_siren",1,true];
          playSound "ivory_beep2";
        };
        format["Switched to siren phase 1 (Wail)."] spawn ivory_fnc_showNotification;
        _this setVariable ["ani_siren_todo",1];

   };
}, {}, [DIK_1, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_sirens_phase_2", ["Emergency - Sirens (Yelp)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
         
        if(_this getVariable "ani_siren" > 0) then {
          _this setVariable ["ani_siren",2,true];
          playSound "ivory_beep2";
        };
        format["Switched to siren phase 2 (Yelp)."] spawn ivory_fnc_showNotification;
        _this setVariable ["ani_siren_todo",2];
   };
}, {}, [DIK_2, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_sirens_phase_3", ["Emergency - Sirens (Priority)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {

        if(_this getVariable "ani_siren" > 0) then {
          _this setVariable ["ani_siren",3,true];
          playSound "ivory_beep2";
        };
        format["Switched to siren phase 3 (Priority)."] spawn ivory_fnc_showNotification;
        _this setVariable ["ani_siren_todo",3];

   };
}, {}, [DIK_3, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_sirens_phase_4", ["Emergency - Sirens (HiLo)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        if(_this getVariable "ani_siren" > 0) then {
          _this setVariable ["ani_siren",4,true];
          playSound "ivory_beep2";
        };
        format["Switched to siren phase 4 (HiLo)."] spawn ivory_fnc_showNotification;
        _this setVariable ["ani_siren_todo",4];

   };
}, {}, [DIK_4, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights", ["Emergency - Lights", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
      
     if(_this getVariable 'ani_lightbar' == 0) then {
        _this setVariable ['ani_lightbar', (_this getVariable "ani_lightbar_todo"), true]; 
        playSound "ivory_beep2";
      } else {
        _this setVariable ['ani_lightbar', 0, true]; 
        _this setVariable ['ani_siren', 0, true]; 
        playSound "ivory_beep2";
      };

   };
}, {}, [DIK_T, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_next", ["Emergency - Lights (Next)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {

     if((_this getVariable "ani_lightbar_todo") == 1) exitWith { 
       _this setVariable ["ani_lightbar_todo",2]; 
      format["Switched to lightbar phase 2."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",2,true];
              playSound "ivory_beep2";
          };
       };

     if((_this getVariable "ani_lightbar_todo") == 2) exitWith { 
       _this setVariable ["ani_lightbar_todo",3]; 
      format["Switched to lightbar phase 3."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",3,true];
              playSound "ivory_beep2";
          };
       };
     if((_this getVariable "ani_lightbar_todo") == 3) exitWith { 
       _this setVariable ["ani_lightbar_todo",4]; 
      format["Switched to lightbar phase 4."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",4,true];
              playSound "ivory_beep2";
          };
       };
     if((_this getVariable "ani_lightbar_todo") == 4) exitWith { 
       _this setVariable ["ani_lightbar_todo",5]; 
      format["Switched to lightbar phase 5."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",5,true];
              playSound "ivory_beep2";
          };
       };
     if((_this getVariable "ani_lightbar_todo") == 5) exitWith { 
       _this setVariable ["ani_lightbar_todo",1]; 
      format["Switched to lightbar phase 1."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",1,true];
              playSound "ivory_beep2";
          };
       };

   };
}, {}, [DIK_T, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_phase_1", ["Emergency - Lights (Phase 1)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        format["Switched to lightbar phase 1."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",1,true];
              playSound "ivory_beep2";
          };
        _this setVariable ["ani_lightbar_todo",1]; 

   };
}, {}, [DIK_1, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_phase_2", ["Emergency - Lights (Phase 2)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        format["Switched to lightbar phase 2."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",2,true];
              playSound "ivory_beep2";
          };
        _this setVariable ["ani_lightbar_todo",2]; 


   };
}, {}, [DIK_2, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_phase_3", ["Emergency - Lights (Phase 3)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        format["Switched to lightbar phase 3."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",3,true];
              playSound "ivory_beep2";
          };
        _this setVariable ["ani_lightbar_todo",3]; 


   };
}, {}, [DIK_3, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_phase_4", ["Emergency - Lights (Phase 4)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        format["Switched to lightbar phase 4."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",4,true];
              playSound "ivory_beep2";
          };
        _this setVariable ["ani_lightbar_todo",4]; 


   };
}, {}, [DIK_4, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_lights_phase_5", ["Emergency - Lights (Phase 5)", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && ((_this animationPhase 'lbSystem_top' > 0) OR (_this animationPhase 'lbSystem_front' > 0) OR (_this animationPhase 'lbSystem_back' > 0))) then {
        format["Switched to lightbar phase 5."] spawn ivory_fnc_showNotification;
          if(_this getVariable "ani_lightbar" > 0) then {
              _this setVariable ["ani_lightbar",5,true];
              playSound "ivory_beep2";
          };
        _this setVariable ["ani_lightbar_todo",5]; 


   };
}, {}, [DIK_5, [false, true, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_takedown", ["Emergency - Takedown", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player) then {
      _this setVariable ["ani_takedown",1,true];
   };
}, {
    _this = vehicle player;
    _this setVariable ["ani_takedown",0,true];
}, [DIK_C, [false, false, false]], true] call CBA_fnc_addKeybind;

/*
["Ivory","ivory_megaphone",["Emergency - Megaphone","Emergency - Megaphone"],{
    _this = vehicle player;

   if((typeOf _this find "ivory") < 0) exitWith {};
   if(driver _this != player) exitWith {};
   if(dialog) exitWith {};
   _emergencySiren = getNumber(configFile >> "cfgVehicles" >> typeOf _this >> "emergencySiren");
   if(_emergencySiren == 0) exitWith {};
   
   if(isNil "TFAR_fnc_haveSWRadio") exitWith {"You must have TaskForceRadio to use the megaphone." spawn ivory_fnc_shownotification;};
   if!(call TFAR_fnc_haveSWRadio) exitWith {"You must have a radio in order to use the megaphone." spawn ivory_fnc_shownotification;};

    _randomFreq = round(random [100000,500000,999999]);

    ivory_current_spkmet = TF_speak_volume_meters;

    TF_speak_volume_meters = 5;
    ["OnSpeakVolume", player, [player, TF_speak_volume_meters]] call TFAR_fnc_fireEventHandlers;

    ivoryTempRadioHolder = "groundWeaponHolder" createVehicle getpos _this; 
    ivoryTempRadioHolder AddBackpackCargoGlobal ["tf_rt1523g_big",1];
    ivoryTempRadioHolder attachTo[_this,[0,0,4]];
    ivoryTempRadioHolder setVariable ["ivory_megaphone", true, true];
    //[ivoryTempRadioHolder,true] remoteExec["hideObjectGlobal",2];

    ivoryTempRadio = firstBackpack ivoryTempRadioHolder;
    ivoryTempRadio setVariable ["ivory_megaphone", true, true];
    ivoryTempRadio setVariable ["ivory_megaphone_owner", true];
    [ivoryTempRadio, "radio_settings", 9] call TFAR_fnc_setLrVolume;
    
    ivory_current_swradio = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwFrequency;

    _channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
    _channel = _channel + 1;
    [(call TFAR_fnc_activeSwRadio), _channel, _randomFreq] call TFAR_fnc_SetChannelFrequency;
    [[ivoryTempRadio,"radio_settings"], _channel, _randomFreq] call TFAR_fnc_SetChannelFrequency;

    call ivory_fnc_onMegaPhonePressed;

  },{
      _this = vehicle player;

    if((typeOf _this find "ivory") < 0) exitWith {};
    if(driver _this != player) exitWith {};
    if(dialog) exitWith {};
    _emergencySiren = getNumber(configFile >> "cfgVehicles" >> typeOf _this >> "emergencySiren");
    if(_emergencySiren == 0) exitWith {};
    
    if(isNil "TFAR_fnc_haveSWRadio") exitWith {"You must have TaskForceRadio to use the megaphone." spawn ivory_fnc_shownotification;};
    if!(call TFAR_fnc_haveSWRadio) exitWith {"You must have a radio in order to use the megaphone." spawn ivory_fnc_shownotification;};

    _channel = (call TFAR_fnc_ActiveSwRadio) call TFAR_fnc_getSwChannel;
    _channel = _channel + 1;
    [(call TFAR_fnc_activeSwRadio), _channel, ivory_current_swradio] call TFAR_fnc_SetChannelFrequency;

    TF_speak_volume_meters = ivory_current_spkmet;
    ["OnSpeakVolume", player, [player, TF_speak_volume_meters]] call TFAR_fnc_fireEventHandlers;

    ivory_current_spkmet = nil;

    deleteVehicle ivoryTempRadioHolder;

    call ivory_fnc_onMegaPhoneReleased;


  }, [DIK_TAB, [false, false, false]],false] call CBA_fnc_addKeybind;
*/
["Ivory", "ivory_vehicledata", ["Emergency - Scan Vehicle", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if((driver _this == player || (_this) getCargoIndex (player) == 0) && _this animationPhase 'lbSystem_radar' > 0) then {
      [cursorObject] spawn ivory_fnc_vehicleData;
   };
}, {}, [DIK_G, [false, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_policecomputer", ["Emergency - Police Computer", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if((driver _this == player || (_this) getCargoIndex (player) == 0) && _this animationPhase 'lbSystem_radar' > 0) then {
      if(isNull (findDisplay 9154)) then {
        [] spawn ivory_fnc_policeComputer;
      } else {
        closeDialog 0;
      };
   };
}, {}, [DIK_G, [true, false, false]]] call CBA_fnc_addKeybind;


["Ivory", "ivory_radar", ["Emergency - Radar", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(Alive(_this) && (driver _this == player || (_this) getCargoIndex (player) == 0) && (_this animationPhase 'lbSystem_radar' != 0)) then {


       if(_this getVariable ['radarRunning',0] == 0) then {

         _this spawn ivory_fnc_radar;
         _this setVariable ['ani_radar', 1, true]; 
         _this setVariable ['radarRunning', 1]; 
         _this animate['computerScreen',1];

       } else {

        _this setVariable ['ani_radar', 0, true];  
        _this setVariable ['radarRunning', 0];  
        format['Radar has been turned off.'] spawn ivory_fnc_shownotification;

       };
   };
}, {}, [DIK_Y, [false, false, false]]] call CBA_fnc_addKeybind;



["Ivory", "ivory_spotlight", ["Emergency - Spotlight", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && _this animationPhase 'lbSystem_spotlight' > 0) then {
     if(_this animationPhase 'spotlight_light' == 0) then {
				player action ["lightOn",  _this];
        _this animate["spotlight_light",1];
      } else {
        _this animate["spotlight_light",0];
      };
   };
}, {}, [DIK_F, [true, false, false]]] call CBA_fnc_addKeybind;

["Ivory", "ivory_spotlight_l", ["Emergency - Spotlight Left", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && _this animationPhase 'lbSystem_spotlight' > 0 && _this animationPhase 'spotlight_light' > 0) then {
     _currentState = _this animationPhase "spotlight_head";
     if(_currentState <= -1) exitWith {};
      _this animate["spotlight_head",_currentState - 0.05];
   };
}, {}, [DIK_Q, [true, false, false]],true] call CBA_fnc_addKeybind;

["Ivory", "ivory_spotlight_r", ["Emergency - Spotlight Right", ""], {
    _this = vehicle player;
   if((typeOf _this find "ivory") < 0) exitWith {};
   if(dialog) exitWith {};
   if(driver _this == player && _this animationPhase 'lbSystem_spotlight' > 0 && _this animationPhase 'spotlight_light' > 0) then {
     _currentState = _this animationPhase "spotlight_head";
     if(_currentState >= 1) exitWith {};
      _this animate["spotlight_head",_currentState + 0.05];
   };
}, {}, [DIK_E, [true, false, false]],true] call CBA_fnc_addKeybind;