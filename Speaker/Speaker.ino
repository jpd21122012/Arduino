const int speaker=12;
void setup() {
pinMode(speaker,OUTPUT);
}

void loop() {
wave(speaker,400,500);
delay(50);
wave(speaker,540,500);
delay(50);
wave(speaker,300,500);
delay(1000);
}

void wave(int pin,float frequency,int duration){
float period =1/frequency*1000*1000;
long int startTime=millis();
while(millis()-startTime<duration){
digitalWrite(pin,HIGH);
delayMicroseconds(period/2);
digitalWrite(pin,LOW);
delayMicroseconds(period/2);

}
}
