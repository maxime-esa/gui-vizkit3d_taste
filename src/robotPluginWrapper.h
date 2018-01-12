/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

#ifndef ROBOTPLUGINWRAPPER_H
#define ROBOTPLUGINWRAPPER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include "base_support/baseTypes.h"

// Update functions: returns VIZTASTE_XXX
int RobotVisualization_updateJoints(const char* pluginName, const asn1SccJoints* joints);
int RobotVisualization_updateRigidBodyState(const char* pluginName, const asn1SccRigidBodyState* state);

#ifdef __cplusplus
} // extern "C"
#endif

#endif //ROBOTPLUGINWRAPPER_H