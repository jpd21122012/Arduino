 const int pinLed = 9;   // constante para el numero del pin del led

          void setup() {
            // inicializa el pin del led como salida
            pinMode(pinLed, OUTPUT);
          }

          void loop() {
            digitalWrite(pinLed, HIGH);   // pone el pin del led en HIGH 
            delay(1000);                      // espera por un segundo, 1000 milisegundos
            digitalWrite(pinLed, LOW);    // pone el pin del led en LOW 
            delay(1000);                  // espera por un segundo, 1000 milisegundos
          }
