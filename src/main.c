/*
 * Copyright (c) 2014 - 2016, Freescale Semiconductor, Inc.
 * Copyright (c) 2016 - 2018, NXP.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY NXP "AS IS" AND ANY EXPRESSED OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL NXP OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 */

/*!
 * Description:
 * =====================================================================
 * This short project is a starting point to learn GPIO.
 * An input is polled to detect a high or low level. An output is set
 * depending on input state. If running code on the S32K14x evaluation
 * board, pressing button 0 lights up the blue LED.
 */

#include "device_registers.h"
//drivers header files
#include "PLL.h"
#include "CAN.h"
#include "TIM.h"
#include "PWM.h"
#include "GPIO.h"
#include "Watchdog.h"
#include "Port.h"

#include "APP.h"


int main(void)
{
	WDOG_disable();/* Disable Watchdog in case it is not done in startup code */
	Port_Init();
	//driver initialisations
	PLL_init();
	GPIO_init();
	TIM_init();
	PWM_init();
	CAN_init();

	//initialise main application task
	APP_init();

	//always execute main task
	for(;;){
		APP_execute100ms();
		APP_execute25ms();
		APP_execute10ms();
	}
}
