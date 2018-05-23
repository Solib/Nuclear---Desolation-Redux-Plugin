class NCR_Journal_Progression
{
	idd = 5663;
	name = "NCR_Journal_Progression";
	movingEnable = 1;
	enableSimulation = 1;
	onLoad = "[_this] call NCR_fnc_loadCraftMenu";
	//onLoad = "[_this,'NCR_Journal_Progression','load'] call (uiNamespace getVariable 'NCR_fnc_loadCraftMenu')";
	//onUnload = "[_this,'DS_Journal_Progression','unload'] call (uiNamespace getVariable 'DS_fnc_initDSDisplay')";


	class controlsBackground {
		
		class NCR_MainBG: IGUIBack
		{
			idc = 2200;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.525 * safezoneW;
			h = 0.7 * safezoneH;
			colorBackground[] = {0,0,0,0.4};
		};
		
		class NCR_RecipleBG: IGUIBack
		{
			idc = 2201;
			x = 0.414687 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.34125 * safezoneW;
			h = 0.644 * safezoneH;
			colorBackground[] = {0,0,0,0.6};
		};

    };
	
	class controls {
		

		
		class NCR_Title: RscText
		{
			idc = 1000;
			text = "Craft & Building Menu"; //--- ToDo: Localize;
			x = 0.2375 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.525 * safezoneW;
			h = 0.028 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {-1,-1,-1,1};
		};
		class NCR_ListReciples: RscListbox
		{
			idc = 1500;
			onLBSelChanged = "[_this] spawn NCR_fnc_selectActionCraft";
			x = 0.244062 * safezoneW + safezoneX;
			y = 0.192 * safezoneH + safezoneY;
			w = 0.164062 * safezoneW;
			h = 0.644 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.6};
		};
		
		class NCR_DescriptionReciple: RscStructuredText
		{
			idc = 1100;
			colorText[] = {1,1,1,1};
			x = 0.421249 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.190312 * safezoneW;
			h = 0.574 * safezoneH;
		};
		class NCR_BuildingButton: RscButtonMenu
		{
			idc = 2400;
			text = "Building"; //--- ToDo: Localize;
			x = 0.519688 * safezoneW + safezoneX;
			y = 0.794 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class NCR_CraftButton: RscButtonMenu
		{
			idc = 2401;
			text = "Craft"; //--- ToDo: Localize;
			x = 0.434375 * safezoneW + safezoneX;
			y = 0.794 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.028 * safezoneH;
		};
		class NCR_PicReciples: RscPicture
		{
			idc = 1200;
			text = "#(argb,8,8,3)color(1,1,1,0)";
			colorBackground[] = {0,0,0,0};
			x = 0.624687 * safezoneW + safezoneX;
			y = 0.206 * safezoneH + safezoneY;
			w = 0.118125 * safezoneW;
			h = 0.224 * safezoneH;
		};
		class NCR_CancelMenu: RscButtonMenuCancel
		{
			text = "X"; //--- ToDo: Localize;
			x = 0.742812 * safezoneW + safezoneX;
			y = 0.15 * safezoneH + safezoneY;
			w = 0.0196875 * safezoneW;
			h = 0.028 * safezoneH;
		};

	};
};