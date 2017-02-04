const int pinLed = 9;      // el pin con el led, tienen que ser con pwm
int brillo;  // una constante para guardar el valor del dato enviado
     void setup() {
       // inicializa la comunicacion serial
       Serial.begin(9600);
       // envia un mensaje con las instrucciones
       Serial.println("Envia un numero entre 0 y 9");
       // inicializa el pinLed de salida
       pinMode(pinLed, OUTPUT);
           }

     void loop() {
       // checa si la computadora ha enviado un dato
       if (Serial.available()) {
         // si es asi, lo lee, debe ser un valor entre 0 y 9):
         brillo = Serial.parseInt();
         // mapea el valor de entrada a un valor entre 0 y 255
         brillo = map(brillo, 0, 9, 0, 255);
         // limitamos el valor entre 0 y 255
         brillo = constrain(brillo, 0, 255);
         // envia por el serial el valor convertido a un valor entre 0 y 255
         Serial.println(brillo);
         // enciende el led con un valor entre 0 y 255
         analogWrite(pinLed, brillo);
       }
     }