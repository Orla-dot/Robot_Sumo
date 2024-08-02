#include <Arduino.h>
#include "../lib/motorController/src/MotorController.h"
#include "Adafruit_VL53L0X.h"

#define leftReader  12
#define rightReader 11

Adafruit_VL53L0X vision    = Adafruit_VL53L0X();
MotorController  controler = MotorController(10, 9, 8, 7);

VL53L0X_RangingMeasurementData_t measure;

void setup() {
  // put your begin code here, to run only time:
}

void loop() {
  // put your main code here, to run repeatedly:
}