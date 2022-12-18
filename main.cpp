/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"

#define WAIT_TIME_MS 500 
DigitalOut led1(LED1);
DigitalIn boton(PC_13);
Ticker ticker;

void funcion(){
    led1 = 0;
}

int main()
{
    while (true)
    {
        if(boton==0){
            led1=1;
            ticker.attach(&funcion, 2.0);
            thread_sleep_for(WAIT_TIME_MS);
        }
    }
}
