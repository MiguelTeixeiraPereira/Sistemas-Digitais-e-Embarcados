#define pin_led1 8
#define pin_led2 9
#define pin_led3 10    //está defininfo as variaveis que são os pinos neste caso.
#define pin_led4 11

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);    //está setando a posição da saida do pino.
  pinMode(pin_led4, OUTPUT);

}

void loop() {
  if (Serial.available() == 1 ) {
    char i = Serial.read();
    Serial.println(i);
  }
  Serial.println("liga LED");
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  delay(1000); 
  Serial.println("desliga LED");                        //está definindo a movimentação dos pinos, como liga e desliga.
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  delay(1000);
}