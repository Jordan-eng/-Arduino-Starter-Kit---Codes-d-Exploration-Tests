int timer=100;
void setup() {
for(int thisPin=10;thisPin<14;thisPin++){
  pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  for(int thisPin=10;thisPin<14;thisPin++){
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
  for(int thisPin=10;thisPin>=10;thisPin--){
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
  
}
