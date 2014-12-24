#include "HardwareSerial.h"

#ifndef TEENSY3_NO_HWSERIAL2

HardwareSerial2 Serial2;

void serialEvent2() __attribute__((weak));
void serialEvent2() {}

#endif

