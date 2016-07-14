/*
 *	July 13, 2016
 *	Implements RGBLED object for controlling a 4 pin rgb led bulb.
 *
 *	Author: Keith Nygaard
 */

#include "RGBLed.h"

RGBLed::RGBLed( int redPin, int greenPin, int bluePin ) {
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
	analogWrite( this->bluePin, blueValue );
}

void RGBLed::setColor( unsigned long combinedHex ) {
	uint8_t blue = (byte) combinedHex;
	uint8_t green = (byte) ( combinedHex >> 8 );
	uint8_t red = (byte) ( combinedHex >> 16 );

	this->setColor( red, green, blue );
}
	
