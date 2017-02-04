const int led = 3;               // Indicar LED conectado al pin 3
const int pot = 0;               // Indicar potenciometro al pin analogico 0
int brillo;                      // Variable llamada brillo
void setup() {                   // Ciclo de una vez
pinMode (led,OUTPUT);            // Declaramos led como salida   
                                 // Los pins analogicos ya los detecta como entrada
}
void loop() {                    // Ciclo repetitivo
 brillo = analogRead (pot) / 4;  // Se lee el valor del pot y se divide para que de como maximo 255 = 5v 
analogWrite (led, brillo);       // Aumentar el brillo del led
}
