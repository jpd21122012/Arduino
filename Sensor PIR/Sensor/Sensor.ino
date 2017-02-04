const int pinSensor = 3;
int estado;
const int led=13;
void setup() {
pinMode (pinSensor, INPUT);
pinMode (led, OUTPUT);
digitalWrite(led, LOW);
Serial.begin (9600);
}

void loop() {
estado= digitalRead (pinSensor);
if (estado == HIGH){
  digitalWrite (led, HIGH);
Serial.println (estado);
Serial.println ("Hay actividad");
delay (1000);
} 
  else { 
     digitalWrite (led, LOW);
     Serial.println (estado);
     Serial.println ("No hay actividad");
     delay (1000);  
 }
}
