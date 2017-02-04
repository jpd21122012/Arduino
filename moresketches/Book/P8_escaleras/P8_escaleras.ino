int boton = 0 ;
int boton2 = 0;

void setup(){
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  if (2 == HIGH){
    digitalWrite(5,HIGH);
  }
  
  if (3 == HIGH){
    digitalWrite(5,HIGH);

  }
}
