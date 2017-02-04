int in1=4, in2=5;
int in3=6, in4=7;
#include <Servo.h>
Servo servomotor; // Servomotor adquiere toda la herencia de la biblioteca Servo

int potenc=0;
int valor=0;//Se inicia en cero

#include <Ultrasonic.h>
#define TRIGGER_PIN  10  //Trigger del ultrasónico
#define ECHO_PIN     11  // Echo del ultrasónico.

Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);

void setup() {
  // Inicializacion de la comunicacion serial
  //Serial1.begin(115200);//velocidad maxima que se puede utilizar
  servomotor.attach(8);//voy a utilizar lo que esta dentro de la libreria y para indicarle que lo utilice se pone . y attach y va a estar en el pin 9
  Serial.begin (9600);  
  // Inicializacion de pines digitales
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  
servomotor.write(90);
}

void loop() {
  //for(int i=0;i<90;i++){
  //servomotor.write(i);
  //}
  servomotor.write(90);
  
  float cmMsec;  // Variable para medir la distancia en cm.
  long microsec = ultrasonic.timing();  // Tiempo en micro segundos.
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);  // instrucción de conversión, ultrasonic.convert(variable,Ultrasonic :: unidad(CM,IN));.
  float x;
  x=cmMsec;
  if (x >= 500 || x <= 0){  // si la distancia es mayor a 500cm o menor a 0cm 
    Serial.println("---");                  // no mide nada
  }
  else{
  Serial.println("\t\t\t\t\t\t\t\t\t\t Valor central");
  Serial.println (x);
  Serial.println("   ");
  delay (300);
  } 
  long valor_der, valor_izq;
  
  if (x>=31){
    digitalWrite(in1,HIGH);//Adelante
    digitalWrite(in2,LOW);
    long microsec = ultrasonic.timing();  // Tiempo en micro segundos.
    cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);  // instrucción de conversión, ultrasonic.convert(variable,Ultrasonic :: unidad(CM,IN));.
  }
  
  else if(x>0 && x<30){
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    
    for(int i=90;i<130;i++){
      servomotor.write(i);
      delay(10);
    }
    
    delay(300);
    long microsec_der = ultrasonic.timing();  // Tiempo en micro segundos.
    valor_der = ultrasonic.convert(microsec_der, Ultrasonic::CM);  // instrucción de conversión, ultrasonic.convert(variable,Ultrasonic :: unidad(CM,IN));.
    Serial.println("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Derecha: ");
    Serial.print ( valor_der );
    Serial.println("   ");
    delay(300);
    
    for(int i=90;i>60;i--){
      servomotor.write(i);
      delay(10);
    }
    
    delay(300);
    long microsec_izq = ultrasonic.timing();  // Tiempo en micro segundos.
    valor_izq = ultrasonic.convert(microsec_izq, Ultrasonic::CM);  // instrucción de conversión, ultrasonic.convert(variable,Ultrasonic :: unidad(CM,IN));.
    Serial.println("Izquierda: ");
    Serial.print (valor_izq );
    Serial.println("   ");
    
    delay(300);
    
    if (valor_izq>valor_der){
      delay(50);
      Serial.println ("girare a la izquierda" );
      Serial.println("   ");
      delay(300);
      digitalWrite(in1,HIGH);
      digitalWrite(in2,LOW);
      digitalWrite(in3,HIGH);//Izquierda
      digitalWrite(in4,LOW);
      delay(3000);  
  }
  if(valor_izq<valor_der){
    delay(50);
    Serial.println ("girare a la derecha" );
    Serial.println("   ");
    delay(300);  
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW); 
    digitalWrite(in3,LOW);//Derecha
    digitalWrite(in4,HIGH);
    delay(3000);
  } 
  
  }
    
  }
 



