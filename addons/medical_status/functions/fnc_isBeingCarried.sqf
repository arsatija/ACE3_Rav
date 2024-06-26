#include "..\script_component.hpp"
/*
 * Author: PabstMirror
 * Returns if a target is being carried. (from ace_dragging)
 *
 * Arguments:
 * 0: Target Unit <OBJECT>
 *
 * Return Value:
 * Is being carried <BOOL>
 *
 * Example:
 * [bob] call ace_medical_status_fnc_isBeingCarried
 *
 * Public: No
 */

params ["_target"];

private _owner = _target getVariable [QEGVAR(common,owner), objNull];

!(isNull _owner)
    && {(_owner getVariable [QEGVAR(dragging,carriedObject), objNull]) == _target}
