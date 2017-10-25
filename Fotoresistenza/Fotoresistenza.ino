#define foto_pin A0
#define led   3

int value;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  value = analogRead(foto_pin);
  Serial.println(value);

  if (value < 700) {
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
  }
}
