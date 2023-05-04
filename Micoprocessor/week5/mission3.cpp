#include <SHT1x.h>
#define dataPin 22
#define clockPin 23
SHT1x sht1x(dataPin, clockPin);

const int ledPin1 = 24;
const int ledPin2 = 25;
const int ledPin3 = 26;
const int ledPin4 = 27;
void setup()
{
    Serial.begin(9600);
    Serial.println("starting up");
    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);
}

void loop()
{
    float temp_c;
    float temp_f;
    float humidity;

    temp_c = sht1x.readTemperatureC();
    temp_f = sht1x.readTemperatureF();
    humidity = sht1x.readHumidity();

    if(temp_c < 17){
        digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("Cooooool!");
    }
    else if(temp_c < 22){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("Cool!");
    }
    else if(temp_c < 26){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, HIGH);
        digitalWrite(ledPin4, HIGH);
        Serial.println("Warm!");
    }
    else if(temp_c < 30){
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, HIGH);
        Serial.println("Hot!");
    }
    else{
        digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, LOW);
        digitalWrite(ledPin3, LOW);
        digitalWrite(ledPin4, LOW);
        Serial.println("Hoooooot!");
    }
    Serial.print("Temperature C : ");
    Serial.print(temp_c, DEC);
    Serial.print(" / ");
    Serial.print("Temperature F : ");
    Serial.print(temp_f, DEC);
    Serial.print(" / ");
    Serial.print("Humidity : ");
    Serial.print(humidity);
    Serial.println("%");
    delay(1000);
}