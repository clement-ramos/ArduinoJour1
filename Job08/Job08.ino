// Configuration des broches des LED
const int LED_1 = 2;
const int LED_2 = 3;
const int LED_3 = 4;
const int LED_4 = 5;
const int LED_5 = 6;
const int LED_6 = 7;
const int LED_7 = 8;
const int LED_6 = 9;

void setup() {
  // Configuration des broches des LED en sortie
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  pinMode(LED_7, OUTPUT);
  pinMode(LED_8, OUTPUT);
}

void loop() {
  // Faire clignoter les LED à tour de rôle
  digitalWrite(LED_1, HIGH);
  delay(500);
  digitalWrite(LED_1, LOW);

  digitalWrite(LED_2, HIGH);
  delay(500);
  digitalWrite(LED_2, LOW);

  digitalWrite(LED_3, HIGH);
  delay(500);
  digitalWrite(LED_3, LOW);

  digitalWrite(LED_4, HIGH);
  delay(500);
  digitalWrite(LED_4, LOW);

  digitalWrite(LED_5, HIGH);
  delay(500);
  digitalWrite(LED_5, LOW);

  digitalWrite(LED_6, HIGH);
  delay(500);
  digitalWrite(LED_6, LOW);

  digitalWrite(LED_7, HIGH);
  delay(500);
  digitalWrite(LED_6, LOW);

  digitalWrite(LED_8, HIGH);
  delay(500);
  digitalWrite(LED_8, LOW);
}