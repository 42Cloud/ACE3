class ACE_gui_buttonBase;

class GVAR(triageCard) {
    idd = 7010;
    movingenable = 0;
    onLoad = QUOTE(uiNamespace setVariable [ARR_2(QUOTE(QUOTE(GVAR(triageCard))), _this select 0)]);
    onUnload = QUOTE(uiNamespace setVariable [ARR_2(QUOTE(QUOTE(GVAR(triageCard))), nil)]);
    class controlsBackground {
        class Background: ACE_gui_backgroundBase {
            idc = -1;
            type = CT_STATIC;
            x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "19 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            style = ST_LEFT + ST_SHADOW;
            font = "RobotoCondensed";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            colorText[] = {0.0, 0.0, 0.0, 1};
            colorBackground[] = {1,1,1,1};
            text = "";
        };
        class cornor_top_l: ACE_gui_backgroundBase {
            idc = -1;
            x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "5 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            font = "RobotoCondensed";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            colorText[] = {1,1,0,1};
            colorBackground[] = {0,0,0,0};
            text = QPATHTOF(ui\triage_card_corner_l.paa);
        };
        class cornor_top_r: cornor_top_l {
            x = "20 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            text = QPATHTOF(ui\triage_card_corner_r.paa);
        };

        class TriageCardLabel {
            idc = 199;
            type = CT_STATIC;
            x = "14.25 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "5 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "7.5 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "0.7 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
            style = 0x02 + 0x100; // ST_LEFT + ST_SHADOW
            font = "RobotoCondensed";
            colorText[] = {0,0,0,1};
            colorBackground[] = {0,0,0,0};
            text = CSTRING(Actions_TriageCard);
        };
        class TriageList: ACE_gui_listBoxBase {
            idc = 200;
            x = "11 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "6 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "13 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "13 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
            rowHeight = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.7)";
            colorBackground[] = {0, 0, 0, 0};
            colorText[] = {0,0,0, 1.0};
            colorScrollbar[] = {0.95, 0.95, 0.95, 0};
            colorSelect[] = {0.0, 0.0, 0.0, 1};
            colorSelect2[] = {0.0, 0.0, 0.0, 1};
            colorSelectBackground[] = {0, 0, 0, 0.0};
            colorSelectBackground2[] = {0.0, 0.0, 0.0, 0.0};
        };
        class TriageTextBottom: TriageCardLabel {
            idc = 2000;
            x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "20 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            style = 0x02;
            colorText[] = {1, 1, 1.0, 1};
            colorBackground[] = {0,0.0,0.0,0.7};
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            text = "";
        };
        class selectTriageStatus: ACE_gui_buttonBase {
            idc = 2001;
            x = "10 * (((safezoneW / safezoneH) min 1.2) / 40) + (safezoneX + (safezoneW - ((safezoneW / safezoneH) min 1.2))/2)";
            y = "20 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
            w = "15 * (((safezoneW / safezoneH) min 1.2) / 40)";
            h = "1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.0)";
            animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.0)";
            animTextureOver = "#(argb,8,8,3)color(0,0,0,0.0)";
            animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.0)";
            animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.0)";
            animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.0)";
            action = QUOTE([true] call FUNC(dropDownTriageCard););
            text = "";
        };
        class selectTriageStatusNone: selectTriageStatus {
            idc = 2002;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = CSTRING(Triage_Status_None);
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
            action = QUOTE([false] call FUNC(dropDownTriageCard); (GVAR(TriageCardTarget)) setVariable [ARR_3(QQGVAR(triageLevel),0,true)];);
        };
        class selectTriageStatusMinor: selectTriageStatus {
            idc = 2003;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = CSTRING(Triage_Status_Minor);
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            animTextureDisabled = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            animTextureOver = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            animTextureFocused = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            animTexturePressed = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            animTextureDefault = "#(argb,8,8,3)color(0,0.5,0,0.9)";
            action = QUOTE([false] call FUNC(dropDownTriageCard); (GVAR(TriageCardTarget)) setVariable [ARR_3(QQGVAR(triageLevel),1,true)];);
        };
        class selectTriageStatusDelayed: selectTriageStatus {
            idc = 2004;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = CSTRING(Triage_Status_Delayed);
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            animTextureDisabled = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            animTextureOver = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            animTextureFocused = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            animTexturePressed = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            animTextureDefault = "#(argb,8,8,3)color(0.77,0.51,0.08,0.9)";
            action = QUOTE([false] call FUNC(dropDownTriageCard); (GVAR(TriageCardTarget)) setVariable [ARR_3(QQGVAR(triageLevel),2,true)];);
        };
        class selectTriageStatusImmediate: selectTriageStatus {
            idc = 2005;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = CSTRING(Triage_Status_Immediate);
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            animTextureDisabled = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            animTextureOver = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            animTextureFocused = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            animTexturePressed = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            animTextureDefault = "#(argb,8,8,3)color(1,0.2,0.2,0.9)";
            action = QUOTE([false] call FUNC(dropDownTriageCard); (GVAR(TriageCardTarget)) setVariable [ARR_3(QQGVAR(triageLevel), 3, true)];);
        };
        class selectTriageStatusDeceased: selectTriageStatus {
            idc = 2006;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            text = CSTRING(Triage_Status_Deceased);
            style = 0x02;
            size = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
            animTextureNormal = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureDisabled = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureOver = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureFocused = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTexturePressed = "#(argb,8,8,3)color(0,0,0,0.9)";
            animTextureDefault = "#(argb,8,8,3)color(0,0,0,0.9)";
            action = QUOTE([false] call FUNC(dropDownTriageCard); (GVAR(TriageCardTarget)) setVariable [ARR_3(QQGVAR(triageLevel), 4, true)];);
        };
    };
};
