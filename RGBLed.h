/*
 *	July 13, 2016
 *	Basic control of a RGB 4 pin LED
 *
 */

#ifndef RGB_LED_H
#define RGB_LED_H

#include "Arduino.h"

class RGBLed {
public:
	// initialize ( Red, Green, Blue ) pins
	RGBLed( int, int, int );

	// set color based on 3 8-bit values
	void setColor( uint8_t, uint8_t, uint8_t );

	// set the color based on hex value
	void setColor( unsigned long );
private:
	int redPin;
	int greenPin;
	int bluePin;
};

#endif
