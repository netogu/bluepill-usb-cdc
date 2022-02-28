#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(PC13, OUTPUT);
  SerialUSB.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PC13, HIGH);
  delay(500);
  digitalWrite(PC13, LOW);
  delay(500);
  SerialUSB.println("Hello World USB CDC");

}