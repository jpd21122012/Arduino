void setup() {

  pinMode(7, OUTPUT);
  pinMode(8,OUTPUT);
  attachInterrupt(1,Paro,LOW);
}


void loop() {
  digitalWrite(8,LOW);
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}

void Paro(){
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
}
