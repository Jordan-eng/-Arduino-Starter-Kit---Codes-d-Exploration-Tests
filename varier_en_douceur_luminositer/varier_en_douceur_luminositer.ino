int ledPin=13;

void setup() {

}

void loop() {
  for(int fadeValue=0;fadeValue<=255;fadeValue+=3){
  analogWrite(ledPin, fadeValue);
  delay(30);
  }
  for(int fadeValue=255;fadeValue>=0;fadeValue-=3){
  analogWrite(ledPin, fadeValue);
  delay(30);
  }
}
