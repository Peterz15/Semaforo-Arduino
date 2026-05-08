const int gLed = 13;
const int yLed = 12;
const int rLed = 11;
const int bLed = 10;

void setup() {
  pinMode(rLed, OUTPUT);
  pinMode(yLed, OUTPUT);
  pinMode(gLed, OUTPUT);
  pinMode(bLed, OUTPUT);
  
  digitalWrite(rLed, LOW);
  digitalWrite(yLed, LOW);
  digitalWrite(gLed, LOW);
  digitalWrite(bLed, LOW);
}
