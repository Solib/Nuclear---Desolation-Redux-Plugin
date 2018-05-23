#include "constants.hpp"
/*
Nuclear Interface Plugin
autor: Solib
twitch: https://www.twitch.tv/solib
Created for Nuclear RolePlay Sandbox server
*/
class CfgPatches
{
	class NuclearInterface
	{
		requiredAddons[] = {"PluginManager"};
		units[] = {};
	}; 
};

class Plugins
{
	class NuclearInterface
	{
		name = "Nuclear Interface";
		desc = "Nuclear Interface craft menu and padlock";
		tag = "NCR";
        version = 0.1;
	};
};

class CfgPluginActions {
	class Padlocks {
        text = "Padlocks";
        condition = "_player distance _cursor < 8 && !(_cursor isKindOf 'allVehicles')";
		class Actions {
            class ResetLock {
				text = "Reset lock";
				condition = "[_cursor] call DS_fnc_isResettable";
				action = "createDialog 'DS_Padlock'; call DS_fnc_initReset;";
			};
			class Lock {
                text = "Lock";
                condition = "[_cursor] call DS_fnc_isLockable";
				action = "5 call NCRUI_fnc_show; call NCR_fnc_initLock;";
            };
			class Unlock {
				text = "Unlock";
				condition = "[_cursor] call DS_fnc_isUnlockable";
				action = "5 call NCRUI_fnc_show; call NCR_fnc_initUnlock;";
			};
		};
	};
};

class CfgPluginKeybinds 
{
	class OpenCraftDialog 
	{
		displayName = "Open Building & Craft";
		tooltip = "Open the journal buildables and craft";
		tag = "NCR";
		variable = "CustomKeybind";
		defaultKeys[] = {{0x24,0}}; // J
		code = "call NCR_fnc_openCraftDialog;";
	};
};

class CfgFunctions
{
	class NCR
	{
        class Client_Building_Locking {
			file = "NuclearInterface\Client\Building\Locking";
			isclient = 1;
            class initLock {};
			class initReset {};
            class initUnlock {};
            class lock {};
			class reset {};
			class unlock {};
		};
		class Client_Building_Locking_Checks {
			file = "NuclearInterface\Client\Building\Locking\Checks";
			isclient = 1;
			class isBuildingOwner {};
            class isResettable {};
			class isUnlockable {};
            class isLockable {};
		};

		class CraftBuildingSystem
		{
			file = "NuclearInterface\Client\UI\CraftBuildingSystem";
			isclient = 1;
			class openCraftDialog {};
			class loadCraftMenu {};
			class selectActionCraft {};
			class onBuildClick {};
			class onCraftClick {};
		};
	};
};