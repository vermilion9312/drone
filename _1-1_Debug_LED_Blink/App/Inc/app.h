/*
 * app.h
 *
 *  Created on: 2026-10-14
 *      Author: LeeJooHo
 */

#ifndef APP_H_
#define APP_H_

#include <output.h>

typedef struct {
    Output led;
} App;

void App_Init(App*);
void App_Update(App*);

#endif /* APP_H_ */