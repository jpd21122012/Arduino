int dedoA1=2;
int dedoB1=3;
int dedoA2=4;
int dedoB2=5;
int dedoA3=6;
int dedoB3=7;
int dedoA4=8;
int dedoB4=9;
int dedoA5=10;
int dedoB5=11;
const int tiempo=500;
    void setup() {
        for (int i =2;i<=13;i++) {
        pinMode(i, OUTPUT);
        }
  for (int j=2;j<=13;j++) {
        digitalWrite(j, LOW);
        }
}
    void loop() {
secuencia ();
}
void secuencia(){ 
    digitalWrite (dedoA1,HIGH);        
  digitalWrite (dedoB1,LOW);
  delay (tiempo); 
//  digitalWrite (dedoA2,HIGH);        
//  digitalWrite (dedoB2,LOW);
//  delay (tiempo); 
//  digitalWrite (dedoA3,HIGH);        
//  digitalWrite (dedoB3,LOW);
//  delay (tiempo); 
//  digitalWrite (dedoA4,HIGH);        
//  digitalWrite (dedoB4,LOW);
//  delay (tiempo); 
//  digitalWrite (dedoA5,HIGH);        
//  digitalWrite (dedoB5,LOW);
//  delay (tiempo);
  
  delay(5000);
  
//  digitalWrite (dedoA5,LOW);        
//  digitalWrite (dedoB5,HIGH);
//  delay (tiempo);
// digitalWrite (dedoA4,LOW);        
//  digitalWrite (dedoB4,HIGH);
//  delay (tiempo); 
// digitalWrite (dedoA3,LOW);        
//  digitalWrite (dedoB3,HIGH);
//  delay (tiempo); 
// digitalWrite (dedoA2,LOW);        
//  digitalWrite (dedoB2,HIGH);
//  delay (tiempo); 
  digitalWrite (dedoA1,LOW);        
  digitalWrite (dedoB1,HIGH);
  delay (tiempo);  

delay(5000);

}
/*
void lml(){
  digitalWrite (dedoA1,HIGH);        
  digitalWrite (dedoB1,LOW);
  delay (tiempo); 
  digitalWrite (dedoA2,HIGH);        
  digitalWrite (dedoB2,LOW);
  delay (tiempo); 
  digitalWrite (dedoA4,HIGH);        
  digitalWrite (dedoB4,LOW);
  delay (tiempo); 
  digitalWrite (dedoA5,HIGH);        
  digitalWrite (dedoB5,LOW);
  delay (tiempo);
  
  delay(1000);

  digitalWrite (dedoA5,LOW);        
  digitalWrite (dedoB5,HIGH);
  delay (tiempo);
  digitalWrite (dedoA4,LOW);        
  digitalWrite (dedoB4,HIGH);
  delay (tiempo); 
  digitalWrite (dedoA2,LOW);        
  digitalWrite (dedoB2,HIGH);
  delay (tiempo); 
  digitalWrite (dedoA1,LOW);        
  digitalWrite (dedoB1,HIGH);
  delay (tiempo);  

delay(1000);
}



void hell(){ 
  digitalWrite (dedoA2,HIGH);        
  digitalWrite (dedoB2,LOW);
  delay (tiempo); 
  digitalWrite (dedoA3,HIGH);        
  digitalWrite (dedoB3,LOW);
  delay (tiempo); 
  
  delay(1000);
  
  digitalWrite (dedoA3,LOW);        
  digitalWrite (dedoB3,HIGH);
  delay (tiempo); 
  digitalWrite (dedoA2,LOW);        
  digitalWrite (dedoB2,HIGH);
  delay (tiempo); 
  
delay(1000);
}
*/
