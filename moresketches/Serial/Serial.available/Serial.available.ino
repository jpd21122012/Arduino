byte byteRecibido = 0;
void setup() {
Serial.begin(9600);
}
void loop() {
if (Serial.available() > 0) {
byteRecibido = Serial.read();
Serial.write("Byte recibido: ");
Serial.write(byteRecibido);
}
}
