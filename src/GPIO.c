//driver header file
#include "GPIO.h"

//initialises pins
void GPIO_init(void)
{
	
	//DEMO hardware
	#if(HW==DEMO)
	//matrix columns as inputs
	DDRS_DDRS4 = 0;
	DDRS_DDRS5 = 0;
	DDRS_DDRS6 = 0;
	DDRADL_DDRADL4 = 0;
	DDRADL_DDRADL5 = 0;
	DDRADL_DDRADL6 = 0;
	DIENADL_DIENADL4 = 1;
	DIENADL_DIENADL5 = 1;
	DIENADL_DIENADL6 = 1;
	//pull ups for matrix inputs
	PPSS_PPSS4 = 0;
	PPSS_PPSS5 = 0;
	PPSS_PPSS6 = 0;
	PERS_PERS4 = 0;
	PERS_PERS5 = 0;
	PERS_PERS6 = 0;
	PPSADL_PPSADL4 = 0;
	PPSADL_PPSADL5 = 0;
	PPSADL_PPSADL6 = 0;
	PERADL_PERADL4 = 0;
	PERADL_PERADL5 = 0;
	PERADL_PERADL6 = 0;
	//matrix rows as outputs
	DDRS_DDRS0 = 1;
	DDRS_DDRS1 = 1;
	DDRS_DDRS2 = 1;
	DDRADL_DDRADL0 = 1;
	DDRADL_DDRADL1 = 1;
	DDRADL_DDRADL2 = 1;
	DDRADL_DDRADL3 = 1;
	//VBATSW as outputs set to 1
	DDRP_DDRP6 = 1;
	PTP_PTP6 = 1;
	DDRT_DDRT6 = 1;
	PTT_PTT6 = 1;
	//LED indicators as outputs
	DDRP_DDRP2 = 1;
	DDRP_DDRP4 = 1;
	DDRP_DDRP6 = 1;
	DDRP_DDRP3 = 1;
	DDRP_DDRP5 = 1;
	DDRT_DDRT2 = 1;
	DDRT_DDRT4 = 1;
	DDRT_DDRT6 = 1;
	DDRT_DDRT3 = 1;
	DDRT_DDRT5 = 1;
	#endif
	
	//REF hardware
	#if(HW==REF)
	//matrix columns as inputs
	DDRS_DDRS3 = 0;
	DDRS_DDRS7 = 0;
	DDRT_DDRT0 = 0;
	DDRADL_DDRADL4 = 0;
	DDRADL_DDRADL5 = 0;
	DDRADL_DDRADL6 = 0;
	DIENADL_DIENADL4 = 1;
	DIENADL_DIENADL5 = 1;
	DIENADL_DIENADL6 = 1;
	//pull ups for matrix inputs
	PPSS_PPSS3 = 0;
	PPSS_PPSS7 = 0;
	PPST_PPST0 = 0;
	PERS_PERS3 = 0;
	PERS_PERS7 = 0;
	PERT_PERT0 = 0;
	PPSADL_PPSADL4 = 0;
	PPSADL_PPSADL5 = 0;
	PPSADL_PPSADL6 = 0;
	PERADL_PERADL4 = 0;
	PERADL_PERADL5 = 0;
	PERADL_PERADL6 = 0;
	//matrix rows as outputs
	DDRS_DDRS0 = 1;
	DDRS_DDRS1 = 1;
	DDRS_DDRS2 = 1;
	DDRADL_DDRADL0 = 1;
	DDRADL_DDRADL1 = 1;
	DDRADL_DDRADL2 = 1;
	DDRADL_DDRADL3 = 1;
	//VBATSW as outputs set to 1
	DDRP_DDRP6 = 1;
	PTP_PTP6 = 1;
	DDRT_DDRT7 = 1;
	PTT_PTT7 = 1;
	//LED indicators as outputs
	DDRADH_DDRADH0 = 1;
	DDRADH_DDRADH1 = 1;
	DDRP_DDRP0 = 1;
	DDRP_DDRP2 = 1;
	DDRP_DDRP4 = 1;
	DDRP_DDRP5 = 1;
	DDRT_DDRT2 = 1;
	DDRT_DDRT3 = 1;
	#endif
}
