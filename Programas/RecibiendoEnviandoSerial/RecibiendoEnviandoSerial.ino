bool enviar = false;
void setup() {
       Serial.begin(9600);
       pinMode(13, OUTPUT);
   digitalWrite(13,LOW);  
   }
void loop() {
recibirDatos();
if (enviar==true){
  Serial.println("Led Encendido");
}
else if(enviar==false){
      Serial.println("Led Apagado");
}
delay(100);
}
void recibirDatos(){
   if(Serial.available() > 0) 
    {
    char dato;
    dato =Serial.read();
    Serial.print(dato);
    if  (dato=='a'){
      digitalWrite(13,HIGH);
      delay(500);
      enviar =true;
      }
      else if (dato=='b'){
      digitalWrite(13,LOW);
      delay(500);  
      enviar=false;
    }
    } 
  }
