int dedoA1=2;
int dedoB1=3;
int dedoA2=4;
int dedoB2=5;
int dedoA3=6;
int dedoB3=7;
int dedoA4=8;
int dedoB4=9;
int dedoA5=10;
int dedoB5=11;
const int td1=1500;//600 9v
const int td2=1000;//300 9v
const int td3=1600;//500 9v
const int td4=2300;//300 9v
const int td5=1200;//400 9v
    void setup() {
      Serial.begin (9600);
        for (int i =2;i<=11;i++) {
        pinMode(i,OUTPUT);
        digitalWrite(i,LOW);        
      }
}
    void loop() {
secuencia ();
}
void secuencia(){
  digitalWrite (dedoA1,HIGH);
  digitalWrite (dedoB1,LOW);
  delay (td1);
  Serial.println("Dedo 1 ON");
  digitalWrite (dedoA1,LOW);
  digitalWrite (dedoB1,LOW);
  delay (500);
  
  digitalWrite (dedoA2,HIGH);
  digitalWrite (dedoB2,LOW);
  delay (td2);
  Serial.println("Dedo 2 ON");
  digitalWrite (dedoA2,LOW);
  digitalWrite (dedoB2,LOW);
  delay (500);
  
  digitalWrite (dedoA3,HIGH);
  digitalWrite (dedoB3,LOW);
  delay (td3);
  Serial.println("Dedo 3 ON");
  digitalWrite (dedoA3,LOW);
  digitalWrite (dedoB3,LOW);
  delay (500);
  
  digitalWrite (dedoA4,HIGH);
  digitalWrite (dedoB4,LOW);
  delay (td4);
  Serial.println("Dedo 4 ON");
  digitalWrite (dedoA4,LOW);
  digitalWrite (dedoB4,LOW);
  delay (500);
  
  digitalWrite (dedoA5,HIGH);
  digitalWrite (dedoB5,LOW);
  delay (td5);
  Serial.println("Dedo 5 ON");
  digitalWrite (dedoA5,LOW);
  digitalWrite (dedoB5,LOW);
  delay (500);
  
  digitalWrite (dedoA1,LOW);
  digitalWrite (dedoB1,HIGH);
  delay (td1);
  Serial.println("Dedo 1 OFF");
  digitalWrite (dedoA1,LOW);
  digitalWrite (dedoB1,LOW);
  delay (500);
  
  digitalWrite (dedoA2,LOW);
  digitalWrite (dedoB2,HIGH);
  delay (td2);
  Serial.println("Dedo 2 OFF");
  digitalWrite (dedoA2,LOW);
  digitalWrite (dedoB2,LOW);
  delay (500);
  
  digitalWrite(dedoA3,LOW);
  digitalWrite (dedoB3,HIGH);
  delay (td3);
  Serial.println("Dedo 3 OFF");
  digitalWrite(dedoA3,LOW);
  digitalWrite (dedoB3,LOW);
  delay (500);
  
  digitalWrite (dedoA4,LOW);
  digitalWrite (dedoB4,HIGH);
  delay (td4);
  Serial.println("Dedo 4 OFF");
  digitalWrite (dedoA4,LOW);
  digitalWrite (dedoB4,LOW);
  delay (500);
  
  digitalWrite (dedoA5,LOW);
  digitalWrite (dedoB5,HIGH);
  delay (td5);
  Serial.println("Dedo 5 OFF");
  digitalWrite (dedoA5,LOW);
  digitalWrite (dedoB5,LOW);
  delay (500);
}
