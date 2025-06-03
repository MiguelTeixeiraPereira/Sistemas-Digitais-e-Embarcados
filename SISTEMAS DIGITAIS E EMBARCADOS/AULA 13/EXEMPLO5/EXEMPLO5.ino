#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_botao 2
#define pin_botao2 3

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);

}

void loop() {
  bool estado = digitalRead(pin_botao);
  bool estado2 = digitalRead(pin_botao2);
  if (estado && estado2 == 1) {
  }
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }
  if (estado || estado2 == 1) {
    digitalWrite(pin_led2, HIGH);
  } else {
    digitalWrite(pin_led2, LOW);
  }
  if (estado ^ estado2 == 1) {
    digitalWrite(pin_led3, HIGH);
  } else {
    digitalWrite(pin_led3, LOW);
  }
}