

// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.

#ifndef IOTDM_LWM2M_CLIENT_APIS_H
#define IOTDM_LWM2M_CLIENT_APIS_H

#include "iotdm_client.h"

// --------------------------------------------------------------------------
// PROPERTY AND ACTION PROTOTYPES
// 
// Function prototypes for getting and setting properties and firing actions
// --------------------------------------------------------------------------

/** @brief Callback used when DM client needs to set an Bool Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_BOOLPROP)(void *obj, bool value);
/** @brief Callback used when DM client needs to get an Bool Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_BOOLPROP)(void *obj, bool *value);

/** @brief Callback used when DM client needs to set an String Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_STRINGPROP)(void *obj, char *value, size_t length);
/** @brief Callback used when DM client needs to get an String Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_STRINGPROP)(void *obj, char **value);

/** @brief Callback used when DM client needs to set an Integer Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_INTEGERPROP)(void *obj, int value);
/** @brief Callback used when DM client needs to get an Integer Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_INTEGERPROP)(void *obj, int *value);

/** @brief Callback used when DM client needs to set an Float Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_FLOATPROP)(void *obj, double value);
/** @brief Callback used when DM client needs to get an Float Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_FLOATPROP)(void *obj, double *value);

/** @brief Callback used when DM client needs to set an Opaque Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_OPAQUEPROP)(void *obj, void *value, size_t length);
/** @brief Callback used when DM client needs to get an Opaque Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_OPAQUEPROP)(void *obj, void **value, size_t *length);

/** @brief Callback used when DM client needs to set an Time Property to the application.
 */
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_SET_TIMEPROP)(void *obj, int value);
/** @brief Callback used when DM client needs to get an Time Property from the application.
 */
typedef  IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_GET_TIMEPROP)(void *obj, int *value);


/** @brief Callback used when the DM client needs to execute an action in the application
*/
typedef IOTHUB_CLIENT_RESULT (*IOTHUB_CLIENT_HANDLE_EXECUTE)(void *obj);


#endif /* !IOTDM_LWM2M_CLIENT_APIS_H */

