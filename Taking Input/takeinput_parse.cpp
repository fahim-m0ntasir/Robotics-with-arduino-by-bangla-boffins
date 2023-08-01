#include <Arduino.h>

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    // int a = Serial.parseInt(); //int
    // float a = Serial.parseFloat(); //float
    // char a = Serial.read;//char
    String a = Serial.readString(); // string

    Serial.println(a);
    delay(1000);
}