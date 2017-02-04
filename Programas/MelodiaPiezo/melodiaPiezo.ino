#include "pitches.h"
         // arreglo con las notas de la melodia:
         int melodia[] = {NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};

         // duracion de las notas: 4 = quarter note, 8 = eighth note, etc.:
         int duracionNotas[] = {4, 8, 8, 4, 4, 4, 4, 4};

         void setup() {
           // itera sobre las notas de la melodia:
           for (int estaNota = 0; estaNota < 8; estaNota++) {
           // calcula la duracion de la nota 
           // un segundo dividido entre duracionNotas[] 
           // ejemplo cuarto nota = 1000 / 4, octavo nota = 1000/8, etc.
           int duracionNota = 1000/duracionNotas[estaNota];
           tone(8, melodia[estaNota], duracionNota);

           // para distinguir las notas, hay que dejar un minimo de tiempo entre ellas 
           // la duracion + 30% funciona bien
           int pausaNota = duracionNota * 1.30;
           delay(pausaNota);
           // detiene el tone 
           noTone(8);
           }
         }

         void loop() {}
