const int R1=4;
const int J1=5;
const int V1=6;

const int R2=11;
const int J2=12;
const int V2=13;

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
delay(6000);
digitalWrite(R2, LOW);
digitalWrite(V2, LOW);
digitalWrite(V1, LOW);
digitalWrite(R1, HIGH);
digitalWrite(J1, LOW); 
digitalWrite(J2, HIGH); 
delay(3000);
digitalWrite(R2, HIGH);
digitalWrite(V2, LOW);
digitalWrite(V1, LOW);
digitalWrite(R1, HIGH);
digitalWrite(J1, LOW); 
digitalWrite(J2, LOW); 
delay(2000);
digitalWrite(R1, LOW); 
digitalWrite(V2, LOW);
digitalWrite(J1, LOW);
digitalWrite(J2, LOW); 
digitalWrite(V1, HIGH); 
digitalWrite(R2, HIGH);
delay(6000);
digitalWrite(V1, LOW); 
digitalWrite(J1, HIGH); 
digitalWrite(J2, LOW); 
digitalWrite(R2, HIGH); 
digitalWrite(V2, LOW);
digitalWrite(R1, LOW);
delay(3000);
digitalWrite(R2, HIGH);
digitalWrite(V2, LOW);
digitalWrite(V1, LOW);
digitalWrite(R1, HIGH);
digitalWrite(J1, LOW); 
digitalWrite(J2, LOW); 
delay(2000);
}
