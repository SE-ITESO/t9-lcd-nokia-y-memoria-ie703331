/*
 * LCD_nokia_images.h
 *
 *  Created on: 25/09/2018
 *      Author: jlpe
 */

#ifndef LCD_NOKIA_IMAGES_H_
#define LCD_NOKIA_IMAGES_H_

#include "stdint.h"
#include "LCD_nokia.h"
#include "SPI.h"
#include "fsl_dspi.h"

#define BYTE_SIZE 1u
#define ADDR_SIZE 4u
#define IMAGE_SIZE 504u

#define DATA_HIGH   0xF0000u
#define DATA_MID    0x0FF00u
#define DATA_LOW    0x000FFu

#define MEMORY_READ_COMMAND 0x03u

#define direction01 0x040000u
#define direction02 0x041000u
#define direction03 0x042000u
#define direction04 0x043000u
#define direction05 0x044000u




typedef enum
{
	IMAGE_ITESO = 0,
	IMAGE_1,
	IMAGE_2,
	IMAGE_3,
	IMAGE_4,
	IMAGE_5

}image_n_umbert;

void LCD_image_print(uint8_t image_N);

void LCD_store_images(void);

void LCD_recive_image_byte(uint8_t image_N);


#endif /* LCD_NOKIA_IMAGES_H_ */
