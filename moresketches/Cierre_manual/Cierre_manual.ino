int izq=4;
int der=5;
int Sabierto=6;
int Scerrado=7;
int parapeto =8;
int desbloqueo=9;
int abre=10;
int cierra=11;
int cierraleviejon =12;
int Block;
int Unlock;


void setup() {
  
  pinMode(izq,INPUT);
  pinMode(der,INPUT);
  pinMode(Sabierto,INPUT);
  pinMode(Scerrado,INPUT);
  pinMode(parapeto,INPUT);
  pinMode(desbloqueo,INPUT);
  pinMode(abre,OUTPUT);
  pinMode(cierra,OUTPUT);
  pinMode(cierraleviejon,OUTPUT);
}

void loop() {

  
  if ((digitalRead(der) == HIGH) && (digitalRead(Scerrado) == LOW))
 
  { //Abre
    digitalWrite(abre,HIGH);
  }
  else
  {
    digitalWrite(abre,LOW);
  }
  
    if ((digitalRead(izq) == HIGH) && (digitalRead(Sabierto) ==LOW))
  
    //Cierra
    {
      digitalWrite(cierra,HIGH);
    }
    else
    {
      digitalWrite(cierra,LOW);
    }
    
  
   
   Block = digitalRead(parapeto);
   Unlock = digitalRead(desbloqueo);
   
   if (Block==HIGH)
{
  digitalWrite(cierraleviejon,LOW);
}

if (Unlock==HIGH)
{
  digitalWrite(cierraleviejon,HIGH);
}

  }

