const int sensor = 0;      // Entrada del sensor LM35
const int ledRojo = 5;     // Pin del Led Rojo
const int ledAzul = 6;     // Pin del Led Azul
long miliVolts;
long temperatura;
int brillo;
void setup() {
// Serial.begin (9600);      // Inicia el proceso monitor
pinMode (ledRojo,OUTPUT);
pinMode (ledAzul,OUTPUT);
}

void loop() {
miliVolts = (analogRead (sensor) * 5000L ) / 1023; //calcular milivolts de entrada
temperatura = miliVolts / 10;        // entrada de mV entre 10
brillo = map(temperatura,24, 31, 0, 255 );
brillo = constrain( brillo, 0, 255);
analogWrite(ledRojo, brillo);
analogWrite(ledAzul, 255 - brillo);
Serial.print("Temperatura: ");   // Empieza a recibir y escribir las variables en el monitor
  Serial.print(temperatura);
  Serial.println (" grados");
  delay(1000);
}
