const int pinOptoacoplador = 9;   // guarda el numero del pin para conectar el optoacoplador

     const int incremento = 5;   // incremento/decremento en el brillo del led

     const int pausa = 20;  // tiempo entre cada incremento

     void setup()  { 
         // en el setup no necesitamos hacer nada
         // con analogWrite no es necesario definir los pines como OUTPUT
     }

     void loop()  { 
         // hacemos un ciclo for para el fade desde el minimo al maximo sumando incremento
         // los valores del brillo estaran en el rango de 0 a 255):
         for(int brillo = 0; brillo <= 255; brillo += incremento) {
             analogWrite(pinOptoacoplador, brillo);           
             delay(pausa);                             
         }

         delay(pausa * 4);  // esperamos un tiempo mayor para empezar a apagarlo

         // ahora hacemos el ciclo for para el fade desde el maximo al minimo restando  incremento
         // los valores del brillo estaran en el rango de 255 a 0):
         for(int brillo = 255 ; brillo >= 0; brillo -= incremento) {
             analogWrite(pinOptoacoplador, brillo);        
             delay(pausa);                             
         }

         delay(pausa * 4);  // esperamos un tiempo mayor para empezar a encenderlo
     }
