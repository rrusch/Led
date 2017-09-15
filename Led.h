/**
 * Led libaray.
 *
 * @author Roland Rusch <roland@rusch.lu>
 * @version 0.0.1-dev
 */


#ifndef RRUSCH_LED_H
#define RRUSCH_LED_H

#include <Arduino.h>

class Led
{

public:
	Led(uint8_t pin);
	void setup();
	void update();
	bool isPin();
	
	void setOn();
	void setOff();
	void toggle();
	
	
	/**
	 * Blinker-Funktion einschalten.
	 * @param onMs	Dauer der EIN-Phase in ms
	 * @param offMs	Dauer der AUS-Phase in ms
	 */
	void setBlinker(unsigned long onMs=0, unsigned long offMs=0);
	
	static const int FN_OFF=0;
	static const int FN_ON=1;
	static const int FN_BLINKER=2;
	
private:
	static const unsigned long INTERVAL = 0;
	bool _digitalWrite(uint8_t val);
	uint8_t _pin;
	unsigned long _lastRunTime;
	unsigned long _interval;
	int _function;
	unsigned long _onMs;
	unsigned long _offMs;
	bool _blinker;
	
	
	
};




#endif /* RRUSCH_LED_H */
