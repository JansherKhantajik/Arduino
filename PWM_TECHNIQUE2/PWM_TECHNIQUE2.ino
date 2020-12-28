int led_pin =6;
int pot_pin =A0;
int output;
int led_value;
void setup(){
  pinMode(led_pin, OUTPUT);
}
void loop(){
  output = analogRead(pot_pin);
  
  for(int i=0; i<225; i++){
    analogWrite(led_pin,i);
    delay(5);
  }
  for(int i=225; i>0; i--){
    analogWrite(led_pin,i);
    delay(5);
  }
  analogWrite(led_pin,led_value);
