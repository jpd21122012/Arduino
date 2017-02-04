byte sensores;

void setup() {
  pinMode (7,INPUT); //sensor con salida 0 cuando detecta
  pinMode (8,INPUT); // sensor con salida 1 cuando detecta
  pinMode (12,OUTPUT);
  pinMode (13,OUTPUT);
  }

void loop() {
  sensores == digitalRead(7);

  switch (sensores){

  case B00000000: //cuando el ultimo bit es 0 la entrada esta activa y se enciende la salida 12 detectando metal
     digitalWrite (12,HIGH);
   break;

 case B00000010: //cuando el penultimo bit de la entrada esta activa y se enciende la salida 13 detectando aluminio
  digitalWrite(13,HIGH);
    break;

default: //EN CUALQUIER OTRO CASO SE APAGAN AMBAS SALIDAS
 digitalWrite(12,LOW);
 digitalWrite(13,LOW);
}
}
