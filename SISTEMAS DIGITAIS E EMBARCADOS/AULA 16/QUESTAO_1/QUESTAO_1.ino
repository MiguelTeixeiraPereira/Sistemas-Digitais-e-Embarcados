#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3
#define pin_botao3 4

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
  Serial.begin(9600);
  
}

void loop() {

if ((digitalRead(pin_botao) == 1) && (digitalRead(pin_botao2) == 1)){
  digitalWrite(pin_led1,1);
  digitalWrite(pin_led2,0);
  digitalWrite(pin_led3,0);
  digitalWrite(pin_led4,1);
}
if ((digitalRead(pin_botao) == 1) && (digitalRead(pin_botao2) == 0)){
  digitalWrite(pin_led1,1);
  digitalWrite(pin_led2,0);
  digitalWrite(pin_led3,0);
  digitalWrite(pin_led4,1);
}
if ((digitalRead(pin_botao) == 0) && (digitalRead(pin_botao2) == 1)){
  digitalWrite(pin_led1,0);
  digitalWrite(pin_led2,1);
  digitalWrite(pin_led3,1);
  digitalWrite(pin_led4,0);
}

}
