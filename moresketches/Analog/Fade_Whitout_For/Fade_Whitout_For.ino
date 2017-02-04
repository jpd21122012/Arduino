int brillo = 0;
int incremento = 5; //Puede valer negativo (decremento)
void setup(){
pinMode(7, OUTPUT); //El LED está conectado al pin 9 (PWM)
}
void loop() {
analogWrite(7, brillo);
brillo = brillo + incremento;
if (brillo == 0 || brillo == 255) {
incremento = -incremento;
} 

delay(30);
}
