int valorPot=0;
void setup(){
pinMode(7,OUTPUT);
Serial.begin(9600);
}

void loop(){
valorPot=analogRead(2);

valorPot=map(valorPot,0,1023,0,255);
Serial.println(valorPot);
analogWrite(7,valorPot);
delay(100);
}
