private["_digit", "_display", "_fakeButton"];
_digit = _this;
if ((count ClientPinCode) < ClientPinCodeLength) then
{
	ClientPinCode = ClientPinCode + (str _digit);
};
_display = uiNameSpace getVariable ["NCR_KeyCode", displayNull];
_fakeButton = _display displayCtrl 4013;
ctrlSetFocus _fakeButton;
call NCRUI_fnc_updateControls;