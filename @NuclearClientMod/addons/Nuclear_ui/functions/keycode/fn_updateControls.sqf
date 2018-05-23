private["_display", "_screenText", "_text", "_i", "_okayButton"];
disableSerialization;
_display = uiNameSpace getVariable ["NCR_KeyCode", displayNull];
_screenText = _display displayCtrl 4001;
if (ClientPinCode isEqualTo "") then 
{
	_text = "ENTER PIN";
}
else 
{

	_text = "";
	for "_i" from 1 to (count ClientPinCode) do 
	{
		_text = _text + "*";
	};

};
_screenText ctrlSetText _text;
_okayButton = _display displayCtrl 4000;
_okayButton ctrlEnable ((count ClientPinCode) isEqualTo ClientPinCodeLength);
true