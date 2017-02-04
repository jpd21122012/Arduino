const int pinPot = 0;
const int pinMotA = 5;
const int pinMotB = 6;
int valorPot;

void setup() {
pinMode(pinMotA, OUTPUT);
pinMode(pinMotB, OUTPUT);
digitalWrite (pinMotA, LOW);
digitalWrite (pinMotB, LOW);
}

void loop() {
valorPot = analogRead (pinPot);
if (valorPot < 500){
digitalWrite (pinMotA, HIGH);
digitalWrite (pinMotB, LOW);
}
else if (valorPot > 524)
{digitalWrite (pinMotA, LOW);
digitalWrite (pinMotB, HIGH);
} else { 
digitalWrite (pinMotA, LOW);
digitalWrite (pinMotB, LOW);

    }
}
