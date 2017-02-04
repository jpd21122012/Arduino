int signal=2;
int limit=3;
int led=13;

void setup()
{
  pinMode(signal,INPUT);
  pinMode(limit,INPUT);
  pinMode(led,OUTPUT);
  
}

void loop()
{
  if (digitalRead(signal)==HIGH && digitalRead(limit)==HIGH)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
