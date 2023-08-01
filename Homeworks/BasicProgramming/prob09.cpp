
void setup(){
    Serial.begin(9600);
	int num = 0;
  if(num > 0){
    Serial.println("Positive");
  }
  else if(num < 0){
    Serial.println("Negative");
  }
  else{
    Serial.println("It's zero");
  }
}
  
  
void loop(){
  
}
}