int boton=2;

void setup(){
  pinMode(boton,INPUT);
  Serial.begin(9600); //velocidad de transmición
}

void loop(){
  int estado=digitalRead(boton); //el valor del boton se lee y se guarda en la variable estado
  
  if (estado==1)
  {
    Serial.println("Lo aplastas D:");
  }
  else
  {
    Serial.println("Presioname como a una de tus chicas francesas -n-");
  }
  
  delay(100);
}
