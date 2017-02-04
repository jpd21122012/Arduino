#include <EEPROM.h>

const int tablaGC[]={50,100,150,200,250,255,255,256,257,258,259,50,100,150,200,250,255,255,256,257,258,259,260};  //0,5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,110,115,120,125,130,135Arreglo con los valores segun la tabla de grados centigrados segun tabla tipo k
int const *p;

void setup()
{
   int direc=0,valor; 
   Serial.begin(9600);
  /* Limpiar memoria EEPROM de Arduino*/
  for (int i = 0; i < 512; i++)
   {
     EEPROM.write(i, 0);
   }
    delay(100);
   
   Serial.println("Inicia el guardado en EEPROM");
   for(int i =0; i<=sizeof(tablaGC);i++)
  {
     valor=*(p+i);
    EEPROM.write(i, tablaGC[i]); 
    delay(10);   
  }  
  delay(2000);
}

void loop()
{    
  Serial.println("Lectura de la EEPROM");
  for(int i=0; i<sizeof(tablaGC); i++)
  {
    Serial.println(EEPROM.read(i));
    delay(1000);
  }
}
