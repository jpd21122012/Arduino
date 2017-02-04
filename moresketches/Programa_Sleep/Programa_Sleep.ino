
#include <EEPROM.h>
#include <LiquidCrystal.h>

#define Bpreset1 A4
//#define Bpreset2 2
//#define Bpreset3 3
#define Bsegundos A3
#define Bminutos A2
#define Bcomienzo A1

#define pinSalida A5


#define MApreset1 1
//#define MApreset2 2
//#define MApreset3 3

//--------------------------CANCIONES----------------------------//

int speakerPin = 2;

//bocina
 
#define c 261
#define d 294
#define e 329
#define f 349
#define g 391
#define gS 415
#define a 440
#define aS 455
#define b 466
#define cH 523
#define cSH 554
#define dH 587
#define dSH 622
#define eH 659
#define fH 698
#define fSH 740
#define gH 784
#define gSH 830
#define aH 880

//------------------------//
 byte button;
 byte memoryAddress;
//Tiempo
byte minutos;
byte segundos;

// LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup()  {//Comienza programa
   
   pinMode(Bcomienzo, INPUT);
   pinMode(Bminutos, INPUT);
   pinMode(Bsegundos, INPUT);
   
   
   pinMode(pinSalida, OUTPUT);

   
   pinMode(Bpreset1, INPUT);
   //pinMode(Bpreset2, INPUT);
  // pinMode(Bpreset3, INPUT);
   pinMode(speakerPin, OUTPUT); 
   //pinMode(buzzerPin, OUTPUT);
  
  lcd.begin(16, 2);//Mensaje de bienvenida
  lcd.setCursor(0,0);
  lcd.print("Buenos dias");
  delay(200); // Tiempo mensaje 1
  lcd.setCursor(0,1);
  lcd.print("Sr. Campos");
  delay(5000);  //Tiempo mensaje 2 
  lcd.clear();
  
    
  lcd.setCursor(0,0);
  lcd.print("Be serius now");
  lcd.setCursor(0,1);
  lcd.print("");
  delay(3000);
  lcd.clear();
    
  minutos = 0;
  segundos = 0;  
}

///////////////-----------------------------------------------------------------/////
//////////////--------------------------MARCHA IMPERIAL ------------------------/////



void beep (unsigned char speakerPin, int frequencyInHertz, long timeInMilliseconds)
{ 
   
    
    int x; 	 
    long delayAmount = (long)(1000000/frequencyInHertz);
    long loopTime = (long)((timeInMilliseconds*1000)/(delayAmount*2));
    for (x=0;x<loopTime;x++) 	 
    { 	 
        digitalWrite(speakerPin,HIGH);
        delayMicroseconds(delayAmount);
        digitalWrite(speakerPin,LOW);
        delayMicroseconds(delayAmount);
    } 	    
    
    delay(20);
    //Delay para separar las notas
} 	 
  	 
void march()
{ 
    
    beep(speakerPin, a, 500); 
    beep(speakerPin, a, 500);     
    beep(speakerPin, a, 500); 
    beep(speakerPin, a, 500);
    
}

void imprime_guardando(byte memo){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("La magia esta"); //Mensaje de memoria
  lcd.setCursor(0,1);
  lcd.print("ocurriendo...");
  lcd.setCursor(11,1);
  lcd.print(memo, 10);
  delay(1500);
}

void imprime_leyendo(int val){ 
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Desempolvando");
  lcd.setCursor(3,1);
  lcd.print("Memoria ");
  lcd.setCursor(11,1);
  lcd.print(val, 10);
  delay(2000);
  lcd.clear();

}
void imprime_guardado_completo(){
  lcd.clear();
  lcd.setCursor(4,0);
  lcd.print("Arre!");
  delay(1500);

}
void anti_rebote_minutos (){

if (digitalRead(Bminutos)==LOW){  ////HIGH
    delay(40);
    if (digitalRead(Bminutos) == LOW){  ////HIGH
    minutos += 1;
    delay(90);
    }
   }
   }
   
   
void anti_rebote_segundos (){

if (digitalRead(Bsegundos)==LOW){   ///HIGH
    delay(40);
    if (digitalRead(Bsegundos) == LOW){  ///HIGH
    if(segundos <=58){
    segundos += 1;
    }else if(segundos = 59){
    //limpiar caracter lcd
    lcd.clear();
    segundos = 0;
    minutos += 1;
    }
    delay(50);
    }
   }
   }
  
void print_comienzo(){
    
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Arre,Arre,Arriba");
    delay(2000);
    lcd.clear();

}

void print_cuenta_atras(){

do{

  if (segundos > 0){
             
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print("Minus: ") ;
      lcd.print(minutos, 10);
      lcd.setCursor(0,1);
      lcd.print("Segs: ");
      lcd.print(segundos, 10);
      delay (1000);
      segundos --;   
         
  }
   
  if (minutos > 0){
      if (segundos <= 0){
      minutos--;
      segundos = 59; 
      }
  
  }
 }while (segundos != 0);

}

void print_finalizado(){

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Fuego!!");//Mensaje fin de temporización
  lcd.setCursor(0,1);
  lcd.print("");
  delay(3000);   //////////////////////////////////
  lcd.clear();
  lcd.setCursor(3,0);
 // lcd.print("Thinking4u");
  //lcd.setCursor(0,2);
 // lcd.print("Design Carlitoss");
    
        
}
///////////////////////////////////////////////////////////////////
void check_preset1(byte button, byte memoryAddress){
    
    if (digitalRead(button)==HIGH){  ///LOW
        delay(100);
        if(digitalRead(button)==HIGH){  ///LOW
            delay(1000);
            if (digitalRead(button) == HIGH){  ///LOW
              delay(10);
               //Se ha soltado, leemos de eeprom
               imprime_leyendo(memoryAddress);
               minutos = EEPROM.read(memoryAddress); 
               delay(100);
               segundos = EEPROM.read(memoryAddress+10);
               delay(100);
               lcd.clear();
            }
          
           else if (digitalRead(button) == LOW){    //Sigue pulsado write a eeprom  ///HIGH
               imprime_guardando(memoryAddress);
               delay(100);
               EEPROM.write(memoryAddress, minutos);
               delay(100);
               lcd.clear();
               //imprime_guardando(segundos);
               EEPROM.write(memoryAddress+10, segundos);
               delay(500); 
               imprime_guardado_completo();
               delay(500);
               lcd.clear();
                                                                                           
            
            }
        }
    }
}



//////////////////////////////////////////////////////////////
void check_preset(byte button, byte memoryAddress){
    
    if (digitalRead(button)==LOW){  ///HIGH  
        delay(10);
        if(digitalRead(button)==LOW){    ///HIGH
            delay(1000);
            if (digitalRead(button) == HIGH){  //LOW
               //Se ha soltado, leemos de eeprom
               imprime_leyendo(memoryAddress);
               minutos = EEPROM.read(memoryAddress); 
               delay(100);
               segundos = EEPROM.read(memoryAddress+10);
               delay(100);
               lcd.clear();
               
            } 
            else if (digitalRead(button) == LOW){    //Sigue pulsado write a eeprom  ////HIGH
               imprime_guardando(memoryAddress);
               delay(100);
               EEPROM.write(memoryAddress, minutos);
               delay(100);
               lcd.clear();
               //imprime_guardando(segundos);
               EEPROM.write(memoryAddress+10, segundos);
               delay(500); 
               imprime_guardado_completo();
               delay(500);
               lcd.clear();
            }
        }
    }
}


void loop() {
 
 
   anti_rebote_minutos();
   anti_rebote_segundos();
  
  check_preset(Bpreset1, MApreset1);
   //check_preset(Bpreset2, MApreset2);
   //check_preset(Bpreset3, MApreset3);
//  check_preset1(Bpreset; MApreset);
    


   delay(200);
     
   lcd.setCursor(0,0);
   lcd.print("Minus: ");
   lcd.print(minutos,10);
   lcd.setCursor(0,1);
   lcd.print("Segs: ");
   lcd.print(segundos,10);
 

   if(digitalRead(Bcomienzo) == LOW){   ////HIGH
      delay (50);
      if(digitalRead(Bcomienzo) == LOW){  ////HIGH
        print_comienzo();
        digitalWrite(pinSalida, 0);    // Al establecer a 0 se enciende "durante"
         check_preset1(Bpreset1, MApreset1);
        print_cuenta_atras();
        digitalWrite(pinSalida, 1);  //Al establecer a 0 se enciende "despues de"
        
            
        print_finalizado();
        march();                  // SONIDO DE BUZZER FINALIZADO
        lcd.clear();
        
}
      
   }

}



