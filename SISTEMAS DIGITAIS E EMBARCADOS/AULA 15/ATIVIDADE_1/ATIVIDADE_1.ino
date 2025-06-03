#define pin_led1 8
#define pin_botao 2
#define pin_botao2 3
int conta = 0;
int aux = 0;


void setup() {
  pinMode(pin_led1, OUTPUT);
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
  Serial.println(conta);
}
    
  