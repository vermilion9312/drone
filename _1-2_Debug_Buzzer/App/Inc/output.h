/*
 * output.h
 *
 *  Created on: 2026-10-20
 *      Author: LeeJooHo
 */

#ifndef OUTPUT_H_
#define OUTPUT_H_

#include <stdint.h>
#include <stm32f4xx.h>

typedef enum {
    OUTPUT_ACTIVE_LOW,
    OUTPUT_ACTIVE_HIGH
} OutputPolarity;

typedef struct {
    GPIO_TypeDef*  port;
    uint16_t       pin;
    OutputPolarity polarity;
} Output;

void Output_Init(Output*, GPIO_TypeDef*, uint16_t, OutputPolarity);
void Output_Toggle(Output*);

#endif /* OUTPUT_H_ */