
void setup(){
	Serial.begin(9600);
  	double C = 100;
  double F = (9.0/5)*C +32;
  Serial.print(C);
  Serial.print("degrees Celsius = ");
  Serial.print(F);
  Serial.print("degrees Farenheit.\n");
  
  
}
void loop(){
  
}