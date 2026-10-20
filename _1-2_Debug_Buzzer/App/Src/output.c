/*
 * output.c
 *
 *  Created on: 2026-10-20
 *      Author: LeeJooHo
 */

#include "output.h"
#include "stm32f4xx_ll_gpio.h"

void Output_Init(Output* this, GPIO_TypeDef* port, uint16_t pin, OutputPolarity polarity)
{
    *this = (Output){0};

    this->port     = port;
    this->pin      = pin;
    this->polarity = polarity;
}

void Output_Toggle(Output* this)
{
    LL_GPIO_TogglePin(this->port, this->pin);
}