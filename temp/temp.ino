
void setup() {
  
  Serial.begin(9600);
 
}
void loop() {
  
int  sensorInput = analogRead(A1);    //read the analog sensor and store it
float  temp = (((5000/1023)*sensorInput)/10);       //find percentage of input reading
  
 
  Serial.print("Current Temperature: ");
  Serial.println(temp);
  delay(1000);
}
