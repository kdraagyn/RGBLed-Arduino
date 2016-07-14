#include "RGBLed.h"

#define RED_PIN 13
#define GREEN_PIN 15
#define BLUE_PIN 16

#define DELAY_TIME 1

RGBLed rgb( RED_PIN, GREEN_PIN, BLUE_PIN );
unsigned long rgbValue = 0;

void setup() {

}

// cycle through all the colors
// it takes a while... 
// and blue flickers a lot :P
void loop() {
	if( rgbValue < 0xFFFFFF ) {
		rgb.setColor( rgbValue );
		rgbValue += 1;
	} else {
		rgbValue = 0;
	}
}

