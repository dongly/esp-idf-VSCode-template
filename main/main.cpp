/*
 * Blink
 * Turns on an LED on for one second,
 * then off for one second, repeatedly.
 */

// file: main.cpp
#include "Arduino.h"

extern "C" void app_main() {
  initArduino();
 
  // initialize LED digital pin as an output.
  pinMode(2, OUTPUT);

  while (1) {
    // turn the LED on (HIGH is the voltage level)
    digitalWrite(2, HIGH);
    // wait for a second
    delay(500);
    // turn the LED off by making the voltage LOW
    digitalWrite(2, LOW);
    // wait for a second
    delay(500);
  }
}
