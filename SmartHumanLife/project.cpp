//조도센서사용을 해서  어두우면 초음파센서를 이용해서 거리에 따라 경고음 + LED 불빛 색깔 바뀜
int ledR = 16;
int ledG = 5;
int ledY = 4;

int trigPin = 12;
int echoPin = 14;

#define SOUND_VELOCITY 0.034
long duration;
float distanceCM;

void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin
    INPUT);
    Serial.println("System on");
}

void loop() {
    int brightness = 0;
    brightness = analogRead(A0);

    digitalWrite(trigPin, LOW);
    delayMicoseconds(2);

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    ditialWrite(trigPin, LOW);
    duration = pulseln(echoPin, HIGH);
    distanceCM = duration * SOUND_VELOCITY / 2;

    if (brightness > 800) {
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
        } else if (distanceCM >= 10 && distanceCM <= 15) {
            Serial.print("거리: ");
            Serial.println(distanceCM);
            Serial.println("거리 가까움");
            digitalWrite(ledG, LOW);
            digitalWrite(ledY, HIGH);
            digitalWrite(ledR, LOW);
        } else {
            Serial.print("거리: ");
            Serial.println(distanceCM);
            Serial.println("거리 위험");
            digitalWrite(ledG, LOW);
            digitalWrite(ledY, LOW);
            digitalWrite(ledR, HIGH);
            // 부가적으로 부져를 울리게 해야함...
        }

    } else {
        Serial.print("밝기: ");
        Serial.println(brightness);
        Serial.println("밝기가 밝음");
    }

    delay(1000);
}