#include<SoftwareSerial.h>
/*
BT esclavo  AT+ROLE=0  AT+ROLE?  AT+PSWD?  
AT+UART?  AT+UART?  AT+CMODE?  AT+BIND?
*/
SoftwareSerial mySerial(10,11);
void setup()
{  Serial.begin(9600);
   mySerial.begin(9600);
   pinMode(13,OUTPUT);
   digitalWrite(13,HIGH);
   }
void loop()
{
 char c=mySerial.read();
         if(c=='a') digitalWrite(13,HIGH);
         if(c=='b') digitalWrite(13,LOW);
    }
