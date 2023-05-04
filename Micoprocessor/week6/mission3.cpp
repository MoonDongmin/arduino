#include <Wire.h>

int ledsw1 = 28;
int ledsw2 = 29;
int ledsw3 = 30;
int ledsw4 = 31;


void setup()
{
    Wire.begin();
    delay(500);
}

void loop()
{
    const int lookup[5] = {0x06, 0x5B, 0x4F, 0x66, 0x00};

    Wire.beginTransmission(0x38);
    Wire.write((byte)0);
    Wire.write(B01000111);
    Wire.endTransmission();

    Wire.beginTransmission(0x38);
    Wire.write(1);

    if (digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW) {
        Wire.write(lookup[0]);
        Wire.write(lookup[1]);
        Wire.write(lookup[2]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    } else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        Wire.write(lookup[0]);
        Wire.write(lookup[1]);
        Wire.write(lookup[2]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    {
        Wire.write(lookup[0]);
        Wire.write(lookup[1]);
        Wire.write(lookup[4]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    {
        Wire.write(lookup[0]);
        Wire.write(lookup[1]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    {
        Wire.write(lookup[0]);
        Wire.write(lookup[4]);
        Wire.write(lookup[2]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    {
        Wire.write(lookup[0]);
        Wire.write(lookup[4]);
        Wire.write(lookup[3]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    { Wire.write(lookup[0]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == LOW && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    { Wire.write(lookup[0]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    { Wire.write(lookup[4]);
        Wire.write(lookup[1]);
        Wire.write(lookup[2]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    { Wire.write(lookup[4]);
        Wire.write(lookup[1]);
        Wire.write(lookup[2]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    { Wire.write(lookup[4]);
        Wire.write(lookup[1]);
        Wire.write(lookup[4]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == LOW && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == HIGH)
    { Wire.write(lookup[4]);
        Wire.write(lookup[1]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    } else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == LOW)
    { Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[2]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == LOW && digitalRead(ledsw4) == HIGH)
    { Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[2]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
    else if (
            digitalRead(ledsw1) == HIGH && digitalRead(ledsw2) == HIGH && digitalRead(ledsw3) == HIGH && digitalRead(ledsw4) == LOW)
    { Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[3]);
        Wire.endTransmission();
        delay(500);
    }
    else
    { Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.write(lookup[4]);
        Wire.endTransmission();
        delay(500);
    }
}