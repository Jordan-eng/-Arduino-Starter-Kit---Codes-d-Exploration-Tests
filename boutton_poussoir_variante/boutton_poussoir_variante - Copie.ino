const int bouton = 7; 
const int led = 13;
void setup()
{
pinMode(bouton, INPUT); 
pinMode(led, OUTPUT); 
Serial.begin(9600); 
}
void loop()
{
if (digitalRead(bouton) == 1 )
{
digitalWrite(led, HIGH);
delay(500);
digitalWrite(led, LOW);
delay(500); 
}
else
{
digitalWrite(led, LOW); 
}
}
