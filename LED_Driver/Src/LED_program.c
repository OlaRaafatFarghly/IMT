/*
 * LED_program.c
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */

#include<util/delay.h>
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/DIO/DIO_Private.h"
#include "../Include/MCAL/DIO/DIO_Configuration.h"

#include "../Include/HAL/LED/LED_Interface.h"
#include "../Include/HAL/LED/LED_Private.h"
#include "../Include/HAL/LED/LED_Configuration.h"

void HLED_voidTurnOn(u8 A_u8PortId,u8 A_u8PinId)
{
	MDIO_voidSetPinValue( A_u8PortId,  A_u8PinId, LED_ON);
	_delay_ms(LED_DELAY_TIME);
}

void HLED_voidTurnOff(u8 A_u8PortId,u8 A_u8PinId)
{
	MDIO_voidSetPinValue( A_u8PortId,  A_u8PinId, LED_OFF);
	_delay_ms(LED_DELAY_TIME);
}

// LED STATUS :- LED_ON - LED_OFF
void HLED_voidSetLedStatus(u8 A_u8PortId,u8 A_u8PinId ,u8 A_u8LedStatus)
{
	MDIO_voidSetPinValue( A_u8PortId,  A_u8PinId,A_u8LedStatus);
}
