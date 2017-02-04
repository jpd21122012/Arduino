/*
SDA es el pin 10
SCK es el pin 13
MOSI es el pin 11
MISO es el pin 12
RST es el pin 9
*/
#include <SPI.h>
#include <RFID.h>
#define SS_PIN 10
#define RST_PIN 9
RFID rfid(SS_PIN, RST_PIN);
char orden;
int led_verde = 8;
int led_rojo = 7;
int sensor_puerta = 6;
int contador = 0;
int estado_puerta = 0;
int puerta_abierta = 0;
int contador_estado_puerta = 0;
int i = 0 ;
int numero_serie[5]; 
int usuario[1][5]={ {36,238,94,1,149} };
void setup()
{
Serial.begin(9600);
pinMode(led_verde, OUTPUT);
pinMode(led_rojo, OUTPUT);
pinMode(sensor_puerta,INPUT);
SPI.begin();
rfid.init();
}
void abrir_puerta()
{
  comprobar_puerta();
  if(estado_puerta == 0)
  {
	digitalWrite(led_verde,HIGH);
	Serial.println("puerta abierta");
        puerta_abierta = 1;
	contador = 1;
  }else{
        Serial.println("Error, La puerta esta abierta");
        contador = 1;}}
void cerrar_puerta()
{
  comprobar_puerta();
  if(estado_puerta == 0)
  {
        digitalWrite(led_verde,LOW);
	 Serial.println("Puerta cerrada");
	 contador = 1;
  }else{
        Serial.println("Error, La puerta esta abierta");
        contador = 1;}}
void comprobar_puerta()
{
  estado_puerta = digitalRead(sensor_puerta);
  if((estado_puerta == 0) && (puerta_abierta == 1) && (contador_estado_puerta == 0) )  // puerta cerrada pero le hemos dado la señal de abrir
  {
     delay(100);
         if((estado_puerta == 0 ) && (puerta_abierta == 1))
          {
            contador_estado_puerta = 2;}}
if(estado_puerta == 1) {
    delay(100);
   if ((estado_puerta == 1 ) && (puerta_abierta == 1) && (contador_estado_puerta == 2 ) )
          {
            contador_estado_puerta = 1;}}
  if((estado_puerta == 0) && (puerta_abierta == 1) && (contador_estado_puerta == 1) ) // si la puerta está cerrada y ha pasado por los anteriores
  {delay(100);
      if((estado_puerta == 0 ) && (puerta_abierta == 1) && (contador_estado_puerta == 1))
          {
            contador_estado_puerta = 3;
            puerta_abierta = 0;
            delay(2000);
            cerrar_puerta();}}}
void comprobar_usuario(){
  i=0;
for(int j=0; j<=5; ) // numero de digitos de nuestro tag
 {if( (usuario[i][j]) == (numero_serie[j])){j++;
      }else{i++;j=0;}
   if(i >= 2) { j=5;}
switch(i)
{
  case 0:
  usuario_correcto();
  break;
  
  default:
  usuario_incorrecto();
  break;
}}}
void leer_usuario()
{
 Serial.println("Leyendo usuario...");
   delay(2000);  
//  if (rfid.isCard())
//    
//    {
//      
   if (rfid.readCardSerial())
            {
                Serial.print("Numero usuario: "); // guardamos el numero del usuario
                for(int i=0; i<=4 ; i++)
                {
                numero_serie[i] = rfid.serNum[i];
                }
                for(int i=0; i<=4 ; i++) // y lo imprimimos
                {
                Serial.print(numero_serie[i]);
                }
                Serial.println(" "); // esto es para que quede más bonito y el " usuario correcto " o " usuario incorrecto " aparezcan debajo y no pegados
                delay(500); // para que no se imprima constantemente el mismo numero
                contador = 1;
//               comprobar_usuario();
             }
   // }
  rfid.halt();}
void usuario_correcto()
{
 if(contador == 1)
  {
   Serial.println("Usuario correcto");
   abrir_puerta();
   contador = 0;}}
void usuario_incorrecto()
{
 if(contador == 1){
   Serial.println("Usuario incorrecto");
   error();
   contador = 0;}}
void error()
{     digitalWrite(led_verde,LOW);
  for(int j = 0; j < 4 ; j++)
  {
   digitalWrite(led_rojo,HIGH);
   delay(500);
   digitalWrite(led_rojo,LOW);
   delay(500);}}
void loop()
{
 leer_usuario();
 delay(1);
 }
 
