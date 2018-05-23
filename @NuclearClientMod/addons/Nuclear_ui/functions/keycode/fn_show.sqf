private["_display", "_ctrlButtonOK", "_ctrlButtonCancel", "_screenText", "_fakeButton"];
disableSerialization;
ClientPinCodeLength = _this;
ClientPinCode = "";
createDialog "NCR_KeyCode";
waitUntil
{
	!isNull (findDisplay 24010);
};
_display = uiNameSpace getVariable ["NCR_KeyCode", displayNull];
_ctrlButtonOK = _display displayCtrl 4000;
_ctrlButtonCancel = _display displayCtrl 4002;
_screenText = _display displayCtrl 4001;
_screenText ctrlSetText "ENTER PIN";
_fakeButton = _display displayCtrl 4013;
ctrlSetFocus _fakeButton;
_ctrlButtonOK ctrlSetEventHandler ["ButtonClick","call NCRUI_fnc_event_onOkayButtonClick"];
_ctrlButtonCancel ctrlSetEventHandler ["ButtonClick","call NCRUI_fnc_event_onAbortButtonClick"];
call NCRUI_fnc_updateControls;