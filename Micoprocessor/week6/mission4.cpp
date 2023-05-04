//1번 스위치를 누르면, dc 모터가 시계방향으로 2초 동안 회전,
//2 번 스위치, 시계방향으로 5초
//3 번 스위치, 반시계 방향으로 2초동안 회전
//4번 스위치, 반시계 방향으로 5초동안 회전
// 동시에 누를 경우, 상위 번호 스위치가 우선 순위

#define MOT1DIR1 2 //모터 1번의 방향
#define MOT1DIR2 3 //모터 1번의 방향
#define MOT1PWM 4 //세기

int sw1 = 28;
int sw2 = 29;
int sw3 = 30;
int sw4 = 31;

void setup() {
    pinMode(MOT1DIR1, OUTPUT);
    pinMode(MOT1DIR2, OUTPUT);
    pinMode(MOT1PWM, HIGH);
    digitalWrite(MOT1DIR1, HIGH);
    digitalWrite(MOT1DIR2, HIGH);
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);
    pinMode(sw3, INPUT);
    pinMode(sw4, INPUT);
}

void loo() {
    int a = digitalRead(sw1);
    int b = digitalRead(sw2);
    int c = digitalRead(sw3);
    int d = digitalRead(sw4);

    if (digitalRead(sw1) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    } else if (digitalRead(sw2) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(5000);
        digitalWrite(MOT1PWM, LOW);
        delay(5000);
    } else if (digitalRead(sw3) == LOW) {
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, HIGH);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    } else if (digitalRead(sw4) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(5000);
        digitalWrite(MOT1PWM, LOW);
        delay(5000);
    } else if (digitalRead(sw1) == LOW && digitalRead(sw2) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    } else if (digitalRead(sw1) == LOW && digitalRead(sw3) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    } else if (digitalRead(sw1) == LOW && digitalRead(sw4) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    } else if (digitalRead(sw2) == LOW && digitalRead(sw3) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(5000);
        digitalWrite(MOT1PWM, LOW);
        delay(5000);
    } else if (digitalRead(sw2) == LOW && digitalRead(sw4) == LOW) {
        digitalWrite(MOT1DIR1, High);
        digitalWrite(MOT1DIR2, LOW);
        digitalWrite(MOT1PWM, HIGH);
        delay(5000);
        digitalWrite(MOT1PWM, LOW);
        delay(5000);
    } else {
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, HIGH);
        digitalWrite(MOT1PWM, HIGH);
        delay(2000);
        digitalWrite(MOT1PWM, LOW);
        delay(2000);
    }

}