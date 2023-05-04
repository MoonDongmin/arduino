const int ledpin1 = 24;
const int ledpin2 = 25;
const int ledpin3 = 26;
const int ledpin4 = 27;

void setup() {
    pinMode(ledpin1, OUTPUT);
    pinMode(ledpin2, OUTPUT);
    pinMode(ledpin3, OUTPUT);
    pinMode(ledpin4, OUTPUT);
}

void loop() {
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, LOW);

    delay(500);  // 0.5초
    digitalWrite(ledpin1, HIGH);

    delay(500);  // 1초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);

    delay(500);  // 1.5초
    digitalWrite(ledpin1, HIGH);

    delay(500);  // 2초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, HIGH);

    delay(500);  // 2.5초
    digitalWrite(ledpin1, HIGH);

    delay(500);  // 3초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);

    delay(500);  // 3.5초
    digitalWrite(ledpin1, HIGH);

    delay(500);  // 4초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, LOW);
    digitalWrite(ledpin4, HIGH);

    delay(500);  // 4.5초
    digitalWrite(ledpin1, HIGH);
    delay(500);  // 5초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);
    delay(500);  // 5.5초
    digitalWrite(ledpin1, HIGH);
    delay(500);  // 6초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, LOW);
    digitalWrite(ledpin3, HIGH);
    delay(500);  // 6.5초
    digitalWrite(ledpin1, HIGH);
    delay(500);  // 7초
    digitalWrite(ledpin1, LOW);
    digitalWrite(ledpin2, HIGH);
    delay(500);  // 7.5초
    digitalWrite(ledpin1, HIGH);
    delay(500);  // 8초
}