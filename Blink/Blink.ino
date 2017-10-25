/**
 * Event:  European Maker Week - HuB
 * File:   Blink.ino
 * Author: Antonio Alfonso
 */

#define led 13  // Definizione led sul pin 13

void setup() {
  pinMode(led,  OUTPUT);  // Impostazione pin del led come OUTPUT
} // setup()

void loop() {
  digitalWrite(led, HIGH);  // Accendi il led
  delay(500);               // Aspetta 500 ms
  digitalWrite(led, LOW);   // Spegni il led
  delay(500);               // Aspetta altri 500 ms
} // loop()
