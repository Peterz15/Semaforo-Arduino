const int gLed = 13;
const int yLed = 12;
const int rLed = 11;
const int bLed = 10;

const int g1 = 9;
const int y1 = 8;
const int r1 = 7;
const int b1 = 6;

const int g2 = 5;
const int y2 = 4;
const int r2 = 3;
const int b2 = 2;

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

void loop() {
  // Secuencia Vehicular: Verde -> Amarillo -> Rojo
  digitalWrite(gLed, HIGH);
  digitalWrite(rLed, LOW);
  delay(5000); 

  digitalWrite(gLed, LOW);
  digitalWrite(yLed, HIGH);
  delay(2000);
  digitalWrite(yLed, LOW);

  digitalWrite(rLed, HIGH);
  delay(5000);
  
  digitalWrite(rLed, HIGH);
  digitalWrite(bLed, HIGH); 
  delay(5000);
  digitalWrite(bLed, LOW);
}
