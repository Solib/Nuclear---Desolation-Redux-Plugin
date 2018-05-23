
//disableSerialization;
//_display = findDisplay 4003;

_code = _this;
/*for "_i" from 0 to 4 do {
	_ctrl = _display displayCtrl (2100+_i);
	_index = lbCurSel _ctrl;
	if(_index == -1) then {
		_code pushBack -1;
	} else {
		_code pushBack parseNumber(_ctrl lbText _index);
	};
};*/

//diag_log format ["<CODELOKER>: (Debug) _code = %1", _code];


_object = cursorObject;
if(isNull _object) then {
	_object = cursorTarget;
};

_lock = _object getVariable ["APMS_UnlockCode",[]];
_door_code = _lock joinString "";

if(_code isEqualTo _door_code) then {
	for "_i" from 1 to 5 do {
		_object setVariable ["bis_disabled_Door_" + str(_i),1,true]; // disable door access
	};

	_object lock true;
	Systemchat "Locked";
} else {
	Systemchat "Wrong Code!";
};

//closeDialog 0;
