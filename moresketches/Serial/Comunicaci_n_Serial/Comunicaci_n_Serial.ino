int boton=2;

void setup()
{
  pinMode(boton,INPUT);
  Serial.begin(9600); //inicia comunicación serial
}

void loop()
{
  int estado = digitalRead(boton); //se crea una variable local en base a la lectura de la variable boton .O.
  
  if (estado=1)
  {
    Serial.println("Pulsado"); //muestra este mensaje en la consola serial
  }
  else
  {
    Serial.println("No pulsado");
  }
  delay(1000);
}
