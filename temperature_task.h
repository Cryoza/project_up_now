/*
 * temperature_task.h
 *
 * Created: 11/13/2020 12:56:59 PM
 *  Author: mmate
 */ 


#ifndef TEMPERATURE_TASK_H_
#define TEMPERATURE_TASK_H_

#include <hih8120.h>

hih8120_driverReturnCode_t hih8120_create();
hih8120_driverReturnCode_t hih8120_destroy();
hih8120_driverReturnCode_t hih8120_wakeup();
hih8120_driverReturnCode_t hih8120_measure();
uint16_t get_temp();
float get_temp_flt();



#endif /* TEMPERATURE_TASK_H_ */