private ["_text"];
_text = param [0, "", [""]];

if(!(isNull findDisplay 9154)) then {
    closeDialog 9154;
};
sleep 0.1;
createDialog "IvoryManual";
_computer = (findDisplay 9154) displayCtrl 4110;
_computer ctrlSetStructuredText parseText format["<br/>%1",_text];
_computer ctrlCommit 0;

_textHeight = ctrltextheight _computer;
if(_textHeight > 1) then {
    _controlPos = ctrlposition _computer;
    _controlPos set [3,_textHeight];
    _computer ctrlsetposition _controlPos;
    _computer ctrlcommit 0;
};