/*

             En este proyecto vamos a generar sonido en un piezoelectrico

             a partir del voltaje que nos de un circuito con una fotorresistencia

zumbador piezoeléctrico
una fotorresistencia
una resistencia de 10KOms
         */

         // Declaramos las constantes
         const int pinSensor = A0;   // pin de conexion de la fotorresistencia
         const int pinPiezo  = 7;    // pin de conexion del Piezoelectrico

         // Declaramos las variables
         int valorSensor     = 0;    // variable para guardar el valor del sensor

         void setup() {
           pinMode(pinPiezo, OUTPUT);   // declaramos el pin del piezo de salida 
           Serial.begin(9600);          // inicializamos la biblioteca serial
   }

         void loop() {
           valorSensor = analogRead(pinSensor);    // leemos el valor del sensor
           valorSensor = map(valorSensor, 0, 1023, 120, 1500);   // lo procesamos para ajustarlo a los valores que usaremos para los sonidos
           Serial.println(valorSensor);
              
           for( int i=0; i<50; i++ ) {  // generaremos el sonido en ciclos de 50
             digitalWrite(pinPiezo, HIGH);
             delayMicroseconds(valorSensor);
             digitalWrite(pinPiezo, LOW);
             delayMicroseconds(valorSensor);
      }
   }
