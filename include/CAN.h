//prevent multiple inclusion
#ifndef _CAN_H_
#define _CAN_H_

//public functions
extern void CAN_init(void);
extern void CAN_send(unsigned int id, unsigned char * ptr, unsigned char cnt);

//_CAN_H_
#endif
