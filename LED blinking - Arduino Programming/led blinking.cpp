// Led ON-OFF
// As digital pins can be used both as input and output pin, we first have to declare for what work we are using the pin, for input or for output
// For this purpose, we use the function 'pinMode'
// We use digitalWrite() to set the sate of a digital output pin to high(5v) or low(0v)

void setup(){
  Serial.begin(9600);
  pinMode(7, OUTPUT);	
  

}
  
  
void loop(){
  digitalWrite(7, HIGH);
  delay(1000); //mili deconds
  digitalWrite(7, LOW);
  delay(1000);
}
