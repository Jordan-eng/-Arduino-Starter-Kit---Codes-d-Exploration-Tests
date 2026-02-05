const int R1=2;
const int J1=1;
const int V1=0;

const int R2=10;
const int J2=9;
const int V2=8;
const int led1=3;
const int led2=4;
const int led3=5;
const int led4=6;

void setup() {
pinMode(R1,OUTPUT);
pinMode(J1,OUTPUT);
pinMode(V1,OUTPUT);

pinMode(R2,OUTPUT);
pinMode(J2,OUTPUT);
pinMode(V2,OUTPUT);

}

void loop() {
digitalWrite(R2, LOW);
digitalWrite(V1, LOW);
digitalWrite(J1, LOW);
digitalWrite(J2, LOW);
digitalWrite(R1, HIGH); 
digitalWrite(V2, HIGH);
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
digitalWrite(led3, HIGH);
digitalWrite(led4, LOW);
delay(6000);
digitalWrite(R2, LOW);
digitalWrite(V2, LOW);
digitalWrite(V1, LOW);
digitalWrite(R1, HIGH);
digitalWrite(J1, LOW); 
digitalWrite(J2, HIGH); 
delay(3000);
digitalWrite(R1, LOW); 
digitalWrite(V2, LOW);
digitalWrite(J1, LOW);
digitalWrite(J2, LOW); 
digitalWrite(V1, HIGH); 
digitalWrite(R2, HIGH);
digitalWrite(led1, LOW);
digitalWrite(led2, HIGH);
digitalWrite(led3, LOW);
digitalWrite(led4, HIGH);
delay(6000);
digitalWrite(V1, LOW); 
digitalWrite(J1, HIGH); 
digitalWrite(J2, LOW); 
digitalWrite(R2, HIGH); 
digitalWrite(V2, LOW);
digitalWrite(R1, LOW);
delay(3000);
}
