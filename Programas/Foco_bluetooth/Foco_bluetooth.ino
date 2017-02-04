#include <SoftwareSerial.h>
SoftwareSerial BTSerial(10,11); //10 RX, 11 TX.
int led=13;
const char encendido ='a';
const char apagado ='b';


void setup()  {  
  BTSerial.begin(9600); //Velocidad del puerto del módulo Bluetooth  
  Serial.begin(9600); //Abrimos la comunicación serie con el PC y establecemos velocidad
  pinMode(7,OUTPUT);        // led como salida
  digitalWrite(7,HIGH);
 pinMode(led,OUTPUT);        // led como salida
  digitalWrite(led,LOW); 
}
void loop()  { 
 if(BTSerial.available()) {
Serial.write(BTSerial.read());
delay(50);
}
switch (BTSerial.read()){
  
case apagado:
digitalWrite(7,HIGH); 
digitalWrite(led,LOW);
break;

case encendido:
digitalWrite(7,LOW); 
digitalWrite(led,HIGH);
break;
  }
}
