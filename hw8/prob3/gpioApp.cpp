/** File name: gpioApp.cpp
*   Controlling pins using the classes: LED, GPIO, and AnalogIn on the BB
*   Written by Luke Gottzmann for CPE 422
*/

#include <iostream>
#include "LED.h"
#include "GPIO.h"
#include "AnalogIn.h"

int main() {
	LED led1(1);
	LED led2(2);
	LED led3(3);

	led1.turnOn();
	led3.turnOn();
	led2.flash();

	GPIO pushButton(16);
	AnalogIn tempSensor(0);

	int tempValue = tempSensor.readAdcSample();
	std::cout << "Temperature Sensor Value: " << tempValue << std::endl;

	int buttonValue = pushButton.getValue();

	if (buttonValue == HIGH) {
		GPIO ledP912(12);
		ledP912.setDirection(OUTPUT);
		ledP912.setValue(HIGH);
	}

	return 0;
}