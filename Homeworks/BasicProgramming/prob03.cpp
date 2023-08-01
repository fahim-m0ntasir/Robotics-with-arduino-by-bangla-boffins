

void setup(){
	Serial.begin(9600);
  	int a = 4, b = 6;
  	Serial.print("a = ");
  	Serial.print(a);
  	Serial.print(" & b = ");
  	Serial.println(b);
  
  	a = a+b; // 10
  	b = a-b; //4
  	a = a-b; //6
  	
    Serial.print("a = ");
  	Serial.print(a);
  	Serial.print(" & b = ");
  	Serial.print(b);
  
  
}
void loop(){
  
}
