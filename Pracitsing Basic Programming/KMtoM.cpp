#include <Arduino.h>


void setup() {
    Serial.begin(9600);
    float inKM= 3700;
    float inM=inKM*1000;
    Serial.print(inKM);
    Serial.print("km = ");
    Serial.print(inM);
    Serial.print("m.");
}


void loop() {

}