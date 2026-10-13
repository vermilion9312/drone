/*
 * app.c
 *
 *  Created on: 2026-10-14
 *      Author: LeeJooHo
 */

#include "app.h"
#include <main.h>

void App_Init(void)
{
    // Initialize application
}

void App_Update(void)
{
    HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
    HAL_Delay(500);
}