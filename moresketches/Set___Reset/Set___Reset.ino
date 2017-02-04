byte led = 13;
byte Pulsador_Set = 2;
byte Pulsador_Reset = 3;
byte Estado_Pulsador_S;
byte Estado_Pulsador_R;

void setup() {
pinMode(led, OUTPUT);
pinMode(Pulsador_Set, INPUT);
pinMode(Pulsador_Reset, INPUT);
}

void loop() {
Estado_Pulsador_S = digitalRead(Pulsador_Set);
Estado_Pulsador_R = digitalRead(Pulsador_Reset);
if (Estado_Pulsador_S == 1)
{
digitalWrite(led, 1); 
}
if (Estado_Pulsador_R == 1)
{
digitalWrite(led, 0); 
}
}


