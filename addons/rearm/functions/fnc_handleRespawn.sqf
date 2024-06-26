#include "..\script_component.hpp"
/*
 * Author: unknown
 * Called when a unit is Respawned
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [bob] call ACE_rearm_fnc_handleRespawn
 *
 * Public: No
 */

params ["_unit"];
if !(local _unit) exitWith {};

_unit setVariable [QGVAR(selectedWeaponOnRearm), nil];
_unit setVariable [QGVAR(carriedMagazine), nil];
private _dummy = _unit getVariable [QGVAR(dummy), objNull];
if !(isNull _dummy) then {
    detach _dummy;
    deleteVehicle _dummy;
};
_unit setVariable [QGVAR(dummy), nil];
