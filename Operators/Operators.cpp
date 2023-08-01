#include <Arduino.h>

void setup()
{
  Serial.begin(9600);
  // Arithmatic operators:
  int a = 5, b = 9;
  // int c = a+b;
  // signed int d = a-b;
  // float e = a*b;
  // float f = a/b;
  // float g = a%b;
  // Serial.println(c);
  // Serial.println(d);
  // Serial.println(e);
  // Serial.println(f);
  // Serial.println(g);
  // // a++;
  // // ++b;
  // Serial.println(a++); //prints a and that increments a's value
  // Serial.println(++b); // increments first and then prints
  // same happens for --a or b--;

  // Comparison Operator
  // bool h = a == b;
  // bool i = a != b;
  // bool j = a >= b;
  // bool k = a <= b;
  // bool l = a > b;
  // bool m = a < b;
  // Serial.println(h);
  // Serial.println(i);
  // Serial.println(j);
  // Serial.println(k);
  // Serial.println(l);
  // Serial.println(m);

  // Logical Operator
  // bool yes = 1, no = 0;
  // bool n = ! yes;
  // bool o = yes && no; // logical multiplication
  // bool p = yes || no; // logical addition
  // Serial.println(n);
  // Serial.println(o);
  // Serial.println(p);

  // Bitwise Operator
  // It's for learning later
  

  // Assignment Operators

  int q = a+b;
  Serial.println(q); //14
  q += a; 
  Serial.println(q); // 19
  q -=b;
  Serial.println(q); // 10
  q *=a;
  Serial.println(q); // 50
  q /=b;
  Serial.println(q); // 5
  q %=a;
  Serial.println(q); // 0
}

void loop()
{
  // put your main code here, to run repeatedly:
}
