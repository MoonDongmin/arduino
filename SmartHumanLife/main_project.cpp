//조도센서사용을 해서  어두우면 초음파센서를 이용해서 거리에 따라 경고음 + LED 불빛 색깔 바뀜
int ledR = 16;
int ledG = 5;
int ledY = 4;

int trigPin = 12;
int echoPin = 14;

#define SOUND_VELOCITY 0.034
long duration;
float distanceCM;

int buzzer = 0;

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    Serial.println("System on");
    pinMode(ledR, OUTPUT);
    pinMode(ledG, OUTPUT);
    pinMode(ledY, OUTPUT);
    pinMode(buzzer, OUTPUT);
}

void loop() {
    int brightness = 0;
    brightness = analogRead(A0);

    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distanceCM = duration * SOUND_VELOCITY / 2;

    if (brightness > 500) {
        Serial.print("밝기: ");
        Serial.println(brightness);
        Serial.println("밝기가 어두움");
        if (distanceCM > 30) {
            Serial.print("거리: ");
            Serial.println(distanceCM);
            Serial.println("거리 안전");
            digitalWrite(ledG, HIGH);
            digitalWrite(ledY, LOW);
            digitalWrite(ledR, LOW);
        } else if (distanceCM >= 10 && distanceCM <= 30) {
            Serial.print("거리: ");
            Serial.println(distanceCM);
            Serial.println("거리 가까움");
            digitalWrite(ledG, LOW);
            digitalWrite(ledY, HIGH);
            digitalWrite(ledR, LOW);
        } else if (distanceCM < 10) {
            Serial.print("거리: ");
            Serial.println(distanceCM);
            Serial.println("거리 위험");
            digitalWrite(ledG, LOW);
            digitalWrite(ledY, LOW);
            digitalWrite(ledR, HIGH);
            for (int i = 0; i <10 ; i++) {
                tone(buzzer, 300);
                //delay(150);
                delay(50);
                noTone(buzzer);
                //delay(150);
                delay(50);
                i++;
            }
        }

    } else {
        Serial.print("밝기: ");
        Serial.println(brightness);
        Serial.println("밝기가 밝음");
        digitalWrite(ledG, LOW);
        digitalWrite(ledY, LOW);
        digitalWrite(ledR, LOW);
    }

    //delay(3000);
    delay(1000);
}