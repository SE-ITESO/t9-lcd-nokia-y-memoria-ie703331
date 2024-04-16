/**
	\file 
	\brief 
		This is a starter file to use the Nokia 5510 LCD. 
		The LCD is connected as follows:
		RST-PDT5
		CE-PTD0
		DC-PTD4
		DIN-PTD2
		CLK-PTD1
	\author J. Luis Pizano Escalante, luispizano@iteso.mx
	\date	19/09/2019
	\todo
	    The SPI device driver needs to be completed.
 */

 

#include "LCD_nokia.h"
#include "LCD_nokia_images.h"
#include "stdint.h"
#include "SPI.h"
#include "Delay.h"

#define NUMBER_OF_IMAGES 5u

static uint8_t image_counter = 0;


int main(void)
{


	SPI_config();

	LCD_nokia_init(); /*! Configuration function for the LCD */
	LCD_store_images();

	for(;;) {

		LCD_nokia_clear();/*! It clears the information printed in the LCD*/
		LCD_image_print(image_counter);

        if (++image_counter > NUMBER_OF_IMAGES)
        {
        	image_counter = 0;
        }
		delay(65000);
	}
	
	return 0;
}

