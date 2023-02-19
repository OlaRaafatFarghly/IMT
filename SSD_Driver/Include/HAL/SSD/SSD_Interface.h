/*
 * SSD_Interface.h
 *
 *  Created on: Feb 19, 2023
 *      Author: El-Sa7er
 */

#ifndef INCLUDE_HAL_SSD_SSD_INTERFACE_H_
#define INCLUDE_HAL_SSD_SSD_INTERFACE_H_

//ASSUME SSD IS COMMON CATHODE
#define ZERO   0b00111111
#define ONE    0b00000110
#define TWO    0b01011011
#define THREE  0b01001111
#define FOUR   0b01100110
#define FIVE   0b01101101
#define SIX    0b01111101
#define SEVEN  0b00000111
#define EIGHT  0b01111111
#define NINE   0b01101111

// PORT ID :- PORTA - PORTB - PORTC - PORTD
//A_u8Number :- ZERO - ONE - TWO - THREE - FOUR - FIVE - SIX - SEVEN - EIGHT - NINE
void HSSD_voidDisplayByPort(u8 A_u8PortId, u8 A_u8Number);

void HSSD_voidDisplayAScendingByPort(u8 A_u8PortId);

void HSSD_voidDisplayDescendingByPort(u8 A_u8PortId);


// CHANGE SSD PORT FROM CONFIGURATION
void HSSD_voidDisplay(u8 A_u8Number);

// CHANGE SSD PORT FROM CONFIGURATION
void HSSD_voidDisplayAScending(void);

// CHANGE SSD PORT FROM CONFIGURATION
void HSSD_voidDisplayDescending(void);

#endif /* INCLUDE_HAL_SSD_SSD_INTERFACE_H_ */
