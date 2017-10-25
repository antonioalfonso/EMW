/**
 * Event:  European Maker Week - HuB
 * File:   DecimalCounter.ino
 * Author: Antonio Alfonso
 */

#define led_0 3
#define led_1 4
#define led_2 5
#define led_3 6

#define button 2


byte led[]   = {led_0, led_1, led_2, led_3};  // Lista dei led
byte numbLed = sizeof(led) / sizeof(byte);    // Numero dei led

byte count = 0;  // Variabile Contatore

void setup() {
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
} // setup()

void loop() {
  if (digitalRead(button)) {

    while(digitalRead(button));  // Aspetta finchè il pulsante non viene rilasciato

    if (count > 3) {
      count = 0;
    }

    count++;  // Incrementa di 1 il contatore (count = count + 1)

    for (int i = 0; i < numbLed; i++) {
      digitalWrite(led[i], LOW);
    }

    for (int n = 0; n < count; n++) {
      digitalWrite(led[n], HIGH);
    }

  }
} // loop()
