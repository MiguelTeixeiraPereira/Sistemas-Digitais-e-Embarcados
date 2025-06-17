#define INTERVALO 1000
unsigned long tempo_anterior = 0;
bool estado = 0;


void setup() {
  pinMode(13, OUTPUT);

}
 
void loop() {
  unsigned long tempo_atual = millis();
  if ((tempo_atual - tempo_anterior) >= INTERVALO ) {
    estado = !estado;
    digitalWrite(13, estado);
    tempo_anterior = tempo_atual;
  }

}
