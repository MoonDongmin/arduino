#include <LiquidCrystal.h>

#define MOT1DIR1 2 //모터 핀 연결
#define MOT1DIR2 3
#define MOT1PWM 4

LiquidCrystal lcd(40, 54, 41, 42, 43, 44, 45); //j6, lcd 핀 연결

const int cdsInPin = A1;
const int analogInPin = A0;
int sensorValue = 0;
int cdsValue = 0;

void setup() {
    lcd.begin(8, 2);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("9MunPark");
    pinMode(MOT1DIR1, OUTPUT);
    pinMode(MOT1DIR2, OUTPUT);
    pinMode(MOT1PWM, OUTPUT);
    digitalWrite(MOT1DIR1, HIGH);
    digitalWrite(MOT1DIR2, HIGH);
}

void loop() {
    sensorValue = analogRead(analogInPin);
    cdsValue = analogRead(cdsInPin) * 10;

    if (cdsValue >= 750) {
        lcd.setCursor(0, 1);  //두 번째 줄 시작
        lcd.print("TurnOff!");
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, HIGH);
        digitalWrite(MOT1PWM, HIGH);  // 이거 HIGH가 안돌아가면 LOW로 바꿔봐.
        delay(2000);
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, LOW);
    } else if (cdsValue < 750 && cdsValue >= 300) {
        lcd.setCursor(0, 1);  //두 번째 줄 시작
        lcd.print("Gooood!");
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, HIGH);
        digitalWrite(MOT1PWM, 50);  // 50%로 회전.
        delay(2000);
        digitalWrite(MOT1DIR1, LOW);
        digitalWrite(MOT1DIR2, LOW);
    } else {
        lcd.setCursor(0, 1);  //두 번째 줄 시작
        lcd.print("TurnOn!!");
        delay(2000);
    }

}