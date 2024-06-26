#include "..\script_component.hpp"
/*
 * Author: esteldunedain
 * Returns if the GPS on the map can be used.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * GPS can be used <BOOL>
 *
 * Example:
 * call ace_maptools_fnc_canUseMapGPS
 *
 * Public: No
 */

if (!visibleMap || {!alive ACE_player}) exitWith {false};

private _gpsOpened = visibleGPS;
private _gpsAvailable = openGPS true;
if (!_gpsOpened) then {openGPS false};

_gpsAvailable // return
