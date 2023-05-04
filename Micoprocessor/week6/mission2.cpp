#include <LiquidCrystal.h>
const int cdslnPin = A0;
const int analoglnPin = A1;
int sensorValue = 0;
int cdsValue = 0;


const int ledPin1 = 24;
const int ledPin2 = 25;
const int ledPin3 = 26;
const int ledPin4 = 27;

void setup() {


    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);

    Serial.begin(9600);
}

void loop() {
    sensorValue = analogRead(A1);
    cdsValue = analogRead(A0);

    if(cdsValue>800) {
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
    }

    else if(cdsValue < 800 && cdsValue >= 600) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
    }

    else if(cdsValue < 600 && cdsValue >= 400) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
    }

    else if(cdsValue < 400 && cdsValue >= 200) {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
    }

    else {
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
    }


    Serial.print("sensor = ");
    Serial.println(sensorValue);
    Serial.print("cds = ");
    Serial.println(cdsValue);

    delay(1000);
}