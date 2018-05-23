#include "..\..\..\constants.hpp"
disableSerialization;
if (isNull (findDisplay 5663)) exitWith {
	//diag_log "findDisplay ERROR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!====!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
};

private _info = call compile format["%1", CONTROL_DATA(1500)];
if(isNil '_info')exitWith {};
_dataNeedItems = [];
_dataNameItem = [];
_dataPicItem = [];
_descrText = "";
_dataGroupID = _info select 8;
_dataItemID = _info select 9;

_temp = [];

//diag_log format ["SELECT_DATA item  _info= %1", _info];
//diag_log format ["SELECT_DATA item  _info name= %1", (_info select 1)];

_imageID = CONTROL(5663,1200);
_DescriptionID = CONTROL(5663,1100);
_buildID = CONTROL(5663,2400);
_craftID = CONTROL(5663,2401);

if((_info select 7)=="craft")then{
/*
_info select 0 - condition
_info select 1 - resultat
_info select 2 - need object(tools)
_info select 3 - name
_info select 4 - description
_info select 5 - pic
_info select 6 - canUse
_info select 7 - craft or build
_info select 8 - groupid
_info select 9 - itemid

*/
_dataNeedItems = _info select 0;
_dataNeedObj = _info select 2;
_dataNameItem = _info select 3;
_descrText = _info select 4;
_dataPicItem = _info select 5;


	_craftID ctrlShow true;
	_buildID ctrlShow false;
	_craftID buttonSetAction "call  NCR_fnc_onCraftClick";
	//onButtonClick = "if(DS_var_PageType == 0) then {call DS_fnc_onCraftClick;} else {call DS_fnc_onBuildClick;};false;";
		if(call compile (_info select 6))then{
			_craftID ctrlSetTextColor[0.3,1,0.3,1];
		}else{
			_craftID ctrlSetTextColor[1,0.3,0.3,1];
		};
        
    {
        _displayNameItem = getText(configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
        _temp = _temp + toArray (format["- %1 [%2] <br/>",_displayNameItem,(_x select 1)]);
    } forEach (_dataNeedItems);
    
    if(count(_dataNeedObj)>0)then{
        _temp = _temp + toArray (format["<br/><t size='1' color='#ccffff'> %1 </t> <br/><br/>","Оборудование"]);
        {
            //_displayNameItem = getText(configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
            _displayObjName = getText(configFile >> "CfgVehicles" >> _x >> "displayName");
            _temp = _temp + toArray (format[" %1 <br/>",_displayObjName]);
        } forEach (_dataNeedObj);
    };
    
}else{
/* BUILD
_info select 0 - condition
_info select 1 - name
_info select 2 - obj
_info select 3 - description
_info select 4 - pic
_info select 5 - canUse
_info select 6 - preview
_info select 7 - craft or build
_info select 8 - groupid
_info select 9 - itemid
*/
_dataNeedItems = _info select 0;
_dataNameItem = _info select 1;
_descrText = _info select 3;
_dataPicItem = _info select 4;

	_craftID ctrlShow false;
	_buildID ctrlShow true;
	_buildID buttonSetAction "call NCR_fnc_onBuildClick";
	
		if(call compile (_info select 5))then{
			_buildID ctrlSetTextColor[0.3,1,0.3,1];
		}else{
			_buildID ctrlSetTextColor[1,0.3,0.3,1];
		};
        
    {
        _displayNameItem = getText(configFile >> "CfgMagazines" >> (_x select 0) >> "displayName");
        _temp = _temp + toArray (format["- %1 [%2] <br/>",_displayNameItem,(_x select 1)]);
    } forEach (_dataNeedItems);
};



_descrCompile = format["<t size='1.2'>%1</t><br/><t size='0.8'>%2 <br/><br/> %3 </t>",_dataNameItem,_descrText,(toString _temp)];

_imageID ctrlSetText _dataPicItem;
_DescriptionID ctrlSetStructuredText parseText _descrCompile;

missionNamespace setVariable ["CURRENT_GROUP_INDEX",_dataGroupID];
missionNamespace setVariable ["CURRENT_INDEX",_dataItemID];