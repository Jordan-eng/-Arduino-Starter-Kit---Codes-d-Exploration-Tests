int ledPin=13;
int timer=500;
void setup() {
pinMode(ledPin, OUTPUT);

}

void loop() {
 analogWrite(ledPin,0);
 delay(timer);
 analogWrite(ledPin,50);
 delay(timer);
 analogWrite(ledPin,100);
 delay(timer);
 analogWrite(ledPin,150);
 delay(timer);
 analogWrite(ledPin,200);
 delay(timer);
 analogWrite(ledPin,255);
 delay(timer);

 

}
