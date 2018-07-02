//LED flashing
int PIN = 11;

void setup() {
  pinMode(PIN, OUTPUT);
}

void loop() {
  digitalWrite(PIN, HIGH);
  delay(500); //0.5sec
  digitalWrite(PIN, LOW);
  delay(500); //0.5sec
}
