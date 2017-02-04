int inPin8 = 8; //pin del sensor derecha
int inPin9 = 9; //pin del sensor izquierda
int value8= 0;
int value9= 0;
int led = 13; //pin donde esta el led
int motori = 10;
int motord = 11;

void setup()
{
  Serial.begin(9600);
  pinMode(inPin8,INPUT);
  pinMode(inPin9,INPUT);
  pinMode(led,OUTPUT);
}


void loop()
{
  value8= digitalRead(inPin8); 
  analogWrite(motori,255);
  analogWrite(motord,255);
  digitalWrite(led,LOW);//apaga led
  if(digitalRead(inPin8)==LOW)
  {
    analogWrite(motord,0);
    digitalWrite(led,HIGH);//enciende led
    tone(6, 400, 500);
    delay(200);
  }

  {
    value9= digitalRead(inPin9); 
    analogWrite(motori,177);
    analogWrite(motord,177);
    digitalWrite(led,LOW);//apaga led
    if(digitalRead(inPin9)==LOW)
    {
      analogWrite(motori,0);
      digitalWrite(led,HIGH);//enciende led
      tone(6, 600, 500);
      delay(200);

    }
  }
}



