int pulsador = LOW;
void setup() {
pinMode(10,OUTPUT); // LED de salida
pinMode(3,INPUT); // botón de entrada, conectado por defecto a GND
digitalWrite(10,LOW); // apagado al principio
toque();
}
void loop() {}
void toque() {
while (pulsador == LOW) {
if (digitalRead(3) == LOW) { // pulsado el botón
digitalWrite(10,HIGH); // encender el LED
delay(1000);
digitalWrite(10,LOW);
pulsador = LOW;
}
}
}

