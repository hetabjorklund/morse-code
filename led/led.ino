const int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(5000); // 5 seconds on
  digitalWrite(ledPin, LOW);
  delay(2000); // 2 seconds off
  Serial.println("Hello world");
}
