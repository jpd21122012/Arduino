int abre=2;
int limite=3;
int cierra=4;
int limite2=5;



void setup()
{
  pinMode(abre,INPUT);
  pinMode(limite,INPUT);
  pinMode(cierra,INPUT);
  pinMode(limite2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop()
{
  if (digitalRead(abre)==HIGH && digitalRead(limite)==LOW)
  {
    digitalWrite(8,HIGH);
    
  }
  else
  {
   
    digitalWrite(8,LOW);
  }


if (digitalRead(cierra)==HIGH && digitalRead(limite2)==LOW)
  {
    
    digitalWrite(9,HIGH);
  }
else {
  digitalWrite(9,LOW);
}

}
