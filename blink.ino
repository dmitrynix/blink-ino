int pin = 13;

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(pin, HIGH);
  delay(500);
  digitalWrite(pin, LOW);
}
