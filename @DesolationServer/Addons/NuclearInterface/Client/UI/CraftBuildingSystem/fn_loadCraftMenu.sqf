disableserialization;
params["_display"];

_ctrl = (_display select 0) displayCtrl 1100;
_ctrl ctrlSetStructuredText parseText "<t>
    Manage your Player Progression here. <br/>
    Monitor your progression points, view your
    current skills and progression paths, and
    select new skills to learn<br/>
    Plan your choices wisely.  Decisions can 
    not be reversed, and will have a lasting 
    effect on your player.
</t>";

_listReciplest = (_display select 0) displayCtrl 1500;


_listReciplest lbAdd "====Items====";
_listReciplest lbSetColor [(lbSize _listReciplest)-1,[0.027,0.278,1,1]];
	
_i=0;
_g=0;
{
//diag_log format ["CFG_CRAFTABLE_DATA  _x= %1", _x];
	{
		_dataReciple = _x;
		_dataReciple pushBack "craft";
		_dataReciple pushBack _g;
		_dataReciple pushBack _i;
		//diag_log format ["CFG_CRAFTABLE_DATA item  _dataReciple= %1", _dataReciple];
		_listReciplest lbAdd (_x select 3);
		_listReciplest lbSetColor [(lbSize _listReciplest)-1,[1,1,1,1]];
		_listReciplest lbSetData [(lbSize _listReciplest)-1,str(_dataReciple)];	
		_i=_i+1;
	} forEach _x;
_g = _g + 1;
_i=0;
} forEach CFG_CRAFTABLE_DATA;



_listReciplest lbAdd "====Build====";
_listReciplest lbSetColor [(lbSize _listReciplest)-1,[0.027,0.278,1,1]];

_i=0;
_g=0;
{
//diag_log format ["CFG_BUILDABLE_DATA  _x= %1", _x];
	{
		_dataReciple = _x;
		_dataReciple pushBack "build";
		_dataReciple pushBack _g;
		_dataReciple pushBack _i;
		//diag_log format ["CFG_BUILDABLE_DATA item  _dataReciple= %1", _dataReciple];
		_listReciplest lbAdd (_x select 1);
		_listReciplest lbSetColor [(lbSize _listReciplest)-1,[1,1,1,1]];
		_listReciplest lbSetData [(lbSize _listReciplest)-1,str(_dataReciple)];	
		_i=_i+1;
	} forEach _x;
_g = _g + 1;
_i=0;
} forEach CFG_BUILDABLE_DATA;




//diag_log format ["CFG_BUILDABLE_GROUPS = %1", CFG_BUILDABLE_GROUPS];
//diag_log format ["CFG_CRAFTABLE_GROUPS = %1", CFG_CRAFTABLE_GROUPS];

/*
CFG_BUILDABLE_GROUPS // вроде как группы билдинга
CFG_BUILDABLE_DATA // вроде как данные о постройках

CFG_CRAFTABLE_GROUPS // группы крафта
CFG_CRAFTABLE_DATA // рецепты
*/