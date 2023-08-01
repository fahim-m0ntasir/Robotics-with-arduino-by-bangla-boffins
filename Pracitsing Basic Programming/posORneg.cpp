#include <Arduino.h>





void setup() {
    Serial.begin(9600);
}


void loop() {
  int number = 0;
  if (number<0)
  {
    Serial.print(number);
    Serial.print(" is negative\n");
  }
  else if (number >0)
  {
    Serial.print(number);
    Serial.print(" is positive\n");
  }
  else{
    Serial.print("It's neither postive nor negative.\n");
  }
  
  
}