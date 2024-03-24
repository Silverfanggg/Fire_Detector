int buzzerPin = 12;
int flamePin = 11;
int Flame = HIGH;
int red = 5;
int green = 6;
void setup() 
{
  pinMode(buzzerPin,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);

  pinMode(flamePin,INPUT);
  Serial.begin(9600);

}

void loop() 
{
  Flame = digitalRead(flamePin);
  if(Flame == LOW)
  {
    digitalWrite(buzzerPin,HIGH);
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }

  else
  {
    digitalWrite(buzzerPin,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
  }


}
