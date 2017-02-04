#include <SoftwareSerial.h>
SoftwareSerial BTSerial(5,6); //9 RX, 10 TX.
int led=13;

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
  
case 'b':
digitalWrite(7,HIGH); 
digitalWrite(led,LOW);
break;

case 'a':
digitalWrite(7,LOW); 
digitalWrite(led,HIGH);
break;
  }
}
