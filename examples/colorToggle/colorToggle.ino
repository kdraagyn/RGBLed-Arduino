#include "RGBLed.h"

#define RED_PIN 0
#define GREEN_PIN 1
#define BLUE_PIN 2

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
