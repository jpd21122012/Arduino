char INI [10] = "AT\r\n" ;
char NOMBRE [10] = "BT-05";
char BPS       = '4';
char PASS [10]  = "1234";

void setup() {
 Serial.begin (9600);
 pinMode(13, OUTPUT);
 digitalWrite(13,HIGH);
 delay (10000);
 
 digitalWrite (3,LOW);
 Serial.println ("Enviar comando... ");
 delay (1000);
 
Serial.println ("OK");
Serial.println (INI);
delay (1000);

//Serial.println ("AT+NAME");
//Serial.println (NOMBRE);
//delay (1000);

/*Serial.println ("AT+BAUD");
Serial.println (BPS);
delay (1000);

Serial.println ("AT+PIN");
Serial.println (PASS);
delay (1000);
*/}

void loop() {
digitalWrite ( 3, !digitalRead (33));
delay (500);
 
}
