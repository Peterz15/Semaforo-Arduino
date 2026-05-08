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

//Semaforo 1
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
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW); 
  }
}

void loop() {
// Secuencia Vehicular
  digitalWrite(gLed, HIGH); 
  digitalWrite(r1, HIGH); digitalWrite(r2, HIGH); 
  digitalWrite(bLed, LOW);
  digitalWrite(b1, HIGH);  digitalWrite(b2, HIGH); 
  delay(5000);
  
  digitalWrite(gLed, LOW);
  digitalWrite(yLed, HIGH); 
  delay(2000);
  digitalWrite(yLed, LOW);
  digitalWrite(rLed, HIGH); 

  digitalWrite(r1, LOW); 
  digitalWrite(g1, HIGH);
  digitalWrite(b1, LOW);   
  digitalWrite(bLed, HIGH); 
  delay(5000);

  digitalWrite(g1, LOW);
  digitalWrite(y1, HIGH); 
  delay(2000);
  digitalWrite(y1, LOW);
  digitalWrite(r1, HIGH);

  digitalWrite(r2, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(b2, LOW);    
  digitalWrite(b1, HIGH);   
  delay(5000);

  digitalWrite(g2, LOW);
  digitalWrite(y2, HIGH);
  delay(2000);
  digitalWrite(y2, LOW);
  digitalWrite(r2, HIGH); 
}
