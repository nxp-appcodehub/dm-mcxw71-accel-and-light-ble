/*! *********************************************************************************
 * \defgroup GATT GATT - Generic Attribute Profile Interface
 * @{
 ********************************************************************************** */
/*! *********************************************************************************
* Copyright 2014 Freescale Semiconductor, Inc.
* Copyright 2016-2018, 2023 NXP
*
* 
* \file
*
* SPDX-License-Identifier: BSD-3-Clause
********************************************************************************** */

#ifndef GATT_INTERFACE_H
#define GATT_INTERFACE_H

/************************************************************************************
*************************************************************************************
* Include
*************************************************************************************
************************************************************************************/
#include "ble_general.h"
#include "gatt_types.h"
#include "gap_types.h"

/************************************************************************************
*************************************************************************************
* Public prototypes
*************************************************************************************
************************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

/*! *********************************************************************************
* \brief  Initializes the GATT module.
*
* \remarks If the GAP module is present, this function is called internally by Ble_HostInitialize().
* Otherwise, the application must call this function once at device start-up.
*
* \remarks This function executes synchronously.
*
* \retval   gBleSuccess_c
*
********************************************************************************** */
bleResult_t Gatt_Init(void);

/*! *********************************************************************************
* \brief  Retrieves the MTU used with a given connected device.
*
* \param[in]  deviceId The device ID of the connected peer.
* \param[out] pOutMtu  Pointer to integer to be written.
*
* \remarks This function executes synchronously.
*
* \retval   gBleSuccess_c
* \retval   gBleInvalidParameter_c  An invalid parameter was provided.
*
********************************************************************************** */
bleResult_t Gatt_GetMtu
(
    deviceId_t deviceId,
    uint16_t*  pOutMtu
);


#ifdef __cplusplus
}
#endif 

#endif /* GATT_INTERFACE_H */

/*! *********************************************************************************
* @}
********************************************************************************** */
