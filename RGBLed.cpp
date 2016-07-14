/*
 *	July 13, 2016
 *	Implements RGBLED object for controlling a 4 pin rgb led bulb.
 *
 *	Author: Keith Nygaard
 */

#include "RGBLed.h"

RGBLed::RGBLed( uint8_t redPin, uint8_t greenPin, uint8_t bluePin ) {
	this->redPin = redPin;
	this->greenPin = greenPin;
	this->bluePin = bluePin;

	pinMode( this->redPin, OUTPUT );
	pinMode( this->greenPin, OUTPUT );
	pinMode( this->bluePin, OUTPUT );
}

void RGBLed::setColor( uint8_t redValue, uint8_t greenValue, uint8_t blueValue ) {
	analogWrite( this->redPin, redValue );
	analogWrite( this->greenPin, greenValue );
	analogWrite( this->blueValue, blueValue );
}

void RGBLed::setColor( uint32_t combinedHex ) {
	uint8_t red = (combinedHex) & 0xFF;
	uint8_t green = (combinedHex >> 8) & 0xFF;
	uint8_t blue = (combinedHex >> 16) & 0xFF;

	this->setColor( red, green, blue );
}
	
