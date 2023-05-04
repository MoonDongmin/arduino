const int ledPin1 = 24;
const int ledPin2 = 25;
const int ledPin3 = 26;
const int ledPin4 = 27;
int ledsw1 = 28;
int ledsw2 = 29;
int ledsw3 = 30;
int ledsw4 = 31;


void setup() {
    Serial.begin(9600);
    Serial.println("programing start");
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
    pinMode(ledsw1, INPUT);
    pinMode(ledsw2, INPUT);
    pinMode(ledsw3, INPUT);
    pinMode(ledsw4, INPUT);
}
void loop() {
    if(digitalRead(ledsw1)==LOW){
        digitalWrite(ledPin1, LOW);
        Serial.println("Pressed SW 1!");
        delay(2000);
    }
    else if(digitalRead(ledsw2)==LOW){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        Serial.println("Pressed SW 2!");
        delay(2000);
    }
    else if(digitalRead(ledsw3)==LOW){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        Serial.println("Pressed SW 3!");
        delay(2000);
    }
    else if(digitalRead(ledsw4)==LOW){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("Pressed SW 4!");
        delay(2000);
    }
    else{
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("Not any pressed!");
        delay(2000);
    }
}