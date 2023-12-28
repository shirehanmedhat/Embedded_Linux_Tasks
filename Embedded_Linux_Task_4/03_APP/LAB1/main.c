/******************************************************************
Author  : Shirehan Medhat Abdeldsalam Ali
Date    : 26-1-2023
Driver  : DIO
Version : (1)
*****************************************************************/

	#define F_CPU 1000000UL
	#include <util/delay.h>
	#include "../../01_MCAL/00_DIO/DIO.h"
	#include "../../01_MCAL/01_PORT/PORT.h"
	#include "../../01_MCAL/01_PORT/PORT_Config.h"


	int main(void)
	{
		// Replace with your application code
		//Set PA1 , PB1 as outputs
		
		PORT_vidInit();
		
		while (1)
		{
			//LED PA1 is on for 1000ms
			DIO_enumSetPin (PORTC_Choice , PIN4 , HIGH);
			_delay_ms(1000);
			//DIO_enumSetPin (PORTC_Choice , PIN4 , LOW);
			//DIO_enumSetPin (PORTD_Choice , PIN1 , HIGH);
			//_delay_ms(1000);
			//DIO_enumSetPin (PORTD_Choice , PIN1 , LOW);
		}
			return 0;

	}
