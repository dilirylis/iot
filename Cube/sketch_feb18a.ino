void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(A1, OUTPUT);
  pinMode(A2, OUTPUT);
  
  digitalWrite(A1, HIGH); 
  digitalWrite(A2, HIGH);
}

void loop()
{

  digitalWrite(A1, LOW); // на слой 1 куба подана земля

  for (int i = 2; i < 6; i++) {
    digitalWrite(i, HIGH);
    delay(400);
    digitalWrite(i, LOW);
  }
  
  digitalWrite(A1, HIGH);
  
  digitalWrite(A2, LOW); 
  for (int i = 2; i < 6; i++) {
    digitalWrite(i, HIGH);
    delay(400);
    digitalWrite(i, LOW);
  }
  
  digitalWrite(A2, HIGH);
  digitalWrite(A1, LOW);
  
  pairs();

  digitalWrite(A2, LOW);
  digitalWrite(A1, HIGH);

  pairs();

  digitalWrite(A2, HIGH);
  digitalWrite(A1, LOW);

  for (int i = 2; i < 6; i++) {
    digitalWrite(i, HIGH);
  }
  delay(800);
  for (int i = 2; i < 6; i++) {
    digitalWrite(i, LOW);
  }

  digitalWrite(A2, LOW);
  digitalWrite(A1, HIGH);

  for (int i = 2; i < 6; i++) {
    digitalWrite(i, HIGH);
  }
  delay(800);
  for (int i = 2; i < 6; i++) {
    digitalWrite(i, LOW);
  }

  digitalWrite(A2, HIGH);
  digitalWrite(A1, LOW);

}

void pairs() {
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(800);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(800);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);

  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(800);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

  digitalWrite(5, HIGH);
  digitalWrite(3, HIGH);
  delay(800);
  digitalWrite(5, LOW);
  digitalWrite(3, LOW);
}