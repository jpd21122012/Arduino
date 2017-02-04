#include <IRremote.h>
int input_pin = 4; //set D10 as input signal pin
IRrecv irrecv(input_pin);
int led=13;
decode_results signals;
void setup()
{
  pinMode(13,OUTPUT);
	Serial.begin(9600);
	irrecv.enableIRIn(); // enable input from IR receiver
digitalWrite(13,LOW);
}
void loop() {
if (irrecv.decode(&signals)) {
		Serial.println(signals.value);
	
switch(signals.value)
{
  case 9226:
  digitalWrite(13,HIGH);
  break;
  case 25610:
  digitalWrite(13,LOW);
  break;
  
  }
  		irrecv.resume(); // get the next signal

}
}
