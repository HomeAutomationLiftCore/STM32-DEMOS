#include <Arduino.h>
#include "SPI.h"
#include "Adafruit_GFX.h"
#include "Adafruit_ILI9341.h"
#define TFT_DC 9
#define TFT_CS 10
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC);
void setup() {
Serial.begin(9600);
  Serial.println("ILI9341 Test!"); 
  tft.begin();
  tft.fillScreen(0x0000);
}
void loop(){
tft.fillScreen(0x0000);
tft.setRotation(3);
tft.setTextSize(3);  
tft.setCursor(0,0);
tft.setTextColor(0xFFFF);
tft.print("HELLO");
delay(1000);
tft.fillScreen(0x0000);
tft.setCursor(0,0);
tft.setTextColor(0xF800);
tft.print("My Friend");
delay(1000);
}