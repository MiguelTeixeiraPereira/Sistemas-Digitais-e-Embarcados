#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3
int conta = 0;
int aux = 0;
int auxb = 0;


void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool estado = digitalRead(pin_botao);
  bool estado2 = digitalRead(pin_botao2);
    if (estado == 1) {
    if (aux == 0) {
      conta++;
      aux = 1;
    }
  } else {
    aux = 0;
  }
    if (estado2 == 1) {
    if (auxb == 0) {
      conta--;
      auxb = 1;
    }
  } else {
    auxb = 0;
  }
if (conta > 15) {
  conta = 15;
}
if (conta < 0) {
  conta = 0;
}
if ((conta % 2) == 1 ) {
  digitalWrite(pin_led1, HIGH);
} else {
  digitalWrite(pin_led1, LOW);
}
if (((conta>>1) % 2) == 1) {
  digitalWrite(pin_led2, HIGH);
} else {
  digitalWrite(pin_led2, LOW);
}
if (((conta>>3) % 2) == 1) {
  digitalWrite(pin_led3, HIGH);
} else {
  digitalWrite(pin_led3, LOW);
}
}