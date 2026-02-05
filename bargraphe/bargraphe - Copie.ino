const int btn_minus=3;
const int btn_plus=4;
const int led_0 =8;
const int led_1 =9;
const int led_2 =10;
const int led_3 =11;

int nombre_led = 0;
int etat_bouton;
int memoire_plus = LOW;
int memoire_minus = LOW;


void setup() {
pinMode( btn_minus, INPUT);
pinMode( btn_plus, INPUT);
pinMode(led_0, OUTPUT);
pinMode(led_1, OUTPUT);
pinMode(led_2, OUTPUT);
pinMode(led_3, OUTPUT);
Serial.begin(9600);

}

void loop() {
etat_bouton = digitalRead(btn_plus);
if((etat_bouton!=memoire_plus)&&(etat_bouton=HIGH))
{
nombre_led++; 
}
memoire_plus = etat_bouton; 
etat_bouton = digitalRead(btn_minus);
if((etat_bouton != memoire_minus) && (etat_bouton == HIGH))

{
nombre_led--;
}
memoire_minus = etat_bouton;
if(nombre_led > 4)
{
nombre_led = 4;
}
if(nombre_led < 0)
{
nombre_led = 0;
}

affiche(nombre_led);
}
void affiche(int valeur_recue)
{
digitalWrite(led_0, LOW);
digitalWrite(led_1, LOW);
digitalWrite(led_2, LOW);
digitalWrite(led_3, LOW);
if(valeur_recue >= 1)
{
digitalWrite(led_0, HIGH);
}
if(valeur_recue >= 2)
{
digitalWrite(led_1, HIGH); 

}
if(valeur_recue >= 3) 
{
digitalWrite(led_2, HIGH); 
}
if(valeur_recue >= 4)
{
digitalWrite(led_3, HIGH); 
}



}
