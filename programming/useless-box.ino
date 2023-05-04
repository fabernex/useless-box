#include <Servo.h>

Servo arm;
#define servoPin 3
#define switchPin 2

void setup() {
    arm.attach(servoPin);
    pinMode(switchPin, INPUT_PULLUP);
    Serial.begin(9600);
    Serial.println("beginning script");
}

void loop() {
    Serial.println(arm.read());
    //Serial.println(digitalRead(switchPin));
    if (digitalRead(switchPin)) {
        arm.write(180);
    } else {
        arm.write(40);
    }
}
