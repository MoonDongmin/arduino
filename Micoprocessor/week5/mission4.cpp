const int ledPin1 = 24;
const int ledPin2 = 25;
const int ledPin3 = 26;
const int ledPin4 = 27;
int ledsw1 = 28;
int ledsw2 = 29;
int ledsw3 = 30;
int ledsw4 = 31;

int doorlock[] = { 1, 3, 2, 4 };
const int doorlock_length = 4;
int input_count = 0;
int input_doorlock[4] = { 0, 0, 0, 0 };

void setup() {
    pinMode(ledsw1, INPUT);
    pinMode(ledsw2, INPUT);
    pinMode(ledsw3, INPUT);
    pinMode(ledsw4, INPUT);
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int input_number = 0;

    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, HIGH);
    digitalWrite(ledPin4, HIGH);

    if (digitalRead(ledsw1) == LOW) {
        input_number = 1;
        Serial.println("Pressed 1!");
        delay(1000);
    } else if (digitalRead(ledsw2) == LOW) {
        input_number = 2;
        Serial.println("Pressed 2!");
        delay(1000);
    } else if (digitalRead(ledsw3) == LOW) {
        input_number = 3;
        Serial.println("Pressed 3!");
        delay(1000);
    } else if (digitalRead(ledsw4) == LOW) {
        input_number = 4;
        Serial.println("Pressed 4!");
        delay(1000);
    } else {
    }

    if (input_number != 0) {
        input_doorlock[input_count] = input_number;
        input_count++;

        if (input_count == doorlock_length) {
            if (check_doorlock(input_doorlock, doorlock, doorlock_length)) {
                Serial.println("Password correct!");
                digitalWrite(ledPin1, LOW);
                digitalWrite(ledPin2, LOW);
                digitalWrite(ledPin3, LOW);
                digitalWrite(ledPin4, LOW);
                delay(2000);
            } else {
                Serial.println("Failed");

                digitalWrite(ledPin1, LOW);
                delay(500);
                digitalWrite(ledPin1, HIGH);

                digitalWrite(ledPin2, LOW);
                delay(500);
                digitalWrite(ledPin2, HIGH);

                digitalWrite(ledPin3, LOW);
                delay(500);
                digitalWrite(ledPin3, HIGH);


                digitalWrite(ledPin4, LOW);
                delay(500);
                digitalWrite(ledPin4, HIGH);
            }
            input_count = 0;
            memset(input_count, 0, doorlock_length);
        }
    }
}

bool check_doorlock(int* input_doorlock, int* doorlock, int length) {
    for (int i = 0; i < length; i++) {
        if (input_doorlock[i] != doorlock[i]) {
            return false;
        }
    }
    return true;
}