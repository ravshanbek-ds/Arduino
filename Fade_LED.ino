int ledPin = 9;   // LED 9-pinga ulangan
int dt = 3;      // kechikish vaqti (30 millisekund)

void setup() {
  pinMode(ledPin, OUTPUT);  // LED chiqish rejimida
}

void loop() {
  // LED asta-asta yonadi
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5);
    analogWrite(ledPin, fadeValue);
    delay(dt);
  }

  // LED asta-asta o‘chadi
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5) {
    analogWrite(ledPin, fadeValue);
    delay(dt);
  