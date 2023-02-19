/*
 * main.c
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */
#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/DIO/DIO_Private.h"
#include "../Include/MCAL/DIO/DIO_Configuration.h"

#include "../Include/HAL/SSD/SSD_Interface.h"
#include "../Include/HAL/SSD/SSD_Private.h"
#include "../Include/HAL/SSD/SSD_Configuration.h"
#define F_CPU 8000000UL
void main(void)
{
	MDIO_voidInt();
	while(1)
	{
		// WRITE YOUR CODE HERE
		//COUNT FROM 0 TO 99
		for(u8 i=1 ; i<10 ; i++)
		{
			HSSD_voidDisplayAScendingByPort(PORTA);
			u8 local_u8ArrOfNumbers[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
			HSSD_voidDisplayByPort(PORTB , local_u8ArrOfNumbers[i]);
		}
	}
}
