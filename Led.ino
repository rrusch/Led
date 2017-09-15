/**
 * This is the test program for the Led library.
 *
 * @author Roland Rusch <roland@rusch.lu>
 */


#include "Led.h"

#include "Arduino.h"


// use the on board Led
const int pinLed = LED_BUILTIN;

// Initialize the Led object
Led led(pinLed);



//The setup function is called once at startup of the sketch
void setup()
{
	// Run the setup routine of the Led object
	led.setup();

	// Let the Led blink
	led.setBlinker(100, 500);
}



// The loop function is called in an endless loop
void loop()
{
	// Run the update routine of the Led object
	led.update();
}
