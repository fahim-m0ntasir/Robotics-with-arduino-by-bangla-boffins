
void setup(){
    Serial.begin(9600);
	int num = 18;
  if (num % 3 == 0 && num % 5 == 0){
    Serial.print(num);
    Serial.print(" is divisible by 3 & 5\n");
  }
  else {
     Serial.print(num);
    Serial.print(" is not divisible by 3 & 5\n");
  }
}
  
  
void loop(){
  
}
