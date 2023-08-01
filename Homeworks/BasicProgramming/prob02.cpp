void setup(){
	Serial.begin(9600);
  	int height = 800, width = 500;
  	int perimeter = 2*(height + width);
  	long area = (long) height*width;
  	Serial.print("The perimeter and the area of the rectangle is : ");
  	Serial.print(perimeter);
  	Serial.print(" & ");
  	Serial.print(area);
}
void loop(){
  
}
  