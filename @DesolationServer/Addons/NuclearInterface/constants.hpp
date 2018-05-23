#define CONST(var1,var2) var1 = compileFinal (if(typeName var2 == "STRING") then {var2} else {str(var2)})
#define CONSTVAR(var) var = compileFinal (if(typeName var == "STRING") then {var} else {str(var)})
#define FETCH_CONST(var) (call var)
#define steamid getPlayerUID player
#define GVAR getVariable
#define SVAR setVariable
#define EQUAL(condition1,condition2) condition1 isEqualTo condition2
#define ANIMSTATE animationState player
//display
#define CONTROL(disp,ctrl) ((findDisplay ##disp) displayCtrl ##ctrl)
#define CONTROL_DATA(ctrl) (lbData[ctrl,lbCurSel ctrl])
#define CONTROL_VALUE(ctrl) (lbValue[ctrl,lbCurSel ctrl])
#define CONTROL_DATAI(ctrl,index) ctrl lbData index
#define CONTROL_TEXTI(ctrl,index) ctrl lbText index
#define CONTROL_VALUEI(ctrl,index) ctrl lbValue index
//System Macros
#define grpPlayer group player
#define steamid getPlayerUID player

//unit equip
#define CURWEAPON currentWeapon player