//driver header file
#include "Port.h"


void Port_Init (void)
{
	/*!
		 * Pins definitions
		 * ===================================================
		 *
		 * Pin number        | Function
		 * ----------------- |------------------
		 * PTD0              | GPIO [BLUE LED]
		 * PTC12             | GPIO [SW2]
		 *
		 */
		/*!
		 * Initialization
		 * ===================================================
		 */


}

#if 0

/*! Port PTD0, bit 0: FRDM EVB output to blue LED
 */
#define PTD0  0

/*! Port PTC12, bit 12: FRDM EVB input from BTN0 [SW2]
 */
#define PTC12 12


/*! -If Pad Data Input = 1 (BTN0 [SW2] pushed)
 *
 * Clear Output on port D0 (LED on)
 *
*/

if (PTC->PDIR & (1<<PTC12)) {
	PTD-> PCOR |= 1<<PTD0;
}
else {							 /* -If BTN0 was not pushed*/
	PTD-> PSOR |= 1<<PTD0;       /*		Set Output on port D0 (LED off) */
}
#endif
