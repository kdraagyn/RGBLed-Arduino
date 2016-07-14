#include "RGBLed.h"

#define RED_PIN 13
#define GREEN_PIN 15
#define BLUE_PIN 16

#define DELAY_TIME 1000

RGBLed rgb( RED_PIN, GREEN_PIN, BLUE_PIN );

void setup() {
	
}

void loop() {
	rgb.setColor( 255, 0, 0 );
	delay( DELAY_TIME );
	rgb.setColor( 0, 255, 0 );
	delay( DELAY_TIME );
	rgb.setColor( 0, 0, 255 );
	delay( DELAY_TIME );
}
