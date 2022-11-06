 /******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.h
 *
 * Description: Source file for pulse width modulation
 *
 * Author: Youssef Osama
 *
 *******************************************************************************/

#ifndef PWM_H_
#define PWM_H_
#include "common_macros.h"
#include "std_types.h"
void PWM_init();
void PWM_setDutyCycle(uint8);
#endif
