/******************************************************************
					Author  : Shirehan Medhat Abdeldsalam Ali
					Date    : 3-12-2023
					Driver  : 
					File    : Bitmath.h
					Version : (2)
*****************************************************************/

#ifndef MISC_INC_UTILS_H_
#define MISC_INC_UTILS_H_

#define Set_Bit(Var,BitNo)   	Var |= (1<<BitNo)|Var
#define Clr_Bit(Var,BitNo)   	Var &= (~(1<<BitNo))
#define Toggle_Bit(Var,BitNo)	Var ^=(1<<BitNo))
#define Get_Bit(Var,BitNo)   	((Var>>BitNo)&0x01)

#endif /* MISC_INC_UTILS_H_ */
