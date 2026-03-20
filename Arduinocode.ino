int pirPin = 2;      // PIR signal pin
int ledPin = 13;     // LED pin
int buzzerPin = 8;   // Buzzer pin

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int motion = digitalRead(pirPin);   // Read PIR sensor

  if (motion == HIGH) {
    Serial.println("Motion Detected!");
    digitalWrite(ledPin, HIGH);       // LED ON
    digitalWrite(buzzerPin, HIGH);    // Buzzer ON
  } else {
    Serial.println("No Motion");
    digitalWrite(ledPin, LOW);        // LED OFF
    digitalWrite(buzzerPin, LOW);     // Buzzer OFF
  }

  delay(500);
}
