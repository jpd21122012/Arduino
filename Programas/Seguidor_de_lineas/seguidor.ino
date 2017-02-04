//Driver para motores
const int AdelanteIzq = 2; 
const int AdelanteDer = 3;
const int AtrasIzq = 6;
const int AtrasDer = 7;
//Entradas digitales, sensores de linea
const int sensorIzq = 11;
const int sensorDer = 12;
//Para lecturas de linea
int sensorValueIzq = 0;
int sensorValueDer = 0;
void setup() {
   pinMode(AdelanteIzq, OUTPUT); 
   pinMode(AtrasIzq, OUTPUT); 
   pinMode(AdelanteDer, OUTPUT); 
   pinMode(AtrasDer, OUTPUT); 
   pinMode(sensorIzq,INPUT);
   digitalWrite(sensorIzq, HIGH); //pull-up
   pinMode(sensorDer,INPUT);
   digitalWrite(sensorDer, HIGH); //pull-up
   pinMode(13,OUTPUT);  //indicador de fuera de linea
}
void loop() {
  //Lectura de sensores
  sensorValueIzq = digitalRead(sensorIzq);
  sensorValueDer = digitalRead(sensorDer);
 //Indicador de línea
 if (sensorValueIzq == 1 || sensorValueDer ==1 )
 {digitalWrite(13,HIGH); } 
 else
 {digitalWrite(13,LOW); }
 if (sensorValueIzq == 1 && sensorValueDer ==1) //Fuera de linea, se detiene
 {
     digitalWrite(AdelanteIzq,0);
     digitalWrite(AdelanteDer,0);
     digitalWrite(AtrasDer,0);
     digitalWrite(AtrasIzq,0);
 } 
 else if (sensorValueIzq == 0 && sensorValueDer ==0) //Sobre la linea, camina adelante
 {
     digitalWrite(AdelanteIzq,1);
     digitalWrite(AdelanteDer,1);
     digitalWrite(AtrasDer,0);
     digitalWrite(AtrasIzq,0);
 } 
 else if (sensorValueIzq == 1 && sensorValueDer ==0) //Giro a la Izquierda
 {
     digitalWrite(AdelanteIzq,1);
     digitalWrite(AdelanteDer,0);
     digitalWrite(AtrasDer,1);
     digitalWrite(AtrasIzq,0);   
 } 
 else if (sensorValueIzq == 0 && sensorValueDer == 1) //Giro  a la Derecha
 {
     digitalWrite(AdelanteIzq,0);
     digitalWrite(AdelanteDer,1);
     digitalWrite(AtrasDer,0);
     digitalWrite(AtrasIzq,1);
 }
}
