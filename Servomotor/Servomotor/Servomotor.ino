#include <Servo.h>
Servo Tower;
const int Pot = 0;
const int pinServo = 2 ;
const int pulsoMin = 650;  // pulso en us para giro
const int pulsoMax = 2550;  // us giro maximo
int valor;
int angulo;



void setup() {
Tower.attach ( pinServo , pulsoMin, pulsoMax);  
}

void loop() {
valor = analogRead (Pot);
angulo= map(valor, 0, 1023, 180, 0);  // se convierten los valores
// si el servo gira antihorario se invierten los ultimos dos valores de map
Tower.write (angulo);
delay(20);      // permite llegar al angulo
}
