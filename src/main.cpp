#include <Arduino.h>
#define trigPin 9
#define echoPin 10
void setup() {
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
// write your initialization code here
}

void loop()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    long duration = pulseIn(echoPin, HIGH);
    long distance = pulseIn(echoPin, HIGH);
    Serial.print("Distance to ");
    Serial.print(distance);
    Serial.println("cm");
    delay(1000);
}
// write your code here