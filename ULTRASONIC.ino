#define trigPin 9
#define echoPin 8
#define led 12
void setup(){

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(led, OUTPUT);
pinMode(13, OUTPUT);
Serial.begin (9600);
}
void loop()
{ long duration, distance;
   digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;
if (distance <= 10)
{ 
Serial.print(distance);
  digitalWrite(led,HIGH);
  digitalWrite(13,LOW);
   Serial.println("cm : Green LED is on ");
   delay(500);
   }
else {
Serial.print(distance);
digitalWrite(led,LOW);
digitalWrite(13,HIGH);
Serial.println(" cm :Greeen LED is off ");
delay(500);
    }
}
