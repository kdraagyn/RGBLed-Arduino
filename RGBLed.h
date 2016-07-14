/*
 *	July 13, 2016
 *	Basic control of a RGB 4 pin LED
 *
 */

#ifndef RGB_LED_H
#define RGB_LED_H

class RGBLed {
public:
	// set color based on 3 8-bit values
	void setColor( uint8_t, uint8_t, uint8_t );

	// set the color based on hex value
	void setColor( uint32_t );
private:
	uint8_t redPin;
	uint8_t greenPin;
	uint8_t bluePin
}

#endif
