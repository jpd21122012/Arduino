  /*

       Un sensor Hall con un led

       Cambia el estado del led
       cuando cambia el estado del sensor


    arduino
    protoboard
    un led
    un sensor hall US1881
    1 resistencia de 220 oms (rojo, rojo, café)
    1 resistencia de 10 Koms (café, negro, naranja)
    un imán

     */
      const int pinSensor = 12;  // el numero del pin con el sensor
    const int pinLed   =  9;   // el numero del pin para el led

     // variables para guardar los valores de los sensores
           int estadoSensor   = 0;   // variable para leer y guardar el estado del sensor
     int estadoAnterior = 0;   // variable para guardar el valor anterior del sensor
     int estadoLed      = 0;   // variable para guardar el estado del led

     void setup() {    
       // Inicializa el pin del led como salida
       pinMode(pinLed, OUTPUT);
       // Incializa el pin del sensor como entrada
       pinMode(pinSensor, INPUT);  
     }

     void loop(){  
       // lee el estado del sensor en pinSensor
       estadoSensor = digitalRead(pinSensor);
       // checa si hubo un cambio en el sensor
       if (estadoSensor != estadoAnterior){
         estadoLed = 1 - estadoLed;
       }

       // actualiza el valor de estadoAnterior 
       estadoAnterior = estadoSensor;  

       if (estadoLed == 1) {            // se checa el estado del led
         digitalWrite(pinLed, HIGH);    // si es 1 prende el led
           } else {
         digitalWrite(pinLed, LOW);    // si no, apaga el led
       }
     }
