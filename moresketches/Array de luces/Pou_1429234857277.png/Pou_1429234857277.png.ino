1byte arre[9] = {1,2,3,4,5,6,7,8,9,10}; //Se inicializa el orden de los pines en un sentido
byte noarre[9] = {10,9,8,7,6,5,4,3,2,1}; // Ahora en sentido contrario
byte padelante[9] = {1,1,1,1,1,1,1,1,1,1}; //Es la orden para encender los leds 1 por 1
byte nopadelante[9] = {0,0,0,0,0,0,0,0,0,0}; // Orden para apagarlos

void setup(){
  for(byte i=0;i<10;i++)//Contador que aumente uno en uno
  {
    pinMode(arre[i],OUTPUT);
  } /*Se utiliza el valor del contador como indice
    para avanzar en las posiciones del array*/
}
    
 void loop(){

   for(byte i=0;i<=10;i++)
   {
     digitalWrite(arre[i],padelante[i]);
    delay(500);
  }
   
   
   
   for(byte i=0;i<=10;i++)
   {
     digitalWrite(noarre[i],nopadelante[i]);
   delay(500);
 }
 }
     
                              
