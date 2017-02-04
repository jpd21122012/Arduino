#include <Ping.h>   // importamos libreria ping

const int sensor = 4;    // sensor al p4
const int zumbador = 6;   // zumbador al p6
const int led = 8;   // led al p8

int distancia;        // guarda la d del sensor
int pausa;

Ping ping = Ping (sensor);

void setup () {
  pinMode (zumbador, OUTPUT);
  pinMode (led, OUTPUT);
}

void loop () {
 ping.fire ();        // inicia el sensor
distancia = ping.centimeters ();      // d en cm

if (distancia <100){
  pausa = distancia * 10;
  digitalWrite (zumbador, HIGH);
  digitalWrite (led, HIGH);
  delay (pausa);
  
  }
  digitalWrite (zumbador, LOW);
  digitalWrite (led, LOW);
  delay (pausa);
}

