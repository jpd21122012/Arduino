#include <SoftwareSerial.h>
SoftwareSerial Serial1(11, 10);
//10:TX DEL MODULO, 11:RX DEL MODULO
String command = ""; // guardará la respuesta desde el BT
void setup()
{
Serial.begin(9600); //CONEXION SERIE USB CON ORDENADOR
Serial1.begin(38400); //CONEXION SERIE PARA EL MODULO BT
Serial.println("En Linea");
Serial.println("-----------------------------------");
Serial.println("AT, OK");
Serial.println("AT+VERSION");
Serial.println("AT+UART,0,0");
Serial.println("AT+NAME");
Serial.println("AT+PINxxxx");
Serial.println("AT+ROLE");
Serial.println("AT+ADDR");
Serial.println();
}
void loop()
{
//Chequear si hay datos desde BT
if (Serial1.available()) {
while(Serial1.available()) {
command += (char)Serial1.read();
}
Serial.println(command);
command = "";
}
//Chequear si hay datos desde USB
if (Serial.available()){
delay(10); // necesita un pequeño delay
Serial1.write(Serial.read());
}}
