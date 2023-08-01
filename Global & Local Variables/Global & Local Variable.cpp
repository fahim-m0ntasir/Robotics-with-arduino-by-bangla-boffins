#include <Arduino.h>
int g_var = 45; // its a global variable as it is declared outside of any function. it can be accessed from anywhere in the file
void setup() {
  Serial.begin(9600);
  Serial.println(g_var);
  int s_var = 78; // its a local variable and can only be accessed only in this function
  Serial.println(s_var);

}

void loop() {
  // Serial.println(s_var); // gives an error
  Serial.println(g_var);

}

