byte arre[5] = {5,4,3,2,1};
byte arre2[5] = {6,7,8,9,10}; 
byte noarre[5] = {5,4,3,2,1};
byte noarre2[5] = {6,7,8,9,10}; 
byte padelante[5] = {1,1,1,1,1};
byte nopadelante[5] = {0,0,0,0,0};


void setup(){
  for(byte i=0;i<5;i++)//Contador que aumente uno en uno
  {
    pinMode(arre[i],OUTPUT);
pinMode(arre2[i],OUTPUT);  } 
}
    
 void loop(){

   for(byte i=0;i<=5;i++)
   {
     digitalWrite(arre[i],padelante[i]);
     digitalWrite(arre2[i],padelante[i]);
    delay(100);
    digitalWrite(noarre[i],nopadelante[i]);
    digitalWrite(noarre2[i],nopadelante[i]);
    delay(100);
  }
 }
   
   
   
                     
