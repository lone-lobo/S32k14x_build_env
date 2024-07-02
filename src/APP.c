//drivers header files
#include "CAN.h"
#include "TIM.h"
#include "PWM.h"
#include "GPIO.h"

//main application header file
#include "APP.h"
#include "Diag.h"


//static variables



//shared task variables


//initialise main application task
void APP_init(void)
{
	
}

//blink task
void APP_execute25ms(void)
{
	if(TIM_wait25ms()==0)
	{
		return;
	}
	// Task1_MainFunction();
	// Task2_MainFunction();


}

//always execute main task
void APP_execute100ms(void)
{
	//task is executed every 100ms
	if(TIM_wait100ms()==0)
	{
		return;
	}
	// Task1_MainFunction();
	// Task2_MainFunction();

}

void APP_execute10ms(void){

	//task is executed every 10ms
	if(TIM_wait10ms()==0){
		return;
	}

	Diag_MainFunction();


	}
