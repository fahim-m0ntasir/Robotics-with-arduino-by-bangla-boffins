#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("This will be printed only oncee");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("This will be printed infinite times until the task is stopped");
}
