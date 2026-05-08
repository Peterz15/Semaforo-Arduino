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
