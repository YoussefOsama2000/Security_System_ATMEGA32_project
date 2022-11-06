 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the UART AVR driver
 *
 * Author: Mohamed Tarek
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_

#include "std_types.h"

/*******************************************************************************
 *                      types define		                                   *
 ********************************************************************************/
typedef enum{
	UART_5_bit_data,
	UART_6_bit_data,
	UART_7_bit_data,
	UART_8_bit_data,
	UART_9_bit_data=0x83, //1000 0011
}UART_BitData;
typedef enum{
	UART_disable_parity,
	UART_reserved_parity,
	UART_even_parity,
	UART_odd_parity
			}UART_Parity;
typedef enum{UART_1_stopBit,UART_2_stopBit}UART_StopBit;
typedef struct{
 UART_BitData bit_data;
 UART_Parity parity;
 UART_StopBit stop_bit;
 uint32 baud_rate;
}UART_ConfigType;
/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

/*
 * Description :
 * Functional responsible for Initialize the UART device by:
 * 1. Setup the Frame format like number of data bits, parity bit type and number of stop bits.
 * 2. Enable the UART.
 * 3. Setup the UART baud rate.
 */
void UART_init(UART_ConfigType* configPtr);

/*
 * Description :
 * Functional responsible for send byte to another UART device.
 */
void UART_sendByte(const uint8 data);

/*
 * Description :
 * Functional responsible for receive byte from another UART device.
 */
uint8 UART_recieveByte(void);

/*
 * Description :
 * Send the required string through UART to the other UART device.
 */
void UART_sendString(const uint8 *Str);

/*
 * Description :
 * Receive the required string until the '#' symbol through UART from the other UART device.
 */
void UART_receiveString(uint8 *Str); // Receive until #

/*
 * Description :
 * set the callback function that will be called when UART receive byte
 * */
void UART_setCallback (void (*callback)(uint8));
#endif /* UART_H_ */
