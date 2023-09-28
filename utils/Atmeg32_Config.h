/*
 * Atmeg32_Config.h
 *
 * Created: 9/28/2023 12:50:45 PM
 *  Author: moham
 */ 


#ifndef ATMEG32_CONFIG_H_
#define ATMEG32_CONFIG_H_


/*  
 * =============================================
 *                     clock 
 * =============================================
 */
#ifndef F_CPU
#define F_CPU 8000000UL
#endif



/*  
 * =============================================
 *                  AVR header 
 * =============================================
 */

#include "./../utils/atmega32_memoryMap.h"
#include "./../utils/bitwise.h"
#include "./../utils/Platform_Types.h"
#include <util/delay.h>


#endif /* ATMEG32_CONFIG_H_ */