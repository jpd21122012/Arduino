int boton = 0; //variable entera o decimal- nombre- valor inicial : D

void setup(){
  pinMode(5,OUTPUT); //Pin 13 como salida
  pinMode(2,INPUT); //Pin 2 como entrada
}

void loop() {
  boton = digitalRead(2); //Lee el estado del pin 2 y guarda el valor leido en la variable boton
  if (boton == HIGH) {
    digitalWrite(5, HIGH);
  }
  else {
    digitalWrite(5,LOW);
  }
    
  }




