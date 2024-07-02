//prevent multiple inclusion
#ifndef _PWM_H_
#define _PWM_H_

//public functions
void PWM_init(void);
void PWM_duty(unsigned char ch, unsigned char duty);

//public macros
#define L_LOCK_BACKLIGHT  1
#define R_PHONE_BACKLIGHT 2
#define L_LOCK_ORANGE     3
#define R_PHONE_MUTE	  4

//_PWM_H_
#endif
