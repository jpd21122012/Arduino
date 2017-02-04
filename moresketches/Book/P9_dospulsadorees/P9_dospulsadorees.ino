int boton = 0; //variable entera o decimal- nombre- valor inicial : D
int botondos = 0;

void setup(){
  pinMode(13,OUTPUT); //Pin 13 como salida
  pinMode(2,INPUT); //Pin 2 como entrada
}

void loop() {
  boton = digitalRead(2); //Lee el estado del pin 2 y guarda el valor leido en la variable boton
  if (boton && botondos == HIGH) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13,LOW);
  }
}




