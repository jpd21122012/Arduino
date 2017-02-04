char miarray[30];
byte bytesleidos;
void setup(){
Serial.begin(9600);
}
void loop(){
bytesleidos=Serial.readBytes(miarray,20);
Serial.println(bytesleidos);
Serial.println(miarray);
}
