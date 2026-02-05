#include <Servo.h>

// Définition des broches
const int joystickPin = A0; // Axe X du joystick
const int buttonPin = 7; // Bouton du joystick
const int servoPin = 9; // Broche du servomoteur
const int buzzerPin = 11; // Broche du buzzer

Servo monServo; // Création de l'objet Servo

void setup() {
    pinMode(buttonPin, INPUT_PULLUP); // Configuration du bouton en entrée avec résistance interne
    pinMode(buzzerPin, OUTPUT); // Configuration du buzzer en sortie
    monServo.attach(servoPin); // Attache le servomoteur à la broche définie
}

void loop() {
    int valeurJoystick = analogRead(joystickPin); // Lire la valeur du joystick
    int angle = map(valeurJoystick, 0, 1023, 0, 180); // Convertir la valeur en un angle
    monServo.write(angle); // Déplacer le servomoteur à l'angle correspondant
    
    if (digitalRead(buttonPin) == LOW) { // Vérifier si le bouton est appuyé
        tone(buzzerPin, 1000); // Activer le buzzer avec une fréquence de 1000 Hz
        for (int i = 0; i < 360; i += 10) { // Effectuer un tour complet en incréments
            monServo.write(i % 180); // Limiter l'angle entre 0 et 180
            delay(15);
        }
        noTone(buzzerPin); // Désactiver le buzzer
    }
    
    delay(15); // Petite pause pour éviter les oscillations
}
