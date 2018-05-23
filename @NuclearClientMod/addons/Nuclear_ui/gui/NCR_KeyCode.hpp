class NCR_KeyCode
{
	idd = 24010;
	onLoad = "uiNamespace setVariable ['NCR_KeyCode', _this select 0]";
	onUnload = "uiNamespace setVariable ['NCR_KeyCode', displayNull]";
	onKeyUp = "_this call NCRUI_fnc_event_onKeyUp";
	class controlsBackground
	{
		class bgKeyCode: IGUIBack
            {
                x = 0.395 * safezoneW + safezoneX;
                y = 0.29 * safezoneH + safezoneY;
                w = 0.21 * safezoneW;
                h = 0.448 * safezoneH;
                colorBackground[] = {0,0,0,0.6};
            };
	};
	class controls
	{
        class editBox: RscText
        {
            idc = 4001;
            text = "Enter code"; //--- ToDo: Localize;
            x = 0.408125 * safezoneW + safezoneX;
            y = 0.304 * safezoneH + safezoneY;
            w = 0.18375 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class button1: RscButton
        {
            idc = 4004;
            text = "1"; //--- ToDo: Localize;
            x = 0.408125 * safezoneW + safezoneX;
            y = 0.388 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "1 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button2: RscButton
        {
            idc = 4005;
            text = "2"; //--- ToDo: Localize;
            x = 0.47375 * safezoneW + safezoneX;
            y = 0.388 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "2 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button3: RscButton
        {
            idc = 4006;
            text = "3"; //--- ToDo: Localize;
            x = 0.539375 * safezoneW + safezoneX;
            y = 0.388 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "3 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button4: RscButton
        {
            idc = 4007;
            text = "4"; //--- ToDo: Localize;
            x = 0.408125 * safezoneW + safezoneX;
            y = 0.472 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "4 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button5: RscButton
        {
            idc = 4008;
            text = "5"; //--- ToDo: Localize;
            x = 0.47375 * safezoneW + safezoneX;
            y = 0.472 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "5 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button6: RscButton
        {
            idc = 4009;
            text = "6"; //--- ToDo: Localize;
            x = 0.539375 * safezoneW + safezoneX;
            y = 0.472 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "6 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button7: RscButton
        {
            idc = 4010;
            text = "7"; //--- ToDo: Localize;
            x = 0.408125 * safezoneW + safezoneX;
            y = 0.556 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "7 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button8: RscButton
        {
            idc = 4011;
            text = "8"; //--- ToDo: Localize;
            x = 0.47375 * safezoneW + safezoneX;
            y = 0.556 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "8 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button9: RscButton
        {
            idc = 4012;
            text = "9"; //--- ToDo: Localize;
            x = 0.539375 * safezoneW + safezoneX;
            y = 0.556 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "9 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class button0: RscButton
        {
            idc = 4003;
            text = "0"; //--- ToDo: Localize;
            x = 0.47375 * safezoneW + safezoneX;
            y = 0.64 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "0 call NCRUI_fnc_event_onDigitButtonClick";
        };
        class buttonOK: RscButton
        {
            idc = 4000;
            text = "E"; //--- ToDo: Localize;
            x = 0.408125 * safezoneW + safezoneX;
            y = 0.64 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "_this call NCRUI_fnc_event_onDigitButtonClick";
        };
        class buttonCancel: RscButton
        {
            idc = 4002;
            text = "C"; //--- ToDo: Localize;
            x = 0.539375 * safezoneW + safezoneX;
            y = 0.64 * safezoneH + safezoneY;
            w = 0.0525 * safezoneW;
            h = 0.07 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,1};
            colorActive[] = {1,1,1,0.6};
            onMouseButtonClick = "_this call NCRUI_fnc_event_onAbortButtonClick";
        };
        class buttonFake: RscButton
        {
            idc = 4013;
            x = 0.7625 * safezoneW + safezoneX;
            y = 0.85 * safezoneH + safezoneY;
            w = 0 * safezoneW;
            h = 0 * safezoneH;
        };
	};
};