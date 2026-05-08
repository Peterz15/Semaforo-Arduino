/* * Proyecto: Sistema Sincronizado de Semáforos - IUJO
 * Integrante: Pedro Riera
 * Materia: Electiva - Ing. Hector Mendoza
 */

// Definición de pines (Organizados por semáforo)
// Semáforo 1: 13, 12, 11 (V, A, R) + 10 (Azul)
const int gLed = 13;
const int yLed = 12;
const int rLed = 11;
const int bLed = 10;
// Semáforo 2: 9, 8, 7 (V, A, R) + 6 (Azul)
const int g1 = 9;
const int y1 = 8;
const int r1 = 7;
const int b1 = 6;
// Semáforo 3: 5, 4, 3 (V, A, R) + 2 (Azul)
const int g2 = 5;
const int y2 = 4;
const int r2 = 3;
const int b2 = 2;

void setup() {
  // Configuración de todos los pines como SALIDA
  for (int i = 2; i <= 13; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW); // Iniciar todo apagado
  }
}

void loop() {
  // --- FASE 1: Semáforo 1 Avanza ---
  digitalWrite(gLed, HIGH); 
  digitalWrite(r1, HIGH); digitalWrite(r2, HIGH); // Los demás en Rojo
  digitalWrite(bLed, LOW); // Peatón 1 NO cruza
  digitalWrite(b1, HIGH);  digitalWrite(b2, HIGH); // Peatones 2 y 3 cruzan seguro
  delay(5000);
  
  digitalWrite(gLed, LOW);
  digitalWrite(yLed, HIGH); // Transición Amarillo S1
  delay(2000);
  digitalWrite(yLed, LOW);
  digitalWrite(rLed, HIGH); // S1 queda en Rojo

  // --- FASE 2: Semáforo 2 Avanza ---
  digitalWrite(r1, LOW); 
  digitalWrite(g1, HIGH);
  digitalWrite(b1, LOW);    // Peatón 2 NO cruza
  digitalWrite(bLed, HIGH); // Peatón 1 ahora puede cruzar
  delay(5000);

  digitalWrite(g1, LOW);
  digitalWrite(y1, HIGH); // Transición Amarillo S2
  delay(2000);
  digitalWrite(y1, LOW);
  digitalWrite(r1, HIGH); // S2 queda en Rojo

  // --- FASE 3: Semáforo 3 Avanza ---
  digitalWrite(r2, LOW);
  digitalWrite(g2, HIGH);
  digitalWrite(b2, LOW);    // Peatón 3 NO cruza
  digitalWrite(b1, HIGH);   // Peatón 2 ahora puede cruzar
  delay(5000);

  digitalWrite(g2, LOW);
  digitalWrite(y2, HIGH); // Transición Amarillo S3
  delay(2000);
  digitalWrite(y2, LOW);
  digitalWrite(r2, HIGH); // S3 queda en Rojo
}
