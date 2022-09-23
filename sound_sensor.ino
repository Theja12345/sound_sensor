int buzzer=6;
int sensorPin=7;
boolean val=0;
void setup()
{
  pinMode(buzzer,OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}
void loop()
{
  val=digitalRead(7);
  Serial.println(val);
  if(val>35){
    digitalWrite(buzzer,HIGH);
  }
  else{
    digitalWrite(buzzer,LOW);
  }
}
