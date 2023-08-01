#include <Arduino.h>
// condition ? value_if_true : value_if_false;



void setup() {
  Serial.begin(9600);
  int num1 = 400;
  int num2 = 344;
  (400>344)? Serial.print("True"):Serial.print("False");
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

