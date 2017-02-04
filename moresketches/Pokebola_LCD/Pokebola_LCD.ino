#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,11,10,9,8);
byte one[]={B00000,
            B00001,
            B000110,  
            B01001,
            B01010,
            B10001,
            B10000,
            B11001};
byte two[]={B00000,
            B11100,
            B00011,  
            B00000,
            B10000,
            B00000,
            B11000,
            B00100}; 
byte three[]={B00000,
              B00000,
              B00000,  
              B10000,
              B10000,
              B01000,
              B01000,
              B11000};
byte four[]={B10111,
             B01000,
             B01000,  
             B00110,
             B00001,
             B00000,
             B00000,
             B00000};
byte five[]={B00111,
             B11000,
             B00000,  
             B00011,
             B11100,
             B00000,
             B00000,
             B00000};
byte six[]={B01000,
             B10000,
             B10000,  
             B00000,
             B00000,
             B00000,
             B00000,
             B00000};

void setup()
{
  lcd.begin(16,2);
  lcd.createChar(0,one);
  lcd.createChar(1,two);
  lcd.createChar(2,three);
  lcd.createChar(3,four);
  lcd.createChar(4,five);
  lcd.createChar(5,six);
}
void loop()
{
lcd.setCursor(0,0);
lcd.write(byte(0));
lcd.setCursor(1,0);
lcd.write(byte(1));
lcd.setCursor(2,0);
lcd.write(byte(2));
lcd.setCursor(0,1);
lcd.write(byte(3));
lcd.setCursor(1,1);
lcd.write(byte(4));
lcd.setCursor(2,1);
lcd.write(byte(5));
lcd.setCursor(5,0);
lcd.print("POKEMON");
delay(3);
lcd.clear();
}
