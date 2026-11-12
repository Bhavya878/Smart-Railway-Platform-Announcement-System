//led.h

#include "types.h"
#include "train_database.h"

#ifndef __LED_H__
#define __LED_H__

void InitLED(void);

void UpdateTrainStatusLED(u8 hour,u8 min,TB *train);

#endif

