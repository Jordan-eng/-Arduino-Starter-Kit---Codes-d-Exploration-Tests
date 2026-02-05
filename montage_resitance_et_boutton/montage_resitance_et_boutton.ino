
const int bouton =13; 
const int led = 4;
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
delay(250);
digitalWrite(led, LOW);
delay(250);
}
else
{
digitalWrite(led, LOW); 
}
}
