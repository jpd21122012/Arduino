int motorPin1 = 8;                             
int motorPin2 = 9;          
int motorPin3 = 10;      
int motorPin4 = 11;
void setup() {
  pinMode(motorPin1, OUTPUT);                  
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);}
  
void loop() {
    for (int count = 0; count < 500; count++)       
       { // Punto  A (Primero)
        digitalWrite(motorPin1, HIGH);       
        digitalWrite(motorPin2, LOW);       
        digitalWrite(motorPin3, LOW);        
        digitalWrite(motorPin4, HIGH);      
        delay(5); // Tiempo entre pulsos
        
        // Punto  B (Segundo)        
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(5);
        
        
        // Punto  C (Tercero)
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, HIGH);
        digitalWrite(motorPin4, LOW);
        delay(5); 
        
         // Punto  D (Cuarto)
        digitalWrite(motorPin1, LOW); 
        digitalWrite(motorPin2, LOW); 
        digitalWrite(motorPin3, HIGH); 
        digitalWrite(motorPin4, HIGH); 
        delay(5); }   
        delay(1000);
        for (int count = 0; count <500; count++)  
        
         // Punto  D (Cuarto)
       {digitalWrite(motorPin1, LOW); 
        digitalWrite(motorPin2, LOW); 
        digitalWrite(motorPin3, HIGH); 
        digitalWrite(motorPin4, HIGH); 
        delay(5);
        
        // Punto  C (Tercero)
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, HIGH);
        digitalWrite(motorPin4, LOW);
        delay(5); 
        
        // Punto  B (Segundo)        
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, HIGH);
        digitalWrite(motorPin3, LOW);
        digitalWrite(motorPin4, LOW);
        delay(5);
        
        // Punto  A (Primero)
        digitalWrite(motorPin1, HIGH);       
        digitalWrite(motorPin2, LOW);       
        digitalWrite(motorPin3, LOW);        
        digitalWrite(motorPin4, HIGH);      
        delay(5);}
        
        delay(1000);  }
