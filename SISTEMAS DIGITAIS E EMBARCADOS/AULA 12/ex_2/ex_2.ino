
int pinLed = 9;

void setup() {
    pinMode(pinLed, OUTPUT);
}

void loop() {
    digitalWrite(pinLed, HIGH);
    delay(1000);
    digitalWrite(pinLed, LOW);
    delay(1000);
