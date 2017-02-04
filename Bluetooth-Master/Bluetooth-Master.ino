/*
Bt master
“Ambos NL & CR”
AT  AT+ROLE=1   AT+BIND=<Address>   AT+VERSION?   AT+ADDR?
AT+ROLE?    AT+PSWD?    AT+UART?    AT+CMODE?   AT+BIND?
*/
#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11);// RX,TX
void setup() {
  Serial.begin(9600);
BT.begin(9600);
}
void loop() {
  if(Serial.available())   {
     BT.write(Serial.read());
  }
}
