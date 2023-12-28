/******************************************************************
					Author  : Shirehan Medhat Abdeldsalam Ali
					Date    : 3-12-2023
					Driver  : PORT
					File    : PORT_Config.c
					Version : (1)
*****************************************************************/

#ifndef PORT_CONFIG_H_
#define PORT_CONFIG_H_
/********************Include The STD_LIBS*********************/

#include "../../00_LIB/Bitmath.h"
#include "../../00_LIB/STD_Types.h"


/**********MACROS For The Type Of Configuration************/


#define PRE_COMPILE_CONFIG   0
#define POST_COMPILE_CONFIG  1
#define CONFIGURATION_MODE		PRE_COMPILE_CONFIG



/************MACROS For Number Of Ports********************/

#define FOUR_PORTS			4
#define THREE_PORTS			3
#define TWO_PORTS			2
#define NUM_OF_PORTS         FOUR_PORTS



/************************************************************************/
/*           USER BLOCK TO INTERFACE WITH THE PINS                      */
/************************************************************************/




/****************MACROS For Pin Options**********************************/
/*
OPTIONS:
			1- INPUT_PU
			2- INPUT_HI
			3- OUTPUT_HIGH
			4- OUTPUT_LOW
			5- DEFAULT_VALUE
*/

	
	#define PORT_INPUT_PU		0
	#define PORT_INPUT_HI		1
	#define PORT_OUTPUT_HIGH	2
	#define PORT_OUTPUT_LOW		3
	#define PORT_DEFAULT_VALUE	4
	
	


/*PORT A*/
#define PORT_PIN0		PORT_DEFAULT_VALUE
#define PORT_PIN1		PORT_DEFAULT_VALUE
#define PORT_PIN2		PORT_DEFAULT_VALUE
#define PORT_PIN3		PORT_DEFAULT_VALUE
#define PORT_PIN4		PORT_OUTPUT_LOW
#define PORT_PIN5		PORT_DEFAULT_VALUE
#define PORT_PIN6		PORT_DEFAULT_VALUE
#define PORT_PIN7		PORT_DEFAULT_VALUE

/*PORT B*/
#define PORT_PIN8		PORT_DEFAULT_VALUE
#define PORT_PIN9		PORT_OUTPUT_LOW
#define PORT_PIN10		PORT_DEFAULT_VALUE
#define PORT_PIN11		PORT_DEFAULT_VALUE
#define PORT_PIN12		PORT_DEFAULT_VALUE
#define PORT_PIN13		PORT_DEFAULT_VALUE
#define PORT_PIN14		PORT_DEFAULT_VALUE
#define PORT_PIN15		PORT_DEFAULT_VALUE

/*PORT C*/

#if NUM_OF_PORTS == THREE_PORTS || NUM_OF_PORTS == FOUR_PORTS

#define PORT_PIN16		PORT_DEFAULT_VALUE
#define PORT_PIN17		PORT_DEFAULT_VALUE
#define PORT_PIN18		PORT_DEFAULT_VALUE
#define PORT_PIN19		PORT_DEFAULT_VALUE
#define PORT_PIN20		PORT_DEFAULT_VALUE
#define PORT_PIN21		PORT_DEFAULT_VALUE
#define PORT_PIN22		PORT_DEFAULT_VALUE
#define PORT_PIN23		PORT_DEFAULT_VALUE
#endif

/*PORT D*/

#if NUM_OF_PORTS == FOUR_PORTS
#define PORT_PIN24		PORT_DEFAULT_VALUE
#define PORT_PIN25		PORT_DEFAULT_VALUE
#define PORT_PIN26		PORT_DEFAULT_VALUE
#define PORT_PIN27		PORT_DEFAULT_VALUE
#define PORT_PIN28		PORT_DEFAULT_VALUE
#define PORT_PIN29		PORT_DEFAULT_VALUE
#define PPORT_PIN30		PORT_DEFAULT_VALUE
#define PORT_PIN31		PORT_DEFAULT_VALUE
#endif



/*****MACROS For Setting The Registers on Initialaization Function ****/
#define PORT_LOW 0
#define PORT_HIGH 1



/************************************************************************/
/*               FOR THE POST COMPILING CODE                            */
/************************************************************************/

/************************************************************************/
/*           USER BLOCK TO INTERFACE WITH THE PINS                      */
/************************************************************************/




/****************MACROS For Pin Options**********************************/
/*
OPTIONS:
			1- PORT_enuInput_PU
			2- PORT_enuInput_HI
			3- PORT_enuOutPut_HIGH
			4- PORT_enuOUTPUT_LOW
			5- PORT_enuOUTPUT_DEFAULT
*/


typedef enum 
{
	PORT_enuInput_PU,
	PORT_enuInput_HI,
	PORT_enuOutPut_HIGH,
	PORT_enuOUTPUT_LOW,
	PORT_enuOUTPUT_DEFAULT
	
	}PORT_enuPinConfig_t;




/******************MACROS For Num Of Pins Per Each Set Of Ports**********************/
#if NUM_OF_PORTS == FOUR_PORTS
	#define NUM_OF_PINS		32
#elif NUM_OF_PORTS == THREE_PORTS
	#define NUM_OF_PINS		24
#elif NUM_OF_PORTS == TWO_PORTS
	#define NUM_OF_PINS		16
#endif

/********************** The Initialization Function ********************/

/**
 *@brief  : Function to Configure the whole Ports at one time to be INPUT or OUTPUT port.
 *@param  : void.
 *@return : void.                                                                      
 */
void PORT_vidInit();

#endif /* PORT_CONFIG_H_ */