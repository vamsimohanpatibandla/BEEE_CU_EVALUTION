int value=0;
void setup() {
  Serial .begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
          


}

void loop() {
  {
    if (value<500)
    
  {
  digitalWrite(13,HIGH);
  digitalWrite(12,HIGH);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
  }
  else
  {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
      digitalWrite(10,LOW);
  } 
  }
} 
