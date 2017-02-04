int lleno=2;
int tapa=3;

void setup(){
  pinMode(lleno,INPUT);
  pinMode(tapa,INPUT);
  Serial.begin(9600); //velocidad de transmición
}

void loop(){
  int llenada=digitalRead(lleno); //el valor del sensor de liquido y tapa se almacenan en variables
  int tapada=digitalRead(tapa);

  
  if(llenada ==1 & tapada == 0){
    Serial.println("Gaseosa Llena");
  
  }
  
  
  
  if (llenada && tapada == 1) {
    Serial.println("Gaseosa tapada");
   
 delay(1000); 
 digitalWrite(12,HIGH);
    Serial.println("Gaseosa bien empacada");
    
  }
}
