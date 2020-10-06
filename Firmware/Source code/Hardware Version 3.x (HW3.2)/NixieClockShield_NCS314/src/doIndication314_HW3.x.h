#ifndef __DOINDICATION_H
#define __DOINDICATION_H
//#include <stdint.h>
#include <Arduino.h>

// Function prototypes
void SPISetup(void);
void doIndication(void);
word doEditBlink(int pos);
word blankDigit(int pos);

// Externals
extern SPIClass SPI;

unsigned int SymbolArray[10]={1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
//unsigned int SymbolArray[10]={0xFFFE, 0xFFFD, 0xFFFB, 0xFFF7, 0xFFEF, 0xFFDF, 0xFFBF, 0xFF7F, 0xFEFF, 0xFDFF};
const unsigned long int fpsLimit = 16666ul*3;
const byte LEpin=10;

#endif
