const int ledPin1 = 24;
const int ledPin2 = 25;
const int ledPin3 = 26;
const int ledPin4 = 27;
int ledsw1 = 28;
int ledsw2 = 29;
int ledsw3 = 30;
int ledsw4 = 31;

void setup() {
    Serial.begin(9600);
    Serial.println("Start!!");
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledsw1, INPUT);
    pinMode(ledsw2, INPUT);
    pinMode(ledsw3, INPUT);
    pinMode(ledsw4, INPUT);
}

void loop() {
    if (digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 15");
        delay(1000);
    }else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 14");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 13");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 12");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 11");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 10");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 9");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 8");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 7");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 6");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 5");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 4");
        delay(1000);
    }else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 3");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 2");
        delay(1000);
    }
    else if(
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, LOW);
        Serial.println("value : 1");
        delay(1000);
    }
    else
    {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("value : 0");
        delay(1000);
    }
}