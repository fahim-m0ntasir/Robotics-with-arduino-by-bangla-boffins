void setup(){
    Serial.begin(9600);
    int num1 = 100;
    int num2 = 6;
  	Serial.print(num1);
  Serial.print("%");
  Serial.print(num2);
  Serial.print(" = ");
  Serial.println(num1%num2);
    
}
  
  
void loop(){
  
}