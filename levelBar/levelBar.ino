#define led_0 3
#define led_1 4
#define led_2 5
#define led_3 6

#define pos A0


byte led[]   = {led_0, led_1, led_2, led_3};  // Lista dei led
byte numbLed = sizeof(led) / sizeof(byte);    // Numero dei led

int value,
    value_map;

void setup() {
  pinMode(led_0, OUTPUT);
  pinMode(led_1, OUTPUT);
  pinMode(led_2, OUTPUT);
  pinMode(led_3, OUTPUT);
}

void loop() {
  value = analogRead(pos);
  value_map = map(value, 0, 1023, 0, 4);

  for (int n = 0; n < numbLed; n++) {
    digitalWrite(led[n], LOW);
  }

  for (int i = 0; i < value_map; i++) {
    digitalWrite(led[i], HIGH);
  }

}
