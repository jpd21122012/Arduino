int anterior = 0;
int recibido = 0;
void setup() {
  pinMode(2,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  //compruebo si me han enviado algo
  if (Serial.available() > 0) {
    recibido = Serial.read()
    //si el numero que me han enviado es mayor que lo recibido anteriormente hago parpadear los leds
    if (recibido > anterior) {
      anterior = recibido;
      digitalWrite(2,HIGH);
      delay(500);
      digitalWrite(2,LOW);
      digitalWrite(7,HIGH);
      delay(500);
      digitalWrite(7,LOW)
    }
  }
}
