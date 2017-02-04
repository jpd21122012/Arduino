byte led=7;
int potPin = 0;
void setup()
{
Serial.begin(9600);
pinMode(led,OUTPUT);
}
void loop()
{
int reading = analogRead(potPin);
Serial.println(reading);
analogWrite(led,reading);
delay(500);
}
