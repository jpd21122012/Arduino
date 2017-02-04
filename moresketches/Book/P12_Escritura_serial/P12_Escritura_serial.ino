//Programa para encender un led al escribir una letra en la consola

int led= 13;
char leer;
boolean prendido= false;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{
  leer=Serial.read(); //el valor de la consola, la letra se guarda en una variable
  
  if((leer=='n') && (prendido==false)) //si es la letra a y está apagado
  {
    digitalWrite(led,HIGH); 
    prendido=true;    //enciende el led y acutaliza su estado
  }
  
  else if ((leer=='n') && (prendido == true)) //si es a y está encendido lo apaga y actualiza de nuevo el estado
  
  {
    digitalWrite(led,LOW);
    prendido=false;
  }
}
