const int btn_minus = 3; //Bouton 1 pour décrémenter les chiffres
const int btn_plus = 4; //Bouton 2 pour incrémenter les chiffres
const int led_1 = 6; //Led 1
const int led_2 = 7; //Led 2
const int led_3 = 8; //Led 3
const int led_4 = 9; //Led 4
const int led_5 = 10;
const int led_6 = 11;
const int led_7 = 12;
const int led_8 = 13;
/*
Déclaration des variables utilisées pour le comptage et le décomptage
*/
int nombre_led = 0; //le nombre qui sera incrémenté et décrémenté
int etat_bouton; 
int memoire_plus = LOW; //état relâché par défaut pour le bouton 2
int memoire_minus = LOW; //état relâché par défaut pour le bouton 1
void setup()
{
pinMode(btn_plus, INPUT);
pinMode(btn_minus, INPUT);
pinMode(led_1, OUTPUT);
pinMode(led_2, OUTPUT);
pinMode(led_3, OUTPUT);
pinMode(led_4, OUTPUT);
pinMode(led_5, OUTPUT);
pinMode(led_6, OUTPUT);
pinMode(led_7, OUTPUT);
pinMode(led_8, OUTPUT);
}
void loop()
{

etat_bouton = digitalRead(btn_plus);
//Si le bouton a un état différent que celui enregistré ET que cet état est "appuyé"
if((etat_bouton != memoire_plus) && (etat_bouton == HIGH))
{
nombre_led++; //on incrémente la variable qui indique combien de LEDs devrons s'allumer
}
memoire_plus = etat_bouton; //on enregistre l'état du bouton pour le tour suivant
//et maintenant pareil pour le bouton qui décrémente
etat_bouton = digitalRead(btn_minus); //lecture de son état
//Si le bouton a un état différent que celui enregistré ET que cet état est "appuyé"
if((etat_bouton != memoire_minus) && (etat_bouton == HIGH))
{
nombre_led--; //on décrémente la valeur de nombre_led
}
memoire_minus = etat_bouton; //on enregistre l'état du bouton pour le tour suivant
//on applique des limites au nombre pour ne pas dépasser 4 ou 0 (puisqu'on a 4 LEDs)
if(nombre_led > 10)
{
nombre_led = 10;
}
if(nombre_led < 0)
{
nombre_led = 0;
}
//On créé une fonction affiche() pour l'affichage du résultat
//on lui envoie alors en paramètre la valeur du nombre de LED à éclairer
affiche(nombre_led);
}
void affiche(int valeur_recue)
{
//on éteint toutes les leds
digitalWrite(led_1, HIGH);
digitalWrite(led_2, HIGH);
digitalWrite(led_3, HIGH);
digitalWrite(led_4, HIGH);
digitalWrite(led_5, HIGH);
digitalWrite(led_6, HIGH);
digitalWrite(led_7, HIGH);
digitalWrite(led_8, HIGH);
//Pour chaque chiffre, le plus simple est de lister toutes les LEDs
//et de leur attribuer la valeur voulue
if(valeur_recue == 1) 
{
digitalWrite(led_1, LOW);
digitalWrite(led_2, HIGH);
digitalWrite(led_3, HIGH);
digitalWrite(led_4, LOW);
digitalWrite(led_5, HIGH);
digitalWrite(led_6, HIGH);
digitalWrite(led_7, HIGH);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 2)
{
digitalWrite(led_1, LOW);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, HIGH);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, HIGH);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 3) // "si la valeur reçue est égale... enfin... tu connais 
{
digitalWrite(led_1, HIGH);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, HIGH);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 4)
{
digitalWrite(led_1, HIGH);
digitalWrite(led_2, HIGH);
digitalWrite(led_3, LOW);
digitalWrite(led_4, LOW);
digitalWrite(led_5, HIGH);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 5)
{
digitalWrite(led_1, HIGH);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, LOW);
digitalWrite(led_5, LOW);
digitalWrite(led_6, HIGH);
digitalWrite(led_7, LOW);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 6)
{
digitalWrite(led_1, LOW);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, LOW);
digitalWrite(led_5, LOW);
digitalWrite(led_6, HIGH);
digitalWrite(led_7, LOW);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 7)
{
digitalWrite(led_1, HIGH);
digitalWrite(led_2, HIGH);
digitalWrite(led_3, HIGH);
digitalWrite(led_4, HIGH);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, HIGH);
}
if(valeur_recue == 8)
{
digitalWrite(led_1, LOW);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, LOW);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, LOW);
}
if(valeur_recue == 9)
{
digitalWrite(led_1, HIGH);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
digitalWrite(led_4, LOW);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, LOW);
}
if(valeur_recue == 10)
{
digitalWrite(led_1, LOW);
digitalWrite(led_2, LOW);
digitalWrite(led_3, HIGH);
digitalWrite(led_4, LOW);
digitalWrite(led_5, LOW);
digitalWrite(led_6, LOW);
digitalWrite(led_7, LOW);
digitalWrite(led_8, LOW);
}
}
