void setup() {
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(9600);
}

void loop() 
{
  if(Serial.available()>1)
  {
    char clavier = Serial.read();
    switch(clavier)
    {
      case '0' ;
      digitalWrite(N55, LOW);
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      break;
      case '1' ;
      digitalWrite(N55, HIGH);
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      break;
      case '2' ;
      digitalWrite(N55, HIGH);
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, HIGH);
      break;
      default ;
      digitalWrite(N55, LOW);
      digitalWrite(IN1, LOW);
      digitalWrite(IN2, LOW);
      break;
    }  
  }


} 
