#include "HardwareSerial.h"

#ifndef TEENSY3_NO_HWSERIAL1

HardwareSerial Serial1;

void serialEvent1() __attribute__((weak));
void serialEvent1() {}

#endif

