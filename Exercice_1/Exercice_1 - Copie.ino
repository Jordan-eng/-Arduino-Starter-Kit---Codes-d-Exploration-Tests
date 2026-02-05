const int a=13;
const int b=12;
const int c=11;
const int d=10;
const int s=4;

void setup() {
  pinMode(a,INPUT);
    pinMode(b,INPUT);
   pinMode(c,INPUT);
   pinMode(d,INPUT);
 pinMode(s,OUTPUT);
}

void loop() {
  if(digitalRead(a)==1&&(digitalRead(b)==1||digitalRead(c)==1||digitalRead(d)==1)||(digitalRead(b)==1&&digitalRead(c)==1&&digitalRead(d)==1))
  digitalWrite(s,HIGH);
  else
  digitalWrite(s,LOW);
  
}
