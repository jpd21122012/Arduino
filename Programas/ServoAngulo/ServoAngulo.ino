 #include <Servo.h>   // incluimos la biblioteca Servo 
Servo miservo;       // creamos un objecto servo para controlar el motor 
void setup() { 
miservo.attach(9);  // liga el servo al pin 9 
 }
void loop() { 
for(int angulo = 0; angulo < 60; angulo += 1) {   //  un ciclo para mover el servo entre los 0 y los 180 grados  
miservo.write(angulo);//  manda al servo la posicion
delay(10);//  espera unos milisegundos para que el servo llegue a su posicion
 }
 
 for(int angulo = 60; angulo >= 1; angulo -= 1){//  un ciclo para mover el servo entre los 180 y los 0 grados                             
 miservo.write(angulo);//  manda al servo la posicion
 delay(10);//  espera unos milisegundos para que el servo llegue a su posicion
  }
}
