/*
 * SSD_program.c
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

#include "../Include/HAL/SSD/SSD_Interface.h"
#include "../Include/HAL/SSD/SSD_Private.h"
#include "../Include/HAL/SSD/SSD_Configuration.h"


void HSSD_voidDisplayByPort(u8 A_u8PortId, u8 A_u8Number)
{
	MDIO_u8SetPortValue(A_u8PortId, A_u8Number);

}

void HSSD_voidDisplayAScendingByPort(u8 A_u8PortId)
{
	u8 local_u8ArrOfNumbers[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
	for(u8 i = 0 ; i < 10 ; i++)
	{
		HSSD_voidDisplayByPort(A_u8PortId , local_u8ArrOfNumbers[i]);
		_delay_ms(SSD_DELAY_TIME);
	}
}

void HSSD_voidDisplayDescendingByPort(u8 A_u8PortId)
{
	u8 local_u8ArrOfNumbers[10]={NINE,EIGHT,SEVEN,SIX,FIVE,FOUR,THREE,TWO,ONE,ZERO};
	for(u8 i = 0 ; i < 10 ; i++)
	{
		HSSD_voidDisplayByPort(A_u8PortId , local_u8ArrOfNumbers[i]);
		_delay_ms(SSD_DELAY_TIME);
	}
}

void HSSD_voidDisplay(u8 A_u8Number)
{
	MDIO_u8SetPortValue(SSD_PORT, A_u8Number);
}

void HSSD_voidDisplayAScending(void)
{
	u8 local_u8ArrOfNumbers[10]={ZERO,ONE,TWO,THREE,FOUR,FIVE,SIX,SEVEN,EIGHT,NINE};
	for(u8 i = 0 ; i < 10 ; i++)
	{
		HSSD_voidDisplay(local_u8ArrOfNumbers[i]);
		_delay_ms(SSD_DELAY_TIME);
	}
}

void HSSD_voidDisplayDescending(void)
{
	u8 local_u8ArrOfNumbers[10]={NINE,EIGHT,SEVEN,SIX,FIVE,FOUR,THREE,TWO,ONE,ZERO};
	for(u8 i = 0 ; i < 10 ; i++)
	{
		HSSD_voidDisplay(local_u8ArrOfNumbers[i]);
		_delay_ms(SSD_DELAY_TIME);
	}
}
