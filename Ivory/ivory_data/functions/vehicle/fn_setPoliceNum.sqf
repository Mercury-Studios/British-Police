_car = param [0, objNull, [objNull]];
_license = param [1, "", [""]];

_license = toLower(_license);
_licenseArray = _license splitString "";
_license1 = "";
_license2 = "";
_license3 = "";
_license4 = "";

if(count _licenseArray > 0) then {

	_license1 = _licenseArray select 0;

};
if(count _licenseArray > 1) then {

	_license2 = _licenseArray select 1;

};
if(count _licenseArray > 2) then {

	_license3 = _licenseArray select 2;

};
if(count _licenseArray > 3) then {

	_license4 = _licenseArray select 3;

};

_car setObjectTextureGlobal [10, format["ivory_data\license\%1.paa", _license1]];
_car setObjectTextureGlobal [12, format["ivory_data\license\%1.paa", _license2]];
_car setObjectTextureGlobal [14, format["ivory_data\license\%1.paa", _license3]];
_car setObjectTextureGlobal [16, format["ivory_data\license\%1.paa", _license4]];