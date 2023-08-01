#include <Arduino.h>


void setup() {
    Serial.begin(9600);
}


void loop() {
    int year = 2022;
    if ((year % 4 == 0 && year %100 !=0) || year%400 == 0)
    {
        Serial.print(year);
        Serial.print(" is a leap year\n");
    }
  else{
    Serial.print(year);
        Serial.print(" is not a leap year\n");
  }
}