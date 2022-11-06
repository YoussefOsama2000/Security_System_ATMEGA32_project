/******************************************************************************
 *
 * Module: Buzzer driver
 *
 * File Name: buzzer.h
 *
 * Description: header file for buzzer driver
 *
 * Author: Youssef Osama
 *
 *******************************************************************************/
#ifndef BUZZER_H_
#define BUZZER_H_
#include "common_macros.h"
#include "std_types.h"
#define BUZZER_PORT PORTB_ID
#define BUZZER_PIN PIN4_ID
/*
 *this function is made to initialize buzzer (set buzzer to output and turn off the buzzer
 *this as initial state )
 */
void Buzzer_init(void);
/*
 *this function is made to activate the buzzer
 */
void Buzzer_on(void);
/*
 *this function is made to deactivate the buzzer
 */
void Buzzer_off(void);
#endif
