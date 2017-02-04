const int xPin = 2;     // X output of the accelerometer
const int yPin = 3;     // Y output of the accelerometer
void setup() {
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);}
void loop() {
  int pulseX, pulseY;
  int accelerationX, accelerationY;
 pulseX = pulseIn(xPin, HIGH);
  pulseY = pulseIn(yPin, HIGH);
  accelerationX = ((pulseX / 10) - 500) * 8;
  accelerationY = ((pulseY / 10) - 500) * 8;
  Serial.print(accelerationX);
  Serial.print("\t");
  Serial.print(accelerationY);
  Serial.println();
  delay(100);
}
