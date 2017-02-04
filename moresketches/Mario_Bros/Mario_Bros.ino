#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);

byte a1[8] = {0,0,0,0,0,0,0,0};
byte a2[8] = {0,0,1,11,9,7,7,0};
byte a3[8] = {0,0,20,23,27,16,30,0};
byte a4[8] = {0,0,0,0,16,0,0,0};//--------------
byte a5[8] = {0,0,1,1,1,0,0,0};
byte a6[8] = {0,0,18,24,16,0,0,0};
byte a7[8] = {0,0,9,3,1,0,0,0};
byte a8[8] = {0,0,16,16,16,0,0,0};

//*******************************************

byte a9[8] = {0,0,0,0,0,0,0,0};
byte a10[8] = {7,15,0,0,0,0,0,2};
byte a11[8] = {24,31,0,0,0,0,0,0};
byte a12[8] = {0,0,0,0,0,0,0,0};//--------------
byte a13[8] = {0,0,0,0,0,0,0,0};
byte a14[8] = {2,3,5,7,15,14,0,0};
byte a15[8] = {8,24,20,28,30,14,0,0};
byte a16[8] = {0,0,0,0,0,0,0,0};

//********************************************

byte a17[8] = {0,0,0,0,0,0,0,0};
byte a18[8] = {0,0,14,20,22,24,0,13};
byte a19[8] = {0,0,8,8,4,15,0,24};
byte a20[8] = {0,0,0,0,0,0,0,0};//--------------
byte a21[8] = {0,1,0,0,0,0,0,1};
byte a22[8] = {29,28,8,0,0,0,28,28};
byte a23[8] = {23,7,2,0,0,0,7,7};
byte a24[8] = {0,16,0,0,0,0,0,16};

//********************************************

byte a25[8] = {0,0,0,3,2,2,2,2};
byte a26[8] = {0,0,0,31,0,0,0,0};
byte a27[8] = {0,0,0,31,0,0,0,0};
byte a28[8] = {0,0,0,24,8,8,8,8};
byte a29[8] = {2,2,2,2,3,0,0,0};
byte a30[8] = {0,0,0,0,31,0,0,0};
byte a31[8] = {0,0,0,0,31,0,0,0};
byte a32[8] = {8,8,8,8,24,0,0,0};

//********************************************

byte a33[8] = {0,0,0,0,1,1,1,1};
byte a34[8] = {0,0,0,0,31,0,0,0};
byte a35[8] = {0,0,0,0,31,0,0,0};
byte a36[8] = {0,0,0,0,16,16,16,16};
byte a37[8] = {1,1,1,1,0,0,0,0};
byte a38[8] = {0,0,0,31,0,0,0,0};
byte a39[8] = {0,0,0,31,0,0,0,0};
byte a40[8] = {16,16,16,16,0,0,0,0};



void setup()
{
 lcd.begin(16, 2);
 }

void loop()
{
lcd.createChar(1, a1);
lcd.createChar(2, a2);
lcd.createChar(3, a3);
lcd.createChar(4, a4);
lcd.createChar(5, a5);
lcd.createChar(6, a6);
lcd.createChar(7, a7);
lcd.createChar(8, a8);
dibuja();
delay(50);

lcd.createChar(1, a9);
lcd.createChar(2, a10);
lcd.createChar(3, a11);
lcd.createChar(4, a12);
lcd.createChar(5, a13);
lcd.createChar(6, a14);
lcd.createChar(7, a15);
lcd.createChar(8, a16);
dibuja();
delay(50);

lcd.createChar(1, a17);
lcd.createChar(2, a18);
lcd.createChar(3, a19);
lcd.createChar(4, a20);
lcd.createChar(5, a21);
lcd.createChar(6, a22);
lcd.createChar(7, a23);
lcd.createChar(8, a24);
dibuja();
delay(50);

}

void dibuja(){

for(int i=0;i<4;i++){
lcd.setCursor(i+6, 0);
lcd.write(i+1);
}

for(int i=0;i<4;i++){
lcd.setCursor(i+6, 1);
lcd.write(i+5);
}
}
