/*
 * Copyright (c) 2019 Ken Bannister. All rights reserved.
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     riot-apps
 * @{
 *
 * @file
 * @brief       Wakaama client for temperature sensor
 *
 * @author      Ken Bannister <kb2ma@runbox.com>
 */

#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include "liblwm2m.h"

/**
 * @brief LWM2M ID for the Temperature object
 */
#define LWM2M_TEMPERATURE_OBJECT_ID   (3303)

/**
 * @brief Resource ids for the Temperature object
 */
typedef enum {
    LWM2M_TEMPERATURE_RES_SENSOR_VALUE = 5700,
} temperature_resource_t;

/**
 * @brief Temperature object instance descriptor
 */
typedef struct temperature_instance {
    struct temperature_instance *next;  /**< matches lwm2m_list_t::next */
    uint16_t shortID;                   /**< matches lwm2m_list_t::id */
    double sensor_value;
} temperature_instance_t;

/**
 * @brief Creates a Temperature object and @p numof instances
 *
 * @param[in] numof number of instances to create
 * 
 * @return Pointer to the created object
 * @return NULL if could not create the object
 */
lwm2m_object_t *object_temperature_get(uint16_t numof);

#ifdef __cplusplus
}
#endif

#endif /* TEMP_SENSOR_H */
/** @} */
