int sensorPin = A0; 

int sensorValue = 0;
void setup() {
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
Serial.begin(9600);
}
void loop() {
  
sensorValue = analogRead(sensorPin); 
  if(digitalRead(2)==HIGH)
  {
    if(analogRead(A0)>=100)
    {
      digitalWrite(3,HIGH);
      delay(1000);
      digitalWrite(3,LOW);
    }
    else
    {
      digitalWrite(3,HIGH);
      delay(2000);
      digitalWrite(3,LOW);
    }
  }
}
