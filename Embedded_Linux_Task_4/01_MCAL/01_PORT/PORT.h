/******************************************************************
					Author  : Shirehan Medhat Abdeldsalam Ali
					Date    : 3-12-2023
					Driver  : PORT
					File    : PORT.h
					Version : (1)
*****************************************************************/

/********************Include The STD_LIBS*********************/

#include "../../00_LIB/Bitmath.h"
#include "../../00_LIB/STD_Types.h"
#ifndef PORT_H_
#define PORT_H_

/*Define The Registers Of the Micro-controller */

#define DDRA          *((volatile u8*)0x3A)
#define PORTA         *((volatile u8*)0x3B)
#define PINA          *((volatile u8*)0x39)

#define DDRB          *((volatile u8*)0x37)
#define PORTB         *((volatile u8*)0x38)
#define PINB         *((volatile u8*)0x36)

#define DDRC          *((volatile u8*)0x34)
#define PORTC         *((volatile u8*)0x35)
#define PINC          *((volatile u8*)0x33)

#define DDRD          *((volatile u8*)0x31)
#define PORTD         *((volatile u8*)0x32)
#define PIND         *((volatile u8*)0x30)




/***********Function Like Macro For The Concatination ******************/
#define CONCAT(b7, b6, b5, b4, b3, b2, b1, b0) Conc_Help(b7, b6, b5, b4, b3, b2, b1, b0)
#define Conc_Help(b7, b6, b5, b4, b3, b2, b1, b0)  0b##b7##b6##b5##b4##b3##b2##b1##b0


/************Enum For Handling The Ports Inside The POST-Compile Function******************/
/***********Matters For eveloper Not User thats why it is placed here**********************/
typedef enum 
{
	PORT_A,
	PORT_B,
	PORT_C,
	PORT_D,
	
	}PORT_enuPorts;

#endif /* PORT_H_ */