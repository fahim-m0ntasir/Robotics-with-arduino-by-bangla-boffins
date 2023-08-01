#include <Arduino.h>


void setup() {
    Serial.begin(9600);
    int i = 5;
    Serial.println(i); //5
    i = 10;
    Serial.println(i); // 10
    i++;
    Serial.println(i); // 11
    i--;
    Serial.println(i); // 10
    Serial.println(i++); // 10
    Serial.println(--i); //10

}


void loop() {

}