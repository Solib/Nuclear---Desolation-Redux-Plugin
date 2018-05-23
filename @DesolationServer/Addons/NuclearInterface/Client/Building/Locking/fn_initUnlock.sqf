disableSerialization;
_display = findDisplay 24010;

_ctrl = _display displayCtrl 4000;
_ctrl buttonSetAction "ClientPinCode call NCR_fnc_unlock";
//_ctrl ctrlSetText "Unlock";