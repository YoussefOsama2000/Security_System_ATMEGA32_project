 /******************************************************************************
 *
 * Module: DC MOTOR
 *
 * File Name: dc_motor.h
 *
 * Description: Header file for the DC motor driver
 *
 * Author: Youssef Osama
 *
 *******************************************************************************/
#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "std_types.h"
#include "common_macros.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
/*
 * NOTE :: this driver is designed to use pin 1 and 2 in two consecutive pins in one port
 * 			as stop equal bn00 , clockwise equal bn01 , anti-clokwise equal bn10
*/
/*define out 1 pin*/
#define OUT1_PORT_ID PORTB_ID
#define OUT1_PIN_ID PIN0_ID
/*define out 2 pin*/
#define OUT2_PORT_ID PORTB_ID
#define OUT2_PIN_ID PIN1_ID
/*define EN pin*/

/*******************************************************************************
 *                              type   Definitions                              *
 *******************************************************************************/
typedef enum{
	stop,clockwise,Anti_clokewise
}DcMotorState;
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
/*this function will prepare */
void DcMotor_init(void);
void DcMotor_Rotate(DcMotorState,uint8);


































#endif /* DC_MOTOR__H_ */
