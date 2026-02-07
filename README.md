# 🤖 Arduino Starter Kit - Codes d'Exploration & Tests

Ce dépôt contient une collection de "sketches" (programmes) Arduino réalisés lors de l'exploration d'un kit de démarrage électronique. Chaque dossier contient le code nécessaire pour tester et comprendre le fonctionnement de composants spécifiques (capteurs, actionneurs, affichage).

## 📂 Contenu du Dépôt

Les projets sont classés par type de composant ou fonctionnalité :

### 💡 LEDs et Lumières

* **Contrôle basique :** `CLIGNOTAGE`, `code_1_clignoter_led`, `code_2_faire_clignoter_4_led`.
* **Effets avancés :**
* `chenillard_a_4_led`, `incrementation_chenillard` : Création de séquences lumineuses.
* `varier_en_douceur_luminositer` : Utilisation du PWM (Pulse Width Modulation).
* `bargraphe` : Gestion d'une barre de LEDs.


* **Feux de signalisation :** `feux_tricolore_program`, `feux_tricolore_variante`, `feuxxxxx`.

### 📟 Affichage

* **LCD_Display :** Affichage de texte sur un écran LCD (ex: 16x2).
* **afficheur_numerique :** Contrôle d'un afficheur 7 segments.
* **bcd :** Utilisation probable d'un décodeur BCD pour afficheur 7 segments ou logique binaire.

### 🎛️ Entrées Utilisateur (Inputs)

* **Boutons :** `montage_resitance_et_boutton`, `boutton_poussoir_variante`.
* **Joystick :** `joystick` (contrôle analogique X/Y).
* **Clavier :** `membrane_switch` (clavier matriciel).
* **Interrupteurs :** `tilt_switch` (capteur d'inclinaison/bille).

### 📡 Capteurs (Sensors)

* **Distance :** `ultrasonic_sensor` (HC-SR04).
* **Mouvement :** `motion_sensor` (PIR).
* **Environnement :**
* `Sound_Sensor_Module` : Détection de bruit.
* `water_level_detector` : Capteur de niveau d'eau / pluie.
* `varie_luminositer` (Photo-résistance/LDR).


* **Infrarouge :** `receive_remote_module` (Réception de signaux télécommande IR).

### 🔊 Son

* `active_buzze` : Buzzer actif (son continu).
* `passive_buzzer` : Buzzer passif (génération de mélodies/fréquences).

### ⚙️ Moteurs

* `servo_motor` : Contrôle de position d'un servomoteur.

### 📝 Exercices Divers

* `Exercice_1`, `exo 1`, `EXO01` : Codes d'entraînement et logique générale.

---

## 🛠️ Matériel Requis

Pour exécuter ces codes, vous aurez besoin de :

* Une carte **Arduino** (Uno, Mega, ou Nano).
* Le câble USB de connexion.
* Une **Breadboard** (platine d'essai) et des cavaliers (jumpers).
* Les composants spécifiques au module testé (LEDs, Résistances, Capteur Ultrason, LCD, etc.).

## 🚀 Comment utiliser ces codes

1. **Cloner le dépôt :**
```bash
git clone https://github.com/Jordan-eng/-Arduino-Starter-Kit---Codes-d-Exploration-Tests

```

2. **Ouvrir le projet :**
Ouvrez le fichier `.ino` situé dans le dossier du composant qui vous intéresse avec l'**Arduino IDE**.
3. **Montage :**
Réalisez le montage sur votre breadboard.
* *Note : Vérifiez les définitions des broches (`#define` ou `const int pin = ...`) en haut de chaque code pour savoir où brancher vos fils.*


4. **Téléverser :**
Sélectionnez votre carte et le port COM, puis cliquez sur "Téléverser" (Upload).

## 📚 Bibliothèques Nécessaires

Certains modules nécessitent l'installation de bibliothèques standards via le gestionnaire de bibliothèques Arduino :

* `LiquidCrystal` (pour le LCD).
* `Servo` (pour le servomoteur).
* `IRremote` (pour le module infrarouge).
* `Keypad` (pour le membrane switch).

## 👤 Auteur

**Jordan TOE**
*Étudiant en Ingénierie / Passionné d'électronique*

---

*Ce projet a été réalisé dans un but éducatif pour maîtriser les bases de l'électronique embarquée et du langage C++ pour Arduino.*

---

