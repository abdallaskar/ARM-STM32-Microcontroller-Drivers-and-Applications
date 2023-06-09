/*******************************************************************/
/* Author      : Abdalla Mahmoud 								   */
/* Data		   : 22 JAN 2022									   */
/* Version     : 1.0 V	 										   */
/* Description : SEGMENT         								   */
/*******************************************************************/

#ifndef _SEGMENT_CONFIG_H
#define _SEGMENT_CONFIG_H

/* Select port 
	Options :
			PORTA 
			PORTB
			PORTC */
#define SEGMENT_PORT    PORTA

/* Select PINS 
	Options :
			FIRST_HALF
			SECOND_HALF
						*/
#define SEGMENT_HALF    FIRST_HALF

/* Select Type 
	Options :
			COMMEN_ANODE 
			COMMEN_CATHOD
			*/
#define SEGMENT_TYPE    COMMEN_CATHOD


#endif