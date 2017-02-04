int rojo= 3;
int verde = 4;
int azul = 5;
char leer;


void setup()
{
 Serial.begin(9600);
 pinMode(verde,OUTPUT);
 pinMode(rojo,OUTPUT);
 pinMode(azul,OUTPUT);
}


void loop()
{
  leer=Serial.read();
  
  if  (leer=='a')
 {
  digitalWrite(rojo,HIGH);
 digitalWrite(verde,HIGH);
digitalWrite(azul,HIGH);
 }
 
 while (leer=='b')
 {
   digitalWrite(rojo,LOW);
   digitalWrite(verde,LOW);
   digitalWrite(azul,LOW);
   delay(1000);
   digitalWrite(rojo,HIGH);
   delay(1000);
   digitalWrite(rojo,LOW);
   digitalWrite(verde,HIGH);
   delay(1000);
   digitalWrite(verde,LOW);
   digitalWrite(azul,HIGH);
   delay(1000);
   digitalWrite(azul,LOW);

   
  }
 
 if(leer=='c')
 {
   digitalWrite(rojo,LOW);
   digitalWrite(verde,LOW);
   digitalWrite(azul,LOW);
 }
}
