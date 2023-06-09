/*
 * main.c
 *
 *  Created on: Jan 22, 2023
 *      Author: abdalla
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "RCC_interface.h"
#include "GPIO_interface.h"

#include "SEGMENT_interface.h"
#include "SEGMENT_config.h"
#include "SEGMENT_private.h"

void delay(void){
	for (u16 i=0 ; i < 1000 ; i++){
		for (u16 j=0 ; j <1000 ; j++){
			asm("NOP");
		}
	}
}


int main(){
	int x = 12;


	RCC_voidInitSystemClock();
	RCC_voidEnableClock(RCC_APB2,RCC_IOPA);

	SEGMENT_voidInit();
	x = 125;


	while(1){
		SEGMENT_voidPrintNumber(0);
		delay();
		SEGMENT_voidPrintNumber(1);
		delay();
		SEGMENT_voidPrintNumber(2);
		delay();
		SEGMENT_voidPrintNumber(3);
		delay();
		SEGMENT_voidPrintNumber(4);
		delay();
		SEGMENT_voidPrintNumber(5);
		delay();
		SEGMENT_voidPrintNumber(6);
		delay();
		SEGMENT_voidPrintNumber(7);
		delay();
		SEGMENT_voidPrintNumber(8);
		delay();
		SEGMENT_voidPrintNumber(9);
		delay();




	}


	return 0;
}
