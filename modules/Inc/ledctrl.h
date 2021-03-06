#ifndef _LEDCTRL_INCLUDED
#define _LEDCTRL_INCLUDED
//-------------------------MODULES USED-------------------------------------
#include <stdint.h>
#include <stdbool.h>

//-------------------------DEFINITIONS AND MACORS---------------------------
#define LEDCTRL_OK 0
#define LEDCTRL_ERR -1


//-------------------------TYPEDEFS AND STRUCTURES--------------------------



//-------------------------EXPORTED VARIABLES ------------------------------
#ifndef _LEDCTRL_C_SRC



#endif



//-------------------------EXPORTED FUNCTIONS-------------------------------
int32_t ledctrl_blinkled(uint32_t num_blink, uint32_t ms_blink_duration);
int32_t ledctrl_onof(bool led_on);


#endif
