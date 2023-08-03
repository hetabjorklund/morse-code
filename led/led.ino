const int ledPin = 10;

const int dotLenght = 1000;
const int dashLength = 3000;
const int spaceWithinLetter = 1000;
const int spaceBetweenLetters = 3000;
const int spaceBetweenWords = 7000;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  Serial.println("Give a message");

  while (Serial.available() == 0) {
  }

  String message = Serial.readString();  

  digitalWrite(ledPin, HIGH);
  delay(5000); // 5 seconds on
  digitalWrite(ledPin, LOW);
  delay(2000); // 2 seconds off
  Serial.println(message);
}
