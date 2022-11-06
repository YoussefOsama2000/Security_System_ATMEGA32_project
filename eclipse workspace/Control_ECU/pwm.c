/******************************************************************************
 *
 * Module: PWM
 *
 * File Name: pwm.v
 *
 * Description: Source file for pulse width modulation
 *
 * Author: Youssef Osama
 *
 *******************************************************************************/
#include "pwm.h"
#include "avr/io.h"
#include "gpio.h"
void PWM_init(void){
	/*setting PWM pin to output*/
	GPIO_setupPinDirection(PORTB_ID, PIN3_ID, PIN_OUTPUT);
	/*
	 * WGM01  WGM00 = 11 to choose fast PWM mode
	 * COM01  COM00 = 10 to choose non-inverting mode
	 * CS02 CS01 CS00 = 010 to choose pre-scaler equal CPU-CLK/8
	 * */
	TCCR0 = (1<<WGM00) | (1<<WGM01) | (1<<COM01) | (1<<CS01);
	/*Setting Timer Initial value*/
	TCNT0 = 0;
	/*setting compare value to zero at the began*/
	OCR0=0;

}
void PWM_setDutyCycle(uint8 duty){
	OCR0  = duty; // Set Compare Value
}
