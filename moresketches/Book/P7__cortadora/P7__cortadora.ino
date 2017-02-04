
//Declara puertos de entradas y salidas
//------------------------------------
int pulsador=2;//Pin donde se encuentra el pulsador, entrada
int boton=5;
int led=13; //Pin donde se encuentra el LED, salida
//------------------------------------
//Funcion principal
//------------------------------------
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
pinMode(pulsador, INPUT); //Configurar el pulsador como una entrada
pinMode(boton, INPUT);
pinMode(led,OUTPUT); //Configurar el LED como una salida
}
//------------------------------------
//Funcion ciclicla
//------------------------------------
void loop() // Esta funcion se mantiene ejecutando
{ // cuando este energizado el Arduino
//Condicional para saber estado del pulsador
if (digitalRead(pulsador)==HIGH);
(digitalRead(boton)==HIGH);{
//Pulsador oprimido
digitalWrite(led,HIGH); //Enciende el LED
}
else
{
//Pulsador NO oprimido
digitalWrite(led,LOW); //Apaga el LED
}
}
//Fin programa
