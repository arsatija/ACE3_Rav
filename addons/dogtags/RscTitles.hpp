class RscPicture;
class RscStructuredText;

class RscTitles {
    class GVAR(singleTag) {
        idd = -1;
        onLoad = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(tag),_this select 0)]);
        onUnload = QUOTE(uiNamespace setVariable [ARR_2(QQGVAR(tag),nil)]);
        fadeIn = 0.2;
        fadeOut = 0.2;
        duration = 5;
        movingEnable = 0;
        class controls {
            class background: RscPicture {
                idc = 1000;
                x = QUOTE(profileNamespace getVariable [ARR_2('TRIPLES(IGUI,GVAR(grid),X)',(safeZoneX + safeZoneW) - 12.9 * GUI_GRID_W)]);
                y = QUOTE(profileNamespace getVariable [ARR_2('TRIPLES(IGUI,GVAR(grid),Y)',safeZoneY + 0.175 * safeZoneH)]);
                w = QUOTE(8 * GUI_GRID_W);
                h = QUOTE(8 * GUI_GRID_H);
                text = QPATHTOF(data\dogtagSingle.paa);
                colorText[] = {1, 1, 1, 1};
            };
            class nickname: RscStructuredText {
                idc = 1001;
                text = "";
                sizeEx = QUOTE(GUI_GRID_H);
                colorText[] = {1, 1, 1, 1};
                colorBackground[] = {0, 0, 0, 0};
                x = QUOTE(1.6 * GUI_GRID_W + (profileNamespace getVariable [ARR_2('TRIPLES(IGUI,GVAR(grid),X)',(safeZoneX + safeZoneW) - 12.9 * GUI_GRID_W)]));
                y = QUOTE(0.065 * safeZoneH + (profileNamespace getVariable [ARR_2('TRIPLES(IGUI,GVAR(grid),Y)',safeZoneY + 0.175 * safeZoneH)]));
                w = QUOTE(5.9 * GUI_GRID_W);
                h = QUOTE(3 * GUI_GRID_H);
                font = "RobotoCondensed";
                class Attributes {
                    font = "RobotoCondensed";
                    color = "#EEEEEE";
                    align = "left";
                    valign = "middle";
                    shadow = 2;
                    shadowColor = "#3f4345";
                    size = "0.80";
                };
            };
        };
    };
    class GVAR(doubleTag): GVAR(singleTag) {
        class controls: controls {
            class background: background {
                text = QPATHTOF(data\dogtagDouble.paa);
            };
            class nickname: nickname {
                class Attributes: Attributes {
                    font = "RobotoCondensed";
                    color = "#EEEEEE";
                    align = "left";
                    valign = "middle";
                    shadow = 2;
                    shadowColor = "#3f4345";
                    size = "0.80";
                };
            };
        };
    };
};
