int boton = 0; //variable entera o decimal- nombre- valor inicial : D
int contador = 0;

void setup(){
  pinMode(13,OUTPUT); //Pin 13 como salida
  pinMode(2,INPUT); //Pin 2 como entrada
  Serial.begin(9600);
}

void loop() {
  boton = digitalRead(2); //Lee el estado del pin 2 y guarda el valor leido en la variable boton
  Serial.println(boton);
  if (boton == HIGH) {
    digitalWrite(13, HIGH);
    contador == contador + 1;
    Serial.print("el boton ha sifo pulsado ");
    Serial.print(contador);
    Serial.println(" veces");
  }
  else {
    digitalWrite(13,LOW);
  }
}
