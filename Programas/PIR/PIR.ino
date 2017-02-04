const int pir =3;
const int relevador =4;
int estado;
void setup() {
  Serial.begin(9600);
pinMode(pir,INPUT);
pinMode(13,OUTPUT);
pinMode(relevador,OUTPUT);
digitalWrite (13,LOW);
digitalWrite (relevador,LOW);
}
void loop() {
  estado=digitalRead(pir);
  Serial.println(estado);
  delay(500);
  if (estado==HIGH){
   digitalWrite(relevador,HIGH);
digitalWrite(13,HIGH); }
 else {
    digitalWrite (relevador,LOW);
    digitalWrite(13,LOW);
  } }
