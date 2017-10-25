#include <Servo.h>

#define pinServo  3
#define pos_pin  A0

int pos = 90,
    value;

Servo servo;

void setup() {
  servo.attach(pinServo);
  servo.write(pos);
}

void loop() {
  value = analogRead(pos_pin);
  pos = map(value, 0, 1023, 0, 179);

  servo.write(pos);
}
