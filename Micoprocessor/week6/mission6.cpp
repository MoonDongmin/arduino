//100cm 이상: -------
// 40cm ~ 100cm 주파수 = 200hz
// 20~40 주파수= 400
// 20cm 이내: 주파수 = 1000
//tone(핀번호, 주파수, 출력시간)
//noTone() 주파수 신호 출력을 중지

int cnt;
int dummcnt;
long distance;
long Tempture;
unsigned long duration;
int pin = 15;
int buzzer = 17;

void setup() {
    Serial.begin(9600);
    Tempture = 25;

    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);

    cnt = 0;
    pinMode(buzzer, OUTPUT);
}

void loop() {
    delay(500);
    pinMode(pin, OUTPUT);
    digitalWrite(15, HIGH);
    delayMicroseconds(10);
    digitalWrite(15, LOW);
    pinMode(pin, INPUT);
    duration = pulseIn(pin, HIGH);
    distance = duration * 17 / 1000;

    if (distance > 100) {
        noTone(buzzer);
        Serial.print(distance);
        Serial.println("cm");

    } else if (40 <= distance && 100 >= distance) {
        Serial.print(distance);
        Serial.println("cm");
        tone(buzzer, 200);
        delay(100);
        noTone(buzzer);
        delay(1000);
    } else if (20 <= distance && 40 > distance) {
        Serial.print(distance);
        Serial.println("cm");
        tone(buzzer, 400);
        delay(100);
        noTone(buzzer);
        delay(700);
    } else {
        Serial.print(distance);
        Serial.println("cm");
        tone(buzzer, 1000);
        delay(100);
        noTone(buzzer);
        delay(50);
    }
}