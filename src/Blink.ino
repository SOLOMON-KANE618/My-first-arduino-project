[200~/*
  Projet : Test Blink LED - Arduino
  Auteur : Salomon
  Description : Fait clignoter une LED branchée sur la broche 13 
                avec un intervalle de 1 seconde.
*/

// Définition de la broche
const int LED_PIN = 13;

void setup() {
  // Configurer la broche 13 en sortie
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Allumer la LED
  delay(1000);                 // Attendre 1 seconde (1000 ms)
  
  digitalWrite(LED_PIN, LOW);  // Éteindre la LED
  delay(1000);                 // Attendre 1 seconde
cat <<'EOF'> src/Blink.ino
[200~/*
  Projet : Test Blink LED - Arduino
  Auteur : Salomon
  Description : Fait clignoter une LED branchée sur la broche 13 
                avec un intervalle de 1 seconde.
*/

// Définition de la broche
const int LED_PIN = 13;

void setup() {
  // Configurer la broche 13 en sortie
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH); // Allumer la LED
  delay(1000);                 // Attendre 1 seconde (1000 ms)
  
  digitalWrite(LED_PIN, LOW);  // Éteindre la LED
  delay(1000);                 // Attendre 1 seconde
}
