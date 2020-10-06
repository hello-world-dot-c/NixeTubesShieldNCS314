#ifndef __ROTATEFIREWORKS_SK_H
#define __ROTATEFIREWORKS_SK_H
//#include <stdint.h>
#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

// Function prototypes
void LEDsSetup(void);
void LEDsOFF(void);
void LEDsTest(void);
void rotateFireWorks(void);
void setLEDsFromEEPROM(void);

// Externals
extern Adafruit_NeoPixel pixels;

#endif
