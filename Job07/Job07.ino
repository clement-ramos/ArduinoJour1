//déclaration des variables globales
int ledPin = 13;    //broche pour la LED
int buttonPin = 2;  //broche pour le bouton
int buttonState = 0; //variable pour stocker l'état du bouton
int counter = 0; //variable pour compter les pressions sur le bouton
bool ledOn = false; //variable pour savoir si la LED est allumée ou éteinte

// - À l'appui sur le bouton, la LED s’allume
// - En appuyant deux fois sur le bouton, la LED reste allumée
// - En appuyant trois fois sur le bouton, la LED clignote
// - En cas d'appui prolongé sur le bouton, la LED s'éteint

void setup() {
  pinMode(ledPin, OUTPUT);      //configure la broche de la LED en sortie
  pinMode(buttonPin, INPUT);    //configure la broche du bouton en entrée
  digitalWrite(ledPin, LOW);    //initialise la LED éteinte
  Serial.begin(9600);
}

void loop() {
  buttonState = digitalRead(buttonPin); //lit l'état du bouton
  if (buttonState == HIGH) { //si le bouton est pressé
    counter++; //incrémenter le compteur
    delay(50); //attendre pour éviter les rebonds du bouton
  }
  if (counter == 1) { //si le bouton est pressé une fois
    digitalWrite(ledPin, HIGH); //allumer la LED
    Serial.println(counter);
    ledOn = true; //indiquer que la LED est allumée
  } 
  else if (counter == 2) { //si le bouton est pressé deux fois
    digitalWrite(ledPin, HIGH); //allumer la LED
    ledOn = true; //indiquer que la LED est allumée
    counter = 0; //réinitialiser le compteur
    while (digitalRead(buttonPin) == HIGH) { //attendre que le bouton soit relâché
      delay(10);
    }
  }
   else if (counter == 3) { //si le bouton est pressé trois fois
    counter = 0; //réinitialiser le compteur
    for (int i = 0; i < 3; i++) { //clignoter la LED trois fois
      digitalWrite(ledPin, HIGH);
      delay(200);
      digitalWrite(ledPin, LOW);
      delay(200);
    }
    ledOn = false; //indiquer que la LED est éteinte
  }
  if (digitalRead(buttonPin) == HIGH && ledOn == true) { //si le bouton est maintenu enfoncé
    digitalWrite(ledPin, LOW); //éteindre la LED
    ledOn = false; //indiquer que la LED est éteinte
    counter = 0; //réinitialiser le compteur
  }
}
