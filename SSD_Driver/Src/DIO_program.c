/*
 * DIO_program.c
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */

#include "../Include/LIB/STD_TYPES.h"
#include "../Include/LIB/BIT_MATH.h"

#include "../Include/MCAL/DIO/DIO_Interface.h"
#include "../Include/MCAL/DIO/DIO_Private.h"
#include "../Include/MCAL/DIO/DIO_Configuration.h"

void MDIO_voidInt(void)
{
	DDRA_REG  =  CONC_BIT(PORTA_PIN7_DIRECTION, PORTA_PIN6_DIRECTION, PORTA_PIN5_DIRECTION, PORTA_PIN4_DIRECTION, PORTA_PIN3_DIRECTION, PORTA_PIN2_DIRECTION, PORTA_PIN1_DIRECTION, PORTA_PIN0_DIRECTION);
	PORTA_REG = CONC_BIT(PORTA_PIN7_VALUE, PORTA_PIN6_VALUE, PORTA_PIN5_VALUE, PORTA_PIN4_VALUE, PORTA_PIN3_VALUE, PORTA_PIN2_VALUE, PORTA_PIN1_VALUE, PORTA_PIN0_VALUE);

	DDRB_REG  =  CONC_BIT(PORTB_PIN7_DIRECTION, PORTB_PIN6_DIRECTION, PORTB_PIN5_DIRECTION, PORTB_PIN4_DIRECTION, PORTB_PIN3_DIRECTION, PORTB_PIN2_DIRECTION, PORTB_PIN1_DIRECTION, PORTB_PIN0_DIRECTION);
	PORTB_REG = CONC_BIT(PORTB_PIN7_VALUE, PORTB_PIN6_VALUE, PORTB_PIN5_VALUE, PORTB_PIN4_VALUE, PORTB_PIN3_VALUE, PORTB_PIN2_VALUE, PORTB_PIN1_VALUE, PORTB_PIN0_VALUE);

	DDRC_REG  =  CONC_BIT(PORTC_PIN7_DIRECTION, PORTC_PIN6_DIRECTION, PORTC_PIN5_DIRECTION, PORTC_PIN4_DIRECTION, PORTC_PIN3_DIRECTION, PORTC_PIN2_DIRECTION, PORTC_PIN1_DIRECTION, PORTC_PIN0_DIRECTION);
	PORTC_REG = CONC_BIT(PORTC_PIN7_VALUE, PORTC_PIN6_VALUE, PORTC_PIN5_VALUE, PORTC_PIN4_VALUE, PORTC_PIN3_VALUE, PORTC_PIN2_VALUE, PORTC_PIN1_VALUE, PORTC_PIN0_VALUE);

	DDRD_REG  =  CONC_BIT(PORTD_PIN7_DIRECTION, PORTD_PIN6_DIRECTION, PORTD_PIN5_DIRECTION, PORTD_PIN4_DIRECTION, PORTD_PIN3_DIRECTION, PORTD_PIN2_DIRECTION, PORTD_PIN1_DIRECTION, PORTD_PIN0_DIRECTION);
	PORTD_REG = CONC_BIT(PORTD_PIN7_VALUE, PORTD_PIN6_VALUE, PORTD_PIN5_VALUE, PORTD_PIN4_VALUE, PORTD_PIN3_VALUE, PORTD_PIN2_VALUE, PORTD_PIN1_VALUE, PORTD_PIN0_VALUE);
}

void MDIO_voidSetPinDirection (u8 A_u8PortId,u8 A_u8PinId,u8 A_u8DirectionId)
{
	switch(A_u8PortId)
	{
	case PORTA:
		switch(A_u8DirectionId)
		{
		case PIN_OUTPUT:
			SET_BIT(DDRA_REG , A_u8PinId);
			break;
		case PIN_INPUT:
			CLR_BIT(DDRA_REG , A_u8PinId);
			break;
		default:
			break;
		}
	case PORTB:
		switch(A_u8DirectionId)
		{
		case PIN_OUTPUT:
			SET_BIT(DDRB_REG , A_u8PinId);
			break;
		case PIN_INPUT:
			CLR_BIT(DDRB_REG , A_u8PinId);
			break;
		default:
			break;
		}
	case PORTC:
		switch(A_u8DirectionId)
		{
		case PIN_OUTPUT:
			SET_BIT(DDRC_REG , A_u8PinId);
			break;
		case PIN_INPUT:
			CLR_BIT(DDRC_REG , A_u8PinId);
			break;
		default:
			break;
		}
	case PORTD:
		switch(A_u8DirectionId)
		{
		case PIN_OUTPUT:
			SET_BIT(DDRD_REG , A_u8PinId);
			break;
		case PIN_INPUT:
			CLR_BIT(DDRD_REG , A_u8PinId);
			break;
		default:
			break;
		}
	default:
		break;
	}
}

void MDIO_voidSetPinValue(u8 A_u8PortId, u8 A_u8PinId, u8 A_u8Value)
{
	switch(A_u8PortId)
	{
	case PORTA:
		switch(A_u8Value)
		{
		case (PIN_HIGH || PIN_PULLUP):
			SET_BIT(PORTA_REG,A_u8PinId);
			break;
		case (PIN_LOW || PIN_FLOATING):
			CLR_BIT(PORTA_REG,A_u8PinId);
			break;
		default:
			break;
		}
	case PORTB:
		switch(A_u8Value)
		{
		case (PIN_HIGH || PIN_PULLUP):
			SET_BIT(PORTB_REG,A_u8PinId);
			break;
		case (PIN_LOW || PIN_FLOATING):
			CLR_BIT(PORTB_REG,A_u8PinId);
			break;
		default:
			break;
		}
		case PORTC:
			switch(A_u8Value)
			{
			case (PIN_HIGH || PIN_PULLUP):
				SET_BIT(PORTC_REG,A_u8PinId);
				break;
			case (PIN_LOW || PIN_FLOATING):
				CLR_BIT(PORTC_REG,A_u8PinId);
				break;
			default:
				break;
			}
	case PORTD:
		switch(A_u8Value)
		{
		case (PIN_HIGH || PIN_PULLUP):
			SET_BIT(PORTD_REG,A_u8PinId);
			break;
		case (PIN_LOW || PIN_FLOATING):
			CLR_BIT(PORTD_REG,A_u8PinId);
			break;
		default:
			break;
		}
		default:
				break;
	}
}

u8 MDIO_u8GetPinValue(u8 A_u8PortId,u8 A_u8PinId)
{
	u8 local_u8PinValue=0;
	switch(A_u8PortId)
	{
	case PORTA:
		local_u8PinValue = GET_BIT(PINA_REG, A_u8PinId);
		break;
	case PORTB:
		local_u8PinValue = GET_BIT(PINB_REG, A_u8PinId);
		break;
	case PORTC:
		local_u8PinValue =GET_BIT(PINC_REG, A_u8PinId);
		break;
	case PORTD:
		local_u8PinValue =GET_BIT(PIND_REG, A_u8PinId);
		break;
	default:
		break;
	}
	return local_u8PinValue;
}

void MDIO_u8SetPortDirection(u8 A_u8PortId,u8 A_u8Direction)
{
	switch(A_u8PortId)
	{
	case PORTA:
		DDRA_REG = A_u8Direction;
		break;
	case PORTB:
		DDRB_REG = A_u8Direction;
		break;
	case PORTC:
		DDRC_REG = A_u8Direction;
		break;
	case PORTD:
		DDRD_REG = A_u8Direction;
		break;
	default:
		break;
	}
}

void MDIO_u8SetPortValue(u8 A_u8PortId,u8 A_u8Value)
{
	switch(A_u8PortId)
	{
	case PORTA:
		PORTA_REG = A_u8Value;
		break;
	case PORTB:
		PORTB_REG = A_u8Value;
		break;
	case PORTC:
		PORTC_REG = A_u8Value;
		break;
	case PORTD:
		PORTD_REG = A_u8Value;
		break;
	default:
		break;
	}
}
