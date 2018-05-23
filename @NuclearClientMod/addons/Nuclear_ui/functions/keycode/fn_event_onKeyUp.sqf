private["_stopPropagation", "_caller", "_keyCode", "_shiftState", "_controlState", "_altState"];
_stopPropagation = false;
_caller = _this select 0;
_keyCode = _this select 1;
_shiftState = _this select 2;
_controlState = _this select 3;
_altState = _this select 4; 
switch (_keyCode) do  
{ 
	case 0x52, case 0x0B: { 0 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x4F, case 0x02: { 1 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x50, case 0x03: { 2 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x51, case 0x04: { 3 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x4B, case 0x05: { 4 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x4C, case 0x06: { 5 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x4D, case 0x07: { 6 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x47, case 0x08: { 7 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x48, case 0x09: { 8 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x49, case 0x0A: { 9 call NCRUI_fnc_addDigit; _stopPropagation = true; };
	case 0x0E:
	{
		ClientPinCode = ClientPinCode select [0,(count ClientPinCode) -1];
		call NCRUI_fnc_updateControls;
		_stopPropagation = true;	
	};
	case 0x1C:
	{
		closeDialog 0;
		_stopPropagation = true;
	};
	case 0x9C:
	{
		closeDialog 0;
		_stopPropagation = true;
	};
	case 0x01: 
	{ 
		ClientPinCode = "";
		closeDialog 0;
		_stopPropagation = true; 
	};
	default {};
};
_stopPropagation