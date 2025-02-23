#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");

  pinMode(33, OUTPUT);
  pinMode(12, OUTPUT); // Kuning
  pinMode(26, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(33, HIGH);
  delay(30000);
  digitalWrite(33, LOW);

  digitalWrite(12, HIGH);
  delay(5000);
  digitalWrite(12, LOW);

  digitalWrite(26, HIGH);
  delay(20000);
  digitalWrite(26, LOW);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}