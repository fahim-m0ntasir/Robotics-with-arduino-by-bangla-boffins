#include <Arduino.h>


void setup() {
    Serial.begin(9600);
    int ingram= 1500;
    float inkg= (float)ingram/1000;
    Serial.print(ingram);
    Serial.print("gram = ");
    Serial.print(inkg);
    Serial.print("kg.");
}


void loop() {

}