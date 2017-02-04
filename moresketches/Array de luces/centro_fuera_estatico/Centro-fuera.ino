byte arre[10] = {5,6,4,7,3,8,2,9,1,10}; //Se inicializa el orden de los pines en un sentido
byte noarre[10] = {10,1,9,2,8,3,7,4,6,5}; // Ahora en sentido contrario
byte padelante[10] = {1,1,1,1,1,1,1,1,1,1}; //Es la orden para encender los leds 1 por 1
byte nopadelante[10] = {0,0,0,0,0,0,0,0,0,0}; // Orden para apagarlos

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
    delay(50);
  }
   
   
   
   for(byte i=0;i<=10;i++)
   {
     digitalWrite(noarre[i],nopadelante[i]);
   delay(50);
 }
 }
     
                              
