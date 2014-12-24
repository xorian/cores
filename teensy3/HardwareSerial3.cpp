#include "HardwareSerial.h"

#ifndef TEENSY3_NO_HWSERIAL3

HardwareSerial3 Serial3;

void serialEvent3() __attribute__((weak));
void serialEvent3() {}

#endif

