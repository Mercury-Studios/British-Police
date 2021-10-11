private ["_text"];
_text = param [0, "", [""]];

0 cutRsc ["IvoryNotification", "PLAIN"];
_display = (uiNamespace getVariable "IvoryNotification") displayCtrl 4111;

_display ctrlSetStructuredText parseText format["<t align='center' font='RobotoCondensedBold' color='#4EB1BA'>Notification</t><br/><t align='center' color='#E9E9E9'>%1</t>",_text];
_display ctrlCommit 0;
