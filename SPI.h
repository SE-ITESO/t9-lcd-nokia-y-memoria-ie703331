/*
 * SPI.h
 *
 *  Created on: 19 jun. 2021
 *      Author: jlpe
 */

#ifndef SPI_H_
#define SPI_H_


#include "stdint.h"

#define PIN0_IDX                         0u   /*!< Pin number for pin 0 in a port */
#define PIN1_IDX                         1u   /*!< Pin number for pin 1 in a port */
#define PIN2_IDX                         2u   /*!< Pin number for pin 2 in a port */
#define PIN3_IDX                         3u   /*!< Pin number for pin 3 in a port */
#define PIN16_IDX                       16u   /*!< Pin number for pin 16 in a port */
#define PIN17_IDX                       17u   /*!< Pin number for pin 17 in a port */

#define TRANSFER_SIZE 64U     /*! Transfer dataSize */
#define TRANSFER_BAUDRATE_NOKIA 1000000U /*! Transfer baudrate - 1M */
#define TRANSFER_BAUDRATE_MEMORY 2000000U /*! Transfer baudrate - 2M */

#define IMAGE_SIZE 504



void SPI_config(void);

void SPI_nokia_led_config(void);
void SPI_memory_config(void);

void SPI_recive_byte(uint8_t data_r);


#endif /* SPI_H_ */
