//prevent multiple inclusion
#ifndef _GPIO_H_
#define _GPIO_H_

//configuration: use DEMO or REF board
#define DEMO 1
#define REF  2
#define NOT_DEFINED  3

#define HW NOT_DEFINED

//public macros
#if(HW==DEMO)
	#define L_LED_INDC_02	PTP_PTP4
	#define L_LED_INDC_03	PTP_PTP5
	#define R_LED_INDC_02	PTT_PTT4
	#define R_LED_INDC_03	PTT_PTT5

	#define R_PHONE_ORANGE 	PTP_PTP3
	#define L_UNLOCK_GREEN 	R_LED_INDC_02
	#define L_LOCK_RED 		R_LED_INDC_03
	#define R_MUTE_RED		L_LED_INDC_02
	#define R_MUTE_GREEN	L_LED_INDC_03
#elif(HW==REF)
	#define L_LED_INDC_02	PTP_PTP4
	#define L_LED_INDC_03	PTP_PTP5
	#define R_LED_INDC_02	PTADH_PTADH0
	#define R_LED_INDC_03	PTADH_PTADH1

	#define R_PHONE_ORANGE 	PTP_PTP0
	#define L_UNLOCK_GREEN 	R_LED_INDC_02
	#define L_LOCK_RED 		R_LED_INDC_03
	#define R_MUTE_RED		L_LED_INDC_02
	#define R_MUTE_GREEN	L_LED_INDC_03
#endif

//public functions
extern void GPIO_init(void);

//_GPIO_H_
#endif
