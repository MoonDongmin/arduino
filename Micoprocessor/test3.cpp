#include <Wire.h>

const int led1 = 0;
const int led2 = 1;
const int led3 = 2;
const int led4 = 3;

const int sw1 = 4;
const int sw2 = 5;
const int sw3 = 6;
const int sw4 = 7;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(sw1, INPUT);
    pinMode(sw2, INPUT);
    pinMode(sw3, INPUT);
    pinMode(sw4, INPUT);
    Wire.begin();
    delay(1000);
}

void loop() {
    int lookup[5] = {1, 2, 3, 4, 0xFF};
    Wire.beginTransMission(0x38);
    Wire.write((byte) 0);
    Wire.write(B01000111);
    Wire.endTransMission();
    if (digitalRead(sw1) == LOW) {
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);
        Wire.beginTransMission(0x38);
        Wire.write(1);
        Wire.write(lookup[0]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
    }
}