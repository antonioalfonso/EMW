/**
 * Event:  European Maker Week - HuB
 * File:   BinaryCounter.ino
 * Author: Antonio Alfonso
 */

#define bit_0 3
#define bit_1 4
#define bit_2 5
#define bit_3 6

#define button 2


byte led[]   = {bit_0, bit_1, bit_2, bit_3};  // Lista dei led
byte numbLed = sizeof(led) / sizeof(byte);    // Numero dei led

byte count = 0;  // Variabile Contatore

void setup() {
  pinMode(bit_0, OUTPUT);
  pinMode(bit_1, OUTPUT);
  pinMode(bit_2, OUTPUT);
  pinMode(bit_3, OUTPUT);
} // setup()

void loop() {
  if (digitalRead(button)) {

    while(digitalRead(button));  // Aspetta finchè il pulsante non viene rilasciato
    count++;  // Incrementa di 1 il contatore (count = count + 1)

    for (int n = 0; n < numbLed; n++) {
      if (bitRead(count, n) == 1) {  // Leggi n-esimo bit e confrontalo con 1
        digitalWrite(led[n], HIGH);
      } else {
        digitalWrite(led[n], LOW);
      }
    }
    
  }
} // loop()
