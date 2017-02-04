 /*
 * LCD RS pin to digital pin 9
 * LCD E pin to digital pin 8
 * LCD D4 pin to digital pin 7
 * LCD D5 pin to digital pin 6
 * LCD D6 pin to digital pin 5
 * LCD D7 pin to digital pin 4
 * LCD R/W pin to ground
 * 10K resistor:
 * ends to +5V and ground
 * LCD VO pin (pot)
 * LCD K,VSS pin (ground)
 * LCD A,VDD pin (5V)
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd (7, 8, 9, 10, 11, 12);
void setup() {
  lcd.begin(16, 2);  // set the lcd dimension
  Serial.begin(9600);  
 }
 void prim (){
   lcd.setCursor(0,1);
   lcd.print("Te amo laura <3");
   lcd.setCursor(0,0);
   lcd.print(" 21 / 12 / 2012 ");
  delay (3000);
 lcd.clear();
   
    lcd.setCursor(0,0);
    lcd.print("El sueño de los");
    lcd.setCursor(0,1);
    lcd.print("hombres es similar");
    delay (2000);
    lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);
    delay (2000);
  lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("consistendo en conocer");
    lcd.setCursor(0,1);
    lcd.print("    una persona ideal");
    delay (2000);
    lcd.scrollDisplayLeft();delay (650);lcd.scrollDisplayLeft();delay (650);lcd.scrollDisplayLeft();delay (650);lcd.scrollDisplayLeft();delay (650);lcd.scrollDisplayLeft();delay (650);lcd.scrollDisplayLeft();delay (650);
    delay (2000);
    lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("con la que podrian");
    lcd.setCursor(0,1);
    lcd.print("compartir su vida completa");
    delay (2000);
    lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);
    delay (2000);
    lcd.clear();
  lcd.setCursor(0,0);
    lcd.print("sin ningun tipo");
    lcd.setCursor(0,1);
    lcd.print("de recelo");
    delay (2000);
 lcd.clear();
 lcd.setCursor(0,0);
    lcd.print("Es lo que he descubier");
    lcd.setCursor(0,1);
    lcd.print("to estando contigo amor");
    delay (2000);
    lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (450);lcd.scrollDisplayLeft();delay (0);lcd.scrollDisplayLeft();delay (0);lcd.scrollDisplayLeft();delay (450);
    delay (3000);
    lcd.clear();
 }
 void sec (){
 lcd.setCursor(0,0);
    lcd.print(" Siendo la mujer");
    lcd.setCursor(0,1);
    lcd.print("q siempre admire");
    delay (5000);
   lcd.clear();  
 }
void loop()
{
   prim();
   sec ();
      Serial.print ("Consiguiedo algo imposible hasta ahora\nque es enamorar a alguien como yo sin problema\ntus lindos ojos me cautivaron\ntus besos me hicieron prisionero\nmis pensamientos contigo se quedaron\ny tu eres la mujer que yo mas amo\n\n");
  delay(4500); Serial.print ("Quiera pedirle a la luna un favor\nque iluminen tus ojos por las noches\ncon tu permiso le dire que eres mi amor\ny espero que por tu parte no me reproches\n\n");  
  delay(4500);   Serial.print ("Con el tiempo aumenta tu belleza\ntus ojos mas hermosos que el cielo\neres lo mas lindo de la naturaleza\ny para ti, la felicidad es lo que anhelo\n\n");  
  delay(4500); Serial.print ("De nuestro amor creciente\nbesando tus labios con pasion\nmientras acariciaba tu piel\nconseguiste robar mi corazon\n\n");
  delay(4500); Serial.print ("unidos por nuestro amor\ncambiando el rumbo a la vida\nlleno de ilusion y felicidad\npara llenarte de mi amor\n\n");
  delay(4500); Serial.print ("San valentin sera recordado\npor el dia del amor y la amistad\ntu me recordaras a tu lado\nporque te amo de verdad\n\n");
  delay(4500);Serial.print ("Un beso en tus labios\ncon sabor a miel\ncomo dicen los sabios\nmejor tocando tu piel\n\n");
  delay(4500); Serial.print ("En un instante supe de ti\nen un dia te conoci\nen un mes me enamore de ti\nen un año vivo junto a ti\nen el resto de mi vida\nlo dare todo para ti\nporque tu me haces feliz\n\n");
  delay(4500); Serial.print ("Te amare siempre corazon mio\nestare a tu lado en momentos\nfaciles y dificiles\nen dias tristes y alegres\ncuando necesites un apoyo\ntendras en mi el mejor de todos\nsiempre seras\nla dueña de mi vida y mi corazon\nen momentos amargos sere tu fiel amigo\ny en los alegres tu mejor pasion\n\n");
  delay(4500);Serial.print ("Tu y yo juntos por siempre\n");
  delay(4500);Serial.print ("Te amo mi amor <3");delay(8000);  
  }




