#include <Servo.h>

#define pinSensLeft  A0
#define pinSensRight A1
#define pinServo      3

int valueSensLeft,
    valueSensRight,
    pos = 90;

Servo servo;

void setup() {
  pinMode(pinSensLeft,  INPUT);
  pinMode(pinSensRight, INPUT);

  servo.attach(pinServo);
  servo.write(pos);

  Serial.begin(9600);
}

void loop() {
  valueSensLeft  = analogRead(pinSensLeft);
  valueSensRight = analogRead(pinSensRight);

  if (valueSensLeft < valueSensRight) {
    pos--;
  } else if (valueSensLeft > valueSensRight) {
    pos++;
  } else {
    // resta fermo
  }

  if (pos < 0) {
    pos = 0;

  }
  if (pos > 180) {
    pos = 180;
  }

  servo.write(pos);

  Serial.println(servo.read());
}
