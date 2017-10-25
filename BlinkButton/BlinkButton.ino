/**
 * Event:  European Maker Week - HuB
 * File:   BlinkButton.ino
 * Author: Antonio Alfonso
 */

#define led    13  // Definizione led sul pin 13
#define button  2  // Definizione pulsante sul pin 2

void setup() {
  pinMode(led,   OUTPUT);  // Impostazione pin del led come OUTPUT
  pinMode(button, INPUT);  // Impostazione pin del pulsante come INPUT
} // setup()

void loop() {
  // Se il pulsane è premuto...
  if (digitalRead(button) == HIGH) {
    digitalWrite(led, HIGH);  // .. accendi il led
    delay(500);
    digitalWrite(led, LOW);   // .. spegni il led
    delay(500);
  }
} // loop()
