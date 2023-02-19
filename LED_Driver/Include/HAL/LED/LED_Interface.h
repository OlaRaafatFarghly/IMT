/*
 * LED_Interface.h
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */

#ifndef INCLUDE_HAL_LED_LED_INTERFACE_H_
#define INCLUDE_HAL_LED_LED_INTERFACE_H_

void HLED_voidTurnOn(u8 A_u8PortId,u8 A_u8PinId);

void HLED_voidTurnOff(u8 A_u8PortId,u8 A_u8PinId);

// LED STATUS :- LED_ON - LED_OFF
void HLED_voidSetLedStatus(u8 A_u8PortId,u8 A_u8PinId ,u8 A_u8LedStatus);

#endif /* INCLUDE_HAL_LED_LED_INTERFACE_H_ */
