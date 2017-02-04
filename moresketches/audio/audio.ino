// SOUND REACTIVE LED TEST by Antinum
// Don't abruptly steal, but a comment in your source code crediting me is fine.
// HOWEVER this code is probably quite messy and can be tweaked quite a bit
// Have fun with this, though :)
const byte totalLeds=11;
int incomingAudio[30]={};
int averageAudio=0;
int ticker=1;
byte peak=1;
void setup(){
for(byte i=0;i<=totalLeds;i++)
pinMode(2+i, OUTPUT); // define LEDs
}
void loop(){
incomingAudio[ticker%30]=analogRead(A5); // put in the mic reading at A5 into a spot in the array
digitalWrite(2+peak,LOW); // turn off the peak LED (sort of "PWM" to make it dimmer than usual)
if(ticker%30==0){ // read our averages every 30 'ticks'
for(byte i=0;i<30;i++)averageAudio+=incomingAudio[i];
averageAudio/=30; // put our average reading into this variable
for(byte i=0;i<=totalLeds;i++){
digitalWrite(2+i,LOW); // turn off all LEDs
}
for(float i=0;i<=totalLeds;i++){ // This loop basically turns on as many LEDs as there is 'loudness' into the mic

if(i>averageAudio/90-2)break; // NOTE: tweak around with this line to change how the LEDs respond to different values
// I've messed around with it and found that this seems to work well for 11 LEDs or so
if(peak<i)peak=i; // This sets the 'peak' LED to the highest value it sees
digitalWrite(2+i,HIGH);
}
averageAudio=0; // reset the average
if(ticker>90*5){ticker=1;if(peak>0)peak--;} // this basically determines the speed at which the peak LED falls back down,

digitalWrite(2+peak,HIGH);
}
ticker++;
}
