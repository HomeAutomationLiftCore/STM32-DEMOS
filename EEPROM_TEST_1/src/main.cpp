#include <Arduino.h>
#include <EEPROM.h>

void setup() {
	Serial.begin(9600);
	uint8_t v = EEPROM.read(0);
	if (v == 123) {
		Serial.println("Saved");
	} else {
		Serial.println("Wasn't saved");
		EEPROM.write(0, 123);
	}
}

void loop() {
	delay(15);
}