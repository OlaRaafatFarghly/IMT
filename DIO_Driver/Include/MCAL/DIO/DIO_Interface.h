/*
 * DIO_Interface.h
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */

#ifndef INCLUDE_MCAL_DIO_DIO_INTERFACE_H_
#define INCLUDE_MCAL_DIO_DIO_INTERFACE_H_

#define PIN_INPUT  0
#define PIN_OUTPUT 1

#define PIN_HIGH 1
#define PIN_LOW  0

#define PIN_PULLUP   1
#define PIN_FLOATING 0

#define PORTA 0
#define PORTB 1
#define PORTC 2
#define PORTD 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
//TO SET THE PRE-CONFIGURATIONS USE THIS FUNCTION
void MDIO_voidInt(void);

// PORT ID :- PORTA - PORTB - PORTC - PORTD
// PIN ID  :- PIN0 ... PIN7
// DIRECTION ID   : PIN_OUTPUT - PIN_INPUT
// Value :-
//             OUTPUT :- PIN_LOW , PIN_HIGH
//             INPUT :- PIN_PULLUP , PIN_FLOATING
void MDIO_voidSetPinDirection (u8 A_u8PortId,u8 A_u8PinId,u8 A_u8DirectionId);

void MDIO_voidSetPinValue(u8 A_u8PortId, u8 A_u8PinId, u8 A_u8Value);

u8 MDIO_u8GetPinValue(u8 A_u8PortId,u8 A_u8PinId);

void MDIO_u8SetPortDirection(u8 A_u8PortId,u8 A_u8Direction);

void MDIO_u8SetPortValue(u8 A_u8PortId,u8 A_u8Value);

#endif /* INCLUDE_MCAL_DIO_DIO_INTERFACE_H_ */
