
void setup() {
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(100);
  digitalWrite(9, HIGH);
  digitalWrite(8,LOW);
  delay(100);
}
