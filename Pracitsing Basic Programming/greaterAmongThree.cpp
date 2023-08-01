#include <Arduino.h>

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    int n1 = 8, n2 = 20, n3 = 2;
    if (n1 > n2 && n1 > n3)
    {
        if (n2 > n3)
        {
            Serial.print(n1);
            Serial.print(">");
            Serial.print(n2);
            Serial.print(">");
            Serial.println(n3);
        }
        else
        {
            Serial.print(n1);
            Serial.print(">");
            Serial.print(n3);
            Serial.print(">");
            Serial.println(n2);
        }
    }
    else if (n2 > n1 && n2 > n3)
    {
        if (n1 > n3)
        {
            Serial.print(n2);
            Serial.print(">");
            Serial.print(n1);
            Serial.print(">");
            Serial.println(n3);
        }
        else
        {
            Serial.print(n2);
            Serial.print(">");
            Serial.print(n3);
            Serial.print(">");
            Serial.println(n1);
        }
    }
    else
    {
        if (n2 > n1)
        {
            Serial.print(n3);
            Serial.print(">");
            Serial.print(n2);
            Serial.print(">");
            Serial.println(n1);
        }
        else
        {
            Serial.print(n3);
            Serial.print(">");
            Serial.print(n1);
            Serial.print(">");
            Serial.println(n2);
        }
    }
}