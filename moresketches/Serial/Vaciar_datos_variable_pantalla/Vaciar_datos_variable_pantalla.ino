boolean state;
boolean puls=2;

void setup(){
  pinMode(puls,INPUT);
  Serial.begin(9600);}
  
  void loop(){
    state=digitalRead(puls);
    Serial.println(state);}
    
