#include <Arduino.h>

// # pins to use analog pins: ~D5/~D6

// // put function declarations here:
// int myFunction(int, int);
int tilt_forwardPin = 5;
int tilt_backwardPin = 6;

void setup() {
  pinMode(tilt_forwardPin, OUTPUT);
  pinMode(tilt_backwardPin, OUTPUT);
}

void loop() {
  analogWrite(tilt_forwardPin, 128);
  delay(1000);
  analogWrite(tilt_forwardPin, 0);
  analogWrite(tilt_backwardPin, 128);
  delay(1000);
  analogWrite(tilt_backwardPin, 0);
  delay(1000);
}

// // put function definitions here:
// int myFunction(int x, int y) {
//   return x + y;
// }