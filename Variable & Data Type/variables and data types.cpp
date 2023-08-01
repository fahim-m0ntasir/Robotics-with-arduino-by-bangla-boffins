#include <Arduino.h>
void setup()
{
    Serial.begin(9600);
    // There are a few types of data types in c++ and as well as arduino
    int a = 8; //Integer Number
    float b = 8.5; // Floating point number
    double c = 99.674334; // A floating point number but the difference with float is that, it stores 4 byte data and double stores a 8 byte data
    char d = 'h'; // Character
    String e = "hello World"; // String
    bool f = 2; // Boolean; If any number except for 0 is stored it, that is similar to storing 1
    Serial.println(a);
    Serial.println(b);
    Serial.println(c);
    Serial.println(d);
    Serial.println(e);
    Serial.println(f);
}
void loop()
{

}