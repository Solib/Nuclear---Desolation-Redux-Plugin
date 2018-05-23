/*
Nuclear Interface Plugin
autor: Solib
twitch: https://www.twitch.tv/solib
Created for Nuclear RolePlay Sandbox server
*/

class CfgPatches
{
	class nuclear_ui
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Map_Malden","A3_Data_F","A3_Ui_F","A3_Functions_F","A3_UiFonts_F","A3_Map_Stratis","A3_Map_Altis","A3_Map_VR","A3_Map_Stratis_Scenes","A3_Map_VR_Scenes","A3_Map_Altis_Scenes","A3_Ui_F_Data"};
		fileName = "nuclear_ui.pbo";
		requiredVersion = 0.1;
		author[] = {"Axios Nuclear - Solib"};
	};
};

class RscListNBox;
class RscPicture;
class RscButton;
class RscText;
class IGUIBack;
class RscActiveText;
class RscCombo;
class RscListBox;
class RscProgress;
class RscPictureKeepAspect;
class RscDisplayInventory_DLCTemplate;
class RscStructuredText;
class RscTitle;
class RscButtonMenuOK;
class RscControlsGroupNoHScrollbars;
class RscHTML;
class RscButtonMenu;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class ShortcutPos;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscActivePicture;
class RscButtonMenuMain;
class RscControlsGroup;
class RscEdit;
class RscActivePictureKeepAspect;
class RscMapControl;
class ScrollBar;

#include "gui\NCR_Journal_Progression.hpp"
#include "gui\NCR_KeyCode.hpp"

class CfgFunctions
{
    class NCRUI{
        class KeyCode{
            tag = "NCRUI";
            file = "\nuclear_ui\functions\keycode";
			class addDigit {};
			class event_onAbortButtonClick {};
			class event_onDigitButtonClick {};
			class event_onKeyUp {};
			class event_onOkayButtonClick {};
			class show {};
			class updateControls {};
        };
    }; 
};