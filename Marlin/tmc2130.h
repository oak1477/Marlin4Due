#ifndef ___tmc2130__h___
#define ___tmc2130__h___
void tmc2130_init();
void tmc2130_disable_motors();
void tmc2130_disable_motor(uint8_t motor);
void tmc2130_enable_motor(uint8_t motor);
#endif