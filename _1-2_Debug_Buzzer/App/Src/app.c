/*
 * app.c
 *
 *  Created on: 2026-10-14
 *      Author: LeeJooHo
 */

#include "app.h"
#include <main.h>

void App_Init(App* this)
{
    Output_Init(&this->led, LED_1_GPIO_Port, LED_1_Pin|LED_2_Pin|LED_3_Pin, OUTPUT_ACTIVE_HIGH);
}

void App_Update(App* this)
{
    Output_Toggle(&this->led);
    HAL_Delay(100);
}