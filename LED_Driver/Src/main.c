/*
 * main.c
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
#define F_CPU 8000000UL
void main(void)
{
	MDIO_voidInt();
	while(1)
	{
		// WRITE YOUR CODE HERE
		//READ THE LED VALUE AND TOGGLE IT
		u8 A_u8LedStatus = MDIO_u8GetPinValue(PORTA , PIN0);
	    HLED_voidSetLedStatus(PORTA , PIN0 ,!(A_u8LedStatus));
	    _delay_ms(LED_DELAY_TIME);
	}
}
