/*
SDA es el pin 10
SCK es el pin 13
MOSI es el pin 11
MISO es el pin 12
RST es el pin 9
*/
#include <SPI.h>
#include <RFID.h>

#define RST_PIN	9
#define SS_PIN	10
RFID rfid(SS_PIN, RST_PIN);
int numero_serie[5];
void setup() {
	Serial.begin(9600);
	SPI.begin();       
	rfid.init(); 
	Serial.println("Lectura del UID");
}

void loop() {
  if (rfid.isCard()) 
  {  
    if ( rfid.readCardSerial()) 
    {
     Serial.print("Card ID:");
     for(int i=0; i<=4 ; i++)
     {
     numero_serie[i] = rfid.serNum[i];
     }
     for(int i=0; i<=4 ; i++) // y lo imprimimos
      {
      Serial.print(numero_serie[i]);
      }
    Serial.println();
    rfid.halt();         
    }      
  }
}
