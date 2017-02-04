int ledArriba=2;
int ledCentro=6;
int ledAbajo=4;
int ledDerecha=3;
int ledIzquierda=5;
byte dato;
/////////////
void setup() {
Serial.begin(38400);
pinMode(ledArriba,OUTPUT);
pinMode(ledAbajo,OUTPUT);
pinMode(ledIzquierda,OUTPUT);
pinMode(ledDerecha,OUTPUT);
pinMode(ledCentro,OUTPUT);
pinMode(13,OUTPUT);
}
void loop() {
  digitalWrite(13,LOW);
if (Serial.available())
//Guardamos en la variable dato el valor leido
dato= Serial.read();
//Comprobamos el dato
switch(dato)
{//Si recibimos una ...
case 85: //ARRIBA
{ digitalWrite(ledArriba, HIGH);
digitalWrite(ledAbajo, LOW);
digitalWrite(ledDerecha, LOW);
digitalWrite(ledIzquierda, LOW);
digitalWrite(ledCentro, LOW);
break;
}
case 68: //"U": ABAJO
{
digitalWrite(ledAbajo,HIGH);
break;
}
case 67: //"D": CENTRO
{
digitalWrite(ledCentro,HIGH);///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
break;
}
case 76: //"L": IZQ
{
digitalWrite(ledIzquierda,HIGH);///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
break;
}
case 82: //"R": DCH
{
digitalWrite(ledDerecha,HIGH);///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
break;
}
case 97: //Recibimos "a"
{ sentidoReloj();
break;
}


}}



void sentidoReloj(){
digitalWrite(ledArriba, HIGH);
delay(100);
digitalWrite(ledArriba, LOW);
delay(10);
digitalWrite(ledDerecha, HIGH);
delay(100);
digitalWrite(ledDerecha, LOW);
delay(10);
digitalWrite(ledAbajo, HIGH);
delay(100);
digitalWrite(ledAbajo, LOW);
delay(10);
digitalWrite(ledIzquierda, HIGH);
delay(100);
digitalWrite(ledIzquierda, LOW);
delay(10);
}
void sentidoContrario(){
digitalWrite(ledArriba, HIGH);
delay(100);
digitalWrite(ledArriba, LOW);
delay(10);
digitalWrite(ledIzquierda, HIGH);
delay(100);
digitalWrite(ledIzquierda, LOW);
delay(10);
digitalWrite(ledAbajo, HIGH);
delay(100);
digitalWrite(ledAbajo, LOW);
delay(10);
digitalWrite(ledDerecha, HIGH);
delay(100);
digitalWrite(ledDerecha, LOW);
delay(10);
}

