#define DELAY 50

int ledPins[] = {2,3,4,5,6,7,8,9};

void setup() {
  for (int i = 0; i < sizeof(ledPins); i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(DELAY);
    digitalWrite(ledPins[i], LOW);
  }

  for (int x = 7; x > 0; x--) {
    digitalWrite(ledPins[x], HIGH);
    delay(DELAY);
    digitalWrite(ledPins[x], LOW);
  }
}
