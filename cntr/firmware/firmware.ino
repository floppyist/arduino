#define DELAY 100

int ledPins[] = {2,3,4,5,6,7,8,9};

byte in = 0;

void setup() {
  Serial.begin(9600);

  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  if (Serial.available() > 0) {
    String raw_in = Serial.readStringUntil('\n');

    in = (byte) raw_in.toInt();

    for (int i = 7; i >= 0; i--) {
      byte bit = bitRead(in, i);

      digitalWrite(ledPins[i], bit);
    }
  }
}
