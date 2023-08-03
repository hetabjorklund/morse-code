#include <EasyUltrasonic.h>

const float distance_threshold = 5.0;
float install_distance = 0;

EasyUltrasonic ultrasonic;

void setup() {
  Serial.begin(9600);
  ultrasonic.attach(11, 12);
  install_distance = ultrasonic.getDistanceCM();
}

void loop() {
  float distance = ultrasonic.getDistanceCM();
  if (distance < (install_distance - distance_threshold)) {
    Serial.println("Block detected");
  }
  Serial.print("Distance: ");
  Serial.println(distance);
}
