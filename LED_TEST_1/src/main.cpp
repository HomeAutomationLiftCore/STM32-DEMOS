#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
pinMode(PG14,OUTPUT);
pinMode(PG9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(PG14,HIGH);
digitalWrite(PG9,LOW);
delay(1000);
digitalWrite(PG14,LOW);
digitalWrite(PG9,HIGH);
delay(1000);
}