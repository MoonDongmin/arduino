const int led1 = 24;
const int led2 = 25;
const int led3 = 26;
const int led4 = 27;
const int sw1 = 28;
const int sw2 = 29;
const int sw3 = 30;
const int sw4 = 31;
int press[4] = {0, 0, 0, 0};
int count = 0;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);
    pinMode(sw3, INPUT);
    pinMode(sw4, INPUT);
}

void loop() {
    if (digitalRead(sw1) == LOW) {
        press[count] = 1;
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        count++;
    } else if (digitalRead(sw2) == LOW) {
        press[count] = 2;
        digitalWrite(led1, HIGH);
        digitalWrite(led2, LOW);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        count++;
    } else if (digitalRead(sw3) == LOW) {
        press[count] = 3;
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, LOW);
        digitalWrite(led4, HIGH);
        count++;
    } else if (digitalRead(sw4) == LOW) {
        press[count] = 4;
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, LOW);
        count++;
    }
    if (count > 3) {
        int num = 0;
        if (press[0] == 3) num++;
        if (press[1] == 2) num++;
        if (press[2] == 4) num++;
        if (press[3] == 1) num++;
        if (num == 4) {
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            digitalWrite(led3, LOW);
            digitalWrite(led4, LOW);
            delay(1000);
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
        } else {
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
            delay(1000);
            press[0]=0;
            press[1]=0;
            press[2]=0;
            press[3]=0;
            count = 0;
            num = 0;
        }
    }
}