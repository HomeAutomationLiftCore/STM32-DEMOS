#include <Arduino.h>
long x = 0;
void setup() {
Serial.begin(9600);
}

void loop() {
while (Serial.available() == 0){}
x = Serial.parseInt();
if ( (x % 2) == 0){
Serial.println(x);
}
}