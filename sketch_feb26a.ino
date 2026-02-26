int ledVermelho = 13;
int ledBranco = 12;
int ledAmarelo = 14;

void setup() {
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledBranco, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
}

void loop() {
  digitalWrite(ledVermelho, HIGH);
  delay(200);
  digitalWrite(ledVermelho, LOW);
  delay(200);
  digitalWrite(ledVermelho, HIGH);

  digitalWrite(ledBranco, HIGH);
  delay(200);
  digitalWrite(ledBranco, LOW);
  delay(200);
  digitalWrite(ledBranco, HIGH);

  digitalWrite(ledAmarelo, HIGH);
  delay(200);
  digitalWrite(ledAmarelo, LOW);
  delay(200);
  digitalWrite(ledAmarelo, HIGH);
}

