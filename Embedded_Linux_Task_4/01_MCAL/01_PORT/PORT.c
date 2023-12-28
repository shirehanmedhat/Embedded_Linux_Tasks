/******************************************************************
Author  : Shirehan Medhat Abdeldsalam Ali
Date    : 3-12-2023
Driver  : PORT
File    : PORT.c
Version : (1)
*****************************************************************/
/**************Include Header Files Of The driver**************/

#include "PORT_Config.h"
#include "PORT.h"

/********************Exern For The Array Filled By The User With The PIN Status*******************/

extern PORT_enuPinConfig_t POTR_PinCfg [NUM_OF_PINS];

/************************************************************************************************/

/**
*@brief  : Function to Configure the whole Ports at one time to be INPUT or OUTPUT port.
*@param  : void.
*@return : void.
*/

void PORT_vidInit()
{
	/*Counter For The Loop In Post-Compile*/
	u8 i =0;
	/*For The Pre-Compile */
	#if ( CONFIGURATION_MODE == PRE_COMPILE_CONFIG )
	{
		
		/*PIN0 Configuration*/
		#if PORT_PIN0 == PORT_INPUT_PU
		#define PIN0_DIR   PORT_LOW
		#define PIN0_PORT  PORT_HIGH
		#elif PORT_PIN0 == PORT_INPUT_HI || PORT_PIN0 == PORT_DEFAULT_VALUE
		#define PIN0_DIR   PORT_LOW
		#define PIN0_PORT  PORT_LOW
		#elif PORT_PIN0 == PORT_OUTPUT_HIGH
		#define PIN0_DIR   PORT_HIGH
		#define PIN0_PORT  PORT_HIGH
		#elif PORT_PIN0 == PORT_OUTPUT_LOW
		#define PIN0_DIR   PORT_HIGH
		#define PIN0_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN1 Configuration*/
		#if PORT_PIN1 == PORT_INPUT_PU
		#define PIN1_DIR   PORT_LOW
		#define PIN1_PORT  PORT_HIGH
		#elif PORT_PIN1 == PORT_INPUT_HI || PORT_PIN1 == PORT_DEFAULT_VALUE
		#define PIN1_DIR   PORT_LOW
		#define PIN1_PORT  PORT_LOW
		#elif PORT_PIN1 == PORT_OUTPUT_HIGH
		#define PIN1_DIR   PORT_HIGH
		#define PIN1_PORT  PORT_HIGH
		#elif PORT_PIN1 == PORT_OUTPUT_LOW
		#define PIN1_DIR   PORT_HIGH
		#define PIN1_PORT  PORT_LOW
		#elif  PORT_PIN1 == PORT_DEFAULT_VALUE
		#define PIN1_DIR   PORT_LOW
		#define PIN1_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN2 Configuration*/
		#if PORT_PIN2 == PORT_INPUT_PU
		#define PIN2_DIR   PORT_LOW
		#define PIN2_PORT  PORT_HIGH
		#elif PORT_PIN2 == PORT_INPUT_HI || PORT_PIN2 == PORT_DEFAULT_VALUE
		#define PIN2_DIR   PORT_LOW
		#define PIN2_PORT  PORT_LOW
		#elif PORT_PIN2 == PORT_OUTPUT_HIGH
		#define PIN2_DIR   PORT_HIGH
		#define PIN2_PORT  PORT_HIGH
		#elif PORT_PIN2 == PORT_OUTPUT_LOW
		#define PIN2_DIR   PORT_HIGH
		#define PIN2_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN3 Configuration*/
		#if PORT_PIN3 == PORT_INPUT_PU
		#define PIN3_DIR   PORT_LOW
		#define PIN3_PORT  PORT_HIGH
		#elif PORT_PIN3 == PORT_INPUT_HI || PORT_PIN3 == PORT_DEFAULT_VALUE
		#define PIN3_DIR   PORT_LOW
		#define PIN3_PORT  PORT_LOW
		#elif PORT_PIN3 == PORT_OUTPUT_HIGH
		#define PIN3_DIR   PORT_HIGH
		#define PIN3_PORT  PORT_HIGH
		#elif PORT_PIN3 == PORT_OUTPUT_LOW
		#define PIN3_DIR   PORT_HIGH
		#define PIN3_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN4 Configuration*/
		#if PORT_PIN4 == PORT_INPUT_PU
		#define PIN4_DIR   PORT_LOW
		#define PIN4_PORT  PORT_HIGH
		#elif PORT_PIN4 == PORT_INPUT_HI || PORT_PIN4 == PORT_DEFAULT_VALUE
		#define PIN4_DIR   PORT_LOW
		#define PIN4_PORT  PORT_LOW
		#elif PORT_PIN4 == PORT_OUTPUT_HIGH
		#define PIN4_DIR   PORT_HIGH
		#define PIN4_PORT  PORT_HIGH
		#elif PORT_PIN4 == PORT_OUTPUT_LOW
		#define PIN4_DIR   PORT_HIGH
		#define PIN4_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN5 Configuration*/
		#if PORT_PIN5 == PORT_INPUT_PU
		#define PIN5_DIR   PORT_LOW
		#define PIN5_PORT  PORT_HIGH
		#elif PORT_PIN5 == PORT_INPUT_HI || PORT_PIN5 == PORT_DEFAULT_VALUE
		#define PIN5_DIR   PORT_LOW
		#define PIN5_PORT  PORT_LOW
		#elif PORT_PIN5 == PORT_OUTPUT_HIGH
		#define PIN5_DIR   PORT_HIGH
		#define PIN5_PORT  PORT_HIGH
		#elif PORT_PIN5 == PORT_OUTPUT_LOW
		#define PIN5_DIR   PORT_HIGH
		#define PIN5_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN6 Configuration*/
		#if PORT_PIN6 == PORT_INPUT_PU
		#define PIN6_DIR   PORT_LOW
		#define PIN6_PORT  PORT_HIGH
		#elif PORT_PIN6 == PORT_INPUT_HI || PORT_PIN6 == PORT_DEFAULT_VALUE
		#define PIN6_DIR   PORT_LOW
		#define PIN6_PORT  PORT_LOW
		#elif PORT_PIN6 == PORT_OUTPUT_HIGH
		#define PIN6_DIR   PORT_HIGH
		#define PIN6_PORT  PORT_HIGH
		#elif PORT_PIN6 == PORT_OUTPUT_LOW
		#define PIN6_DIR   PORT_HIGH
		#define PIN6_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN7 Configuration*/
		#if PORT_PIN7 == PORT_INPUT_PU
		#define PIN7_DIR   PORT_LOW
		#define PIN7_PORT  PORT_HIGH
		#elif PORT_PIN7 == PORT_INPUT_HI || PORT_PIN7 == PORT_DEFAULT_VALUE
		#define PIN7_DIR   PORT_LOW
		#define PIN7_PORT  PORT_LOW
		#elif PORT_PIN7 == PORT_OUTPUT_HIGH
		#define PIN7_DIR   PORT_HIGH
		#define PIN7_PORT  PORT_HIGH
		#elif PORT_PIN7 == PORT_OUTPUT_LOW
		#define PIN7_DIR   PORT_HIGH
		#define PIN7_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN8 Configuration*/
		#if PORT_PIN8 == PORT_INPUT_PU
		#define PIN8_DIR   PORT_LOW
		#define PIN8_PORT  PORT_HIGH
		#elif PORT_PIN8 == PORT_INPUT_HI || PORT_PIN8 == PORT_DEFAULT_VALUE
		#define PIN8_DIR   PORT_LOW
		#define PIN8_PORT  PORT_LOW
		#elif PORT_PIN8 == PORT_OUTPUT_HIGH
		#define PIN8_DIR   PORT_HIGH
		#define PIN8_PORT  PORT_HIGH
		#elif PORT_PIN8 == PORT_OUTPUT_LOW
		#define PIN8_DIR   PORT_HIGH
		#define PIN8_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN9 Configuration*/
		#if PORT_PIN9 == PORT_INPUT_PU
		#define PIN9_DIR   PORT_LOW
		#define PIN9_PORT  PORT_HIGH
		#elif PORT_PIN9 == PORT_INPUT_HI || PORT_PIN9 == PORT_DEFAULT_VALUE
		#define PIN9_DIR   PORT_LOW
		#define PIN9_PORT  PORT_LOW
		#elif PORT_PIN9 == PORT_OUTPUT_HIGH
		#define PIN9_DIR   PORT_HIGH
		#define PIN9_PORT  PORT_HIGH
		#elif PORT_PIN9 == PORT_OUTPUT_LOW
		#define PIN9_DIR   PORT_HIGH
		#define PIN9_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN10 Configuration*/
		#if PORT_PIN10 == PORT_INPUT_PU
		#define PIN10_DIR   PORT_LOW
		#define PIN10_PORT  PORT_HIGH
		#elif PORT_PIN10 == PORT_INPUT_HI || PORT_PIN10 == PORT_DEFAULT_VALUE
		#define PIN10_DIR   PORT_LOW
		#define PIN10_PORT  PORT_LOW
		#elif PORT_PIN10 == PORT_OUTPUT_HIGH
		#define PIN10_DIR   PORT_HIGH
		#define PIN10_PORT  PORT_HIGH
		#elif PORT_PIN10 == PORT_OUTPUT_LOW
		#define PIN10_DIR   PORT_HIGH
		#define PIN10_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN11 Configuration*/
		#if PORT_PIN11 == PORT_INPUT_PU
		#define PIN11_DIR   PORT_LOW
		#define PIN11_PORT  PORT_HIGH
		#elif PORT_PIN11 == PORT_INPUT_HI || PORT_PIN11 == PORT_DEFAULT_VALUE
		#define PIN11_DIR   PORT_LOW
		#define PIN11_PORT  PORT_LOW
		#elif PORT_PIN11 == PORT_OUTPUT_HIGH
		#define PIN11_DIR   PORT_HIGH
		#define PIN11_PORT  PORT_HIGH
		#elif PORT_PIN11 == PORT_OUTPUT_LOW
		#define PIN11_DIR   PORT_HIGH
		#define PIN11_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN12 Configuration*/
		#if PORT_PIN12 == PORT_INPUT_PU
		#define PIN12_DIR   PORT_LOW
		#define PIN12_PORT  PORT_HIGH
		#elif PORT_PIN12 == PORT_INPUT_HI || PORT_PIN12 == PORT_DEFAULT_VALUE
		#define PIN12_DIR   PORT_LOW
		#define PIN12_PORT  PORT_LOW
		#elif PORT_PIN12 == PORT_OUTPUT_HIGH
		#define PIN12_DIR   PORT_HIGH
		#define PIN12_PORT  PORT_HIGH
		#elif PORT_PIN12 == PORT_OUTPUT_LOW
		#define PIN12_DIR   PORT_HIGH
		#define PIN12_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN13 Configuration*/
		#if PORT_PIN13 == PORT_INPUT_PU
		#define PIN13_DIR   PORT_LOW
		#define PIN13_PORT  PORT_HIGH
		#elif PORT_PIN13 == PORT_INPUT_HI || PORT_PIN13 == PORT_DEFAULT_VALUE
		#define PIN13_DIR   PORT_LOW
		#define PIN13_PORT  PORT_LOW
		#elif PORT_PIN13 == PORT_OUTPUT_HIGH
		#define PIN13_DIR   PORT_HIGH
		#define PIN13_PORT  PORT_HIGH
		#elif PORT_PIN13 == PORT_OUTPUT_LOW
		#define PIN13_DIR   PORT_HIGH
		#define PIN13_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN14 Configuration*/
		#if PORT_PIN14 == PORT_INPUT_PU
		#define PIN14_DIR   PORT_LOW
		#define PIN14_PORT  PORT_HIGH
		#elif PORT_PIN14 == PORT_INPUT_HI || PORT_PIN14 == PORT_DEFAULT_VALUE
		#define PIN14_DIR   PORT_LOW
		#define PIN14_PORT  PORT_LOW
		#elif PORT_PIN14 == PORT_OUTPUT_HIGH
		#define PIN14_DIR   PORT_HIGH
		#define PIN14_PORT  PORT_HIGH
		#elif PORT_PIN14 == PORT_OUTPUT_LOW
		#define PIN14_DIR   PORT_HIGH
		#define PIN14_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN15 Configuration*/
		#if PORT_PIN15 == PORT_INPUT_PU
		#define PIN15_DIR   PORT_LOW
		#define PIN15_PORT  PORT_HIGH
		#elif PORT_PIN15 == PORT_INPUT_HI || PORT_PIN15 == PORT_DEFAULT_VALUE
		#define PIN15_DIR   PORT_LOW
		#define PIN15_PORT  PORT_LOW
		#elif PORT_PIN15 == PORT_OUTPUT_HIGH
		#define PIN15_DIR   PORT_HIGH
		#define PIN15_PORT  PORT_HIGH
		#elif PORT_PIN15 == PORT_OUTPUT_LOW
		#define PIN15_DIR   PORT_HIGH
		#define PIN15_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN16 Configuration*/
		#if PORT_PIN16 == PORT_INPUT_PU
		#define PIN16_DIR   PORT_LOW
		#define PIN16_PORT  PORT_HIGH
		#elif PORT_PIN16 == PORT_INPUT_HI || PORT_PIN16 == PORT_DEFAULT_VALUE
		#define PIN16_DIR   PORT_LOW
		#define PIN16_PORT  PORT_LOW
		#elif PORT_PIN16 == PORT_OUTPUT_HIGH
		#define PIN16_DIR   PORT_HIGH
		#define PIN16_PORT  PORT_HIGH
		#elif PORT_PIN16 == PORT_OUTPUT_LOW
		#define PIN16_DIR   PORT_HIGH
		#define PIN16_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN17 Configuration*/
		#if PORT_PIN17 == PORT_INPUT_PU
		#define PIN17_DIR   PORT_LOW
		#define PIN17_PORT  PORT_HIGH
		#elif PORT_PIN17 == PORT_INPUT_HI ||  PORT_PIN17 == PORT_DEFAULT_VALUE
		#define PIN17_DIR   PORT_LOW
		#define PIN17_PORT  PORT_LOW
		#elif PORT_PIN17 == PORT_OUTPUT_HIGH
		#define PIN17_DIR   PORT_HIGH
		#define PIN17_PORT  PORT_HIGH
		#elif PORT_PIN17 == PORT_OUTPUT_LOW
		#define PIN17_DIR   PORT_HIGH
		#define PIN17_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN18 Configuration*/
		#if PORT_PIN18 == PORT_INPUT_PU
		#define PIN18_DIR   PORT_LOW
		#define PIN18_PORT  PORT_HIGH
		#elif PORT_PIN18 == PORT_INPUT_HI || PORT_PIN18 == PORT_DEFAULT_VALUE
		#define PIN18_DIR   PORT_LOW
		#define PIN18_PORT  PORT_LOW
		#elif PORT_PIN18 == PORT_OUTPUT_HIGH
		#define PIN18_DIR   PORT_HIGH
		#define PIN18_PORT  PORT_HIGH
		#elif PORT_PIN18 == PORT_OUTPUT_LOW
		#define PIN18_DIR   PORT_HIGH
		#define PIN18_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN19 Configuration*/
		#if PORT_PIN19 == PORT_INPUT_PU
		#define PIN19_DIR   PORT_LOW
		#define PIN19_PORT  PORT_HIGH
		#elif PORT_PIN19 == PORT_INPUT_HI || PORT_PIN19 == PORT_DEFAULT_VALUE
		#define PIN19_DIR   PORT_LOW
		#define PIN19_PORT  PORT_LOW
		#elif PORT_PIN19 == PORT_OUTPUT_HIGH
		#define PIN19_DIR   PORT_HIGH
		#define PIN19_PORT  PORT_HIGH
		#elif PORT_PIN19 == PORT_OUTPUT_LOW
		#define PIN19_DIR   PORT_HIGH
		#define PIN19_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN20 Configuration*/
		#if PORT_PIN20 == PORT_INPUT_PU
		#define PIN20_DIR   PORT_LOW
		#define PIN20_PORT  PORT_HIGH
		#elif PORT_PIN20 == PORT_INPUT_HI || PORT_PIN20 == PORT_DEFAULT_VALUE
		#define PIN20_DIR   PORT_LOW
		#define PIN20_PORT  PORT_LOW
		#elif PORT_PIN20 == PORT_OUTPUT_HIGH
		#define PIN20_DIR   PORT_HIGH
		#define PIN20_PORT  PORT_HIGH
		#elif PORT_PIN20 == PORT_OUTPUT_LOW
		#define PIN20_DIR   PORT_HIGH
		#define PIN20_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN21 Configuration*/
		#if PORT_PIN21 == PORT_INPUT_PU
		#define PIN21_DIR   PORT_LOW
		#define PIN21_PORT  PORT_HIGH
		#elif PORT_PIN21 == PORT_INPUT_HI || PORT_PIN21 == PORT_DEFAULT_VALUE
		#define PIN21_DIR   PORT_LOW
		#define PIN21_PORT  PORT_LOW
		#elif PORT_PIN21 == PORT_OUTPUT_HIGH
		#define PIN21_DIR   PORT_HIGH
		#define PIN21_PORT  PORT_HIGH
		#elif PORT_PIN21 == PORT_OUTPUT_LOW
		#define PIN21_DIR   PORT_HIGH
		#define PIN21_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN22 Configuration*/
		#if PORT_PIN22 == PORT_INPUT_PU
		#define PIN22_DIR   PORT_LOW
		#define PIN22_PORT  PORT_HIGH
		#elif PORT_PIN22 == PORT_INPUT_HI || PORT_PIN22 == PORT_DEFAULT_VALUE
		#define PIN22_DIR   PORT_LOW
		#define PIN22_PORT  PORT_LOW
		#elif PORT_PIN22 == PORT_OUTPUT_HIGH
		#define PIN22_DIR   PORT_HIGH
		#define PIN22_PORT  PORT_HIGH
		#elif PORT_PIN22 == PORT_OUTPUT_LOW
		#define PIN22_DIR   PORT_HIGH
		#define PIN22_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN23 Configuration*/
		#if PORT_PIN23 == PORT_INPUT_PU
		#define PIN23_DIR   PORT_LOW
		#define PIN23_PORT  PORT_HIGH
		#elif PORT_PIN23 == PORT_INPUT_HI ||  PORT_PIN23 == PORT_DEFAULT_VALUE
		#define PIN23_DIR   PORT_LOW
		#define PIN23_PORT  PORT_LOW
		#elif PORT_PIN23 == PORT_OUTPUT_HIGH
		#define PIN23_DIR   PORT_HIGH
		#define PIN23_PORT  PORT_HIGH
		#elif PORT_PIN23 == PORT_OUTPUT_LOW
		#define PIN23_DIR   PORT_HIGH
		#define PIN23_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN24 Configuration*/
		#if PORT_PIN24 == PORT_INPUT_PU
		#define PIN24_DIR   PORT_LOW
		#define PIN24_PORT  PORT_HIGH
		#elif PORT_PIN24 == PORT_INPUT_HI || PORT_PIN24 == PORT_DEFAULT_VALUE
		#define PIN24_DIR   PORT_LOW
		#define PIN24_PORT  PORT_LOW
		#elif PORT_PIN24 == PORT_OUTPUT_HIGH
		#define PIN24_DIR   PORT_HIGH
		#define PIN24_PORT  PORT_HIGH
		#elif PORT_PIN24 == PORT_OUTPUT_LOW
		#define PIN24_DIR   PORT_HIGH
		#define PIN24_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN25 Configuration*/
		#if PORT_PIN25 == PORT_INPUT_PU
		#define PIN25_DIR   PORT_LOW
		#define PIN25_PORT  PORT_HIGH
		#elif PORT_PIN25 == PORT_INPUT_HI || PORT_PIN25 == PORT_DEFAULT_VALUE
		#define PIN25_DIR   PORT_LOW
		#define PIN25_PORT  PORT_LOW
		#elif PORT_PIN25 == PORT_OUTPUT_HIGH
		#define PIN25_DIR   PORT_HIGH
		#define PIN25_PORT  PORT_HIGH
		#elif PORT_PIN25 == PORT_OUTPUT_LOW
		#define PIN25_DIR   PORT_HIGH
		#define PIN25_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN26 Configuration*/
		#if PORT_PIN26 == PORT_INPUT_PU
		#define PIN26_DIR   PORT_LOW
		#define PIN26_PORT  PORT_HIGH
		#elif PORT_PIN26 == PORT_INPUT_HI || PORT_PIN26 == PORT_DEFAULT_VALUE
		#define PIN26_DIR   PORT_LOW
		#define PIN26_PORT  PORT_LOW
		#elif PORT_PIN26 == PORT_OUTPUT_HIGH
		#define PIN26_DIR   PORT_HIGH
		#define PIN26_PORT  PORT_HIGH
		#elif PORT_PIN26 == PORT_OUTPUT_LOW
		#define PIN26_DIR   PORT_HIGH
		#define PIN26_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN27 Configuration*/
		#if PORT_PIN27 == PORT_INPUT_PU
		#define PIN27_DIR   PORT_LOW
		#define PIN27_PORT  PORT_HIGH
		#elif PORT_PIN27 == PORT_INPUT_HI || PORT_PIN27 == PORT_DEFAULT_VALUE
		#define PIN27_DIR   PORT_LOW
		#define PIN27_PORT  PORT_LOW
		#elif PORT_PIN27 == PORT_OUTPUT_HIGH
		#define PIN27_DIR   PORT_HIGH
		#define PIN27_PORT  PORT_HIGH
		#elif PORT_PIN27 == PORT_OUTPUT_LOW
		#define PIN27_DIR   PORT_HIGH
		#define PIN27_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN28 Configuration*/
		#if PORT_PIN28 == PORT_INPUT_PU
		#define PIN28_DIR   PORT_LOW
		#define PIN28_PORT  PORT_HIGH
		#elif PORT_PIN28 == PORT_INPUT_HI || PORT_PIN28 == PORT_DEFAULT_VALUE
		#define PIN28_DIR   PORT_LOW
		#define PIN28_PORT  PORT_LOW
		#elif PORT_PIN28 == PORT_OUTPUT_HIGH
		#define PIN28_DIR   PORT_HIGH
		#define PIN28_PORT  PORT_HIGH
		#elif PORT_PIN28 == PORT_OUTPUT_LOW
		#define PIN28_DIR   PORT_HIGH
		#define PIN28_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN29 Configuration*/
		#if PORT_PIN29 == PORT_INPUT_PU
		#define PIN29_DIR   PORT_LOW
		#define PIN29_PORT  PORT_HIGH
		#elif PORT_PIN29 == PORT_INPUT_HI || PORT_PIN29 == PORT_DEFAULT_VALUE
		#define PIN29_DIR   PORT_LOW
		#define PIN29_PORT  PORT_LOW
		#elif PORT_PIN29 == PORT_OUTPUT_HIGH
		#define PIN29_DIR   PORT_HIGH
		#define PIN29_PORT  PORT_HIGH
		#elif PORT_PIN29 == PORT_OUTPUT_LOW
		#define PIN29_DIR   PORT_HIGH
		#define PIN29_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN30 Configuration*/
		#if PORT_PIN30 == PORT_INPUT_PU
		#define PIN30_DIR   PORT_LOW
		#define PIN30_PORT  PORT_HIGH
		#elif PORT_PIN30 == PORT_INPUT_HI || PORT_PIN30 == PORT_DEFAULT_VALUE
		#define PIN30_DIR   PORT_LOW
		#define PIN30_PORT  PORT_LOW
		#elif PORT_PIN30 == PORT_OUTPUT_HIGH
		#define PIN30_DIR   PORT_HIGH
		#define PIN30_PORT  PORT_HIGH
		#elif PORT_PIN30 == PORT_OUTPUT_LOW
		#define PIN30_DIR   PORT_HIGH
		#define PIN30_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		
		/*PIN31 Configuration*/
		#if PORT_PIN31 == PORT_INPUT_PU
		#define PIN31_DIR   PORT_LOW
		#define PIN31_PORT  PORT_HIGH
		#elif PORT_PIN31 == PORT_INPUT_HI || PORT_PIN31 == PORT_DEFAULT_VALUE
		#define PIN31_DIR   PORT_LOW
		#define PIN31_PORT  PORT_LOW
		#elif PORT_PIN31 == PORT_OUTPUT_HIGH
		#define PIN31_DIR   PORT_HIGH
		#define PIN31_PORT  PORT_HIGH
		#elif PORT_PIN31 == PORT_OUTPUT_LOW
		#define PIN31_DIR   PORT_HIGH
		#define PIN31_PORT  PORT_LOW
		#else
		#error "Invalid Configuration"
		#endif
		/*Concat The bits in Registers*/
		DDRA = CONCAT(
		PIN7_DIR,
		PIN6_DIR,
		PIN5_DIR,
		PIN4_DIR,
		PIN3_DIR,
		PIN2_DIR,
		PIN1_DIR,
		PIN0_DIR
		
		);
		
		DDRB = CONCAT(
		PIN15_DIR,
		PIN14_DIR,
		PIN13_DIR,
		PIN12_DIR,
		PIN11_DIR,
		PIN10_DIR,
		PIN9_DIR,
		PIN8_DIR

		);
		
		
		PORTA = CONCAT(
		PIN7_PORT,
		PIN6_PORT,
		PIN5_PORT,
		PIN4_PORT,
		PIN3_PORT,
		PIN2_PORT,
		PIN1_PORT,
		PIN0_PORT

		);


		PORTB = CONCAT(
		PIN15_PORT,
		PIN14_PORT,
		PIN13_PORT,
		PIN12_PORT,
		PIN11_PORT,
		PIN10_PORT,
		PIN9_PORT,
		PIN8_PORT

		);
		
		
		#if NUM_OF_PORTS == THREE_PORTS || NUM_OF_PORTS == FOUR_PORTS
		DDRC = CONCAT(
		PIN23_DIR,
		PIN22_DIR,
		PIN21_DIR,
		PIN20_DIR,
		PIN19_DIR,
		PIN18_DIR,
		PIN17_DIR,
		PIN16_DIR

		);
		
		
		PORTC = CONCAT(
		PIN23_PORT,
		PIN22_PORT,
		PIN21_PORT,
		PIN20_PORT,
		PIN19_PORT,
		PIN18_PORT,
		PIN17_PORT,
		PIN16_PORT

		);

		#endif
		
		#if NUM_OF_PORTS == FOUR_PORTS
		DDRD = CONCAT(
		PIN31_DIR,
		PIN30_DIR,
		PIN29_DIR,
		PIN28_DIR,
		PIN27_DIR,
		PIN26_DIR,
		PIN25_DIR,
		PIN24_DIR

		);
		
		PORTD = CONCAT(
		PIN31_PORT,
		PIN30_PORT,
		PIN29_PORT,
		PIN28_PORT,
		PIN27_PORT,
		PIN26_PORT,
		PIN25_PORT,
		PIN24_PORT

		);
		#endif
		
	}

	
	/*For The Post-Compile */
	#elif 	(	CONFIGURATION_MODE == POST_COMPILE_CONFIG )
	{
		
		
		
		for (i=0 ; i < NUM_OF_PINS ; i++ )
		{
			/*Local Port Num = i * Num Of Pins for One Port*/
			PORT_enuPorts Loc_enuPortNum = (PORT_enuPorts)(i / (NUM_OF_PINS / NUM_OF_PORTS ) ) ;
			u8 Loc_u8PinNum = (u8)(i % (NUM_OF_PINS / NUM_OF_PORTS ) ) ;
			
			switch (Loc_enuPortNum)
			{
				case PORT_A:
				{
					switch (POTR_PinCfg [i])
					{
						case PORT_enuInput_PU:
						{
							Clr_Bit (DDRA , Loc_u8PinNum);
							Set_Bit (PORTA , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuInput_HI:
						{
							Clr_Bit (DDRA , Loc_u8PinNum);
							Clr_Bit (PORTA , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOutPut_HIGH:
						{
							Set_Bit (DDRA , Loc_u8PinNum);
							Set_Bit (PORTA , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOUTPUT_LOW:
						{
							Set_Bit (DDRA , Loc_u8PinNum);
							Clr_Bit (PORTA , Loc_u8PinNum);
							break;
						}
						default:break;
						
					}
					
					break;
					
				}
				
				
				
				case PORT_B:
				{
					switch (POTR_PinCfg [i])
					{
						case PORT_enuInput_PU:
						{
							Clr_Bit (DDRB , Loc_u8PinNum);
							Set_Bit (PORTB , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuInput_HI:
						{
							Clr_Bit (DDRB , Loc_u8PinNum);
							Clr_Bit (PORTB , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOutPut_HIGH:
						{
							Set_Bit (DDRB , Loc_u8PinNum);
							Set_Bit (PORTB , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOUTPUT_LOW:
						{
							Set_Bit (DDRB , Loc_u8PinNum);
							Clr_Bit (PORTB , Loc_u8PinNum);
							break;
						}
						default:break;
						
					}
					
					break;
					
				}
				
				
				
				case PORT_C:
				{
					switch (POTR_PinCfg [i])
					{
						case PORT_enuInput_PU:
						{
							Clr_Bit (DDRC , Loc_u8PinNum);
							Set_Bit (PORTC , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuInput_HI:
						{
							Clr_Bit (DDRC , Loc_u8PinNum);
							Clr_Bit (PORTC , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOutPut_HIGH:
						{
							Set_Bit (DDRC , Loc_u8PinNum);
							Set_Bit (PORTC , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOUTPUT_LOW:
						{
							Set_Bit (DDRC , Loc_u8PinNum);
							Clr_Bit (PORTC , Loc_u8PinNum);
							break;
						}
						default:break;
						
					}
					
					break;
					
				}
				
				
				
				
				case PORT_D:
				{
					switch (POTR_PinCfg [i])
					{
						case PORT_enuInput_PU:
						{
							Clr_Bit (DDRD , Loc_u8PinNum);
							Set_Bit (PORTD , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuInput_HI:
						{
							Clr_Bit (DDRD , Loc_u8PinNum);
							Clr_Bit (PORTD , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOutPut_HIGH:
						{
							Set_Bit (DDRD , Loc_u8PinNum);
							Set_Bit (PORTD , Loc_u8PinNum);
							break;
						}
						
						case PORT_enuOUTPUT_LOW:
						{
							Set_Bit (DDRD , Loc_u8PinNum);
							Clr_Bit (PORTD , Loc_u8PinNum);
							break;
						}
						default:break;
						
					}
					
					break;
					
				}
				
				
			}
			
			
		}
		
	}
	
	
	
	#endif
	
	
	
	
	
	
	
}
