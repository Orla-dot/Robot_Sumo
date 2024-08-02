#include "MotorController.h"



MotorController::MotorController(uint8_t MA1, uint8_t MA2, uint8_t MB1, uint8_t MB2) {
    pinA1 = MA1;
    pinA2 = MA2;
    pinB1 = MB1;
    pinB2 = MB2;

    pinMode(pinA1, OUTPUT);
    pinMode(pinA2, OUTPUT);
    pinMode(pinB1, OUTPUT);
    pinMode(pinB2, OUTPUT);
}
MotorController::~MotorController() {
    
}
void MotorController::attachElables(uint8_t leftEnb, uint8_t rightEnb) {
    leftEnable  = leftEnb;
    rightEnable = rightEnb;

    pinMode(leftEnable , OUTPUT);
    pinMode(rightEnable, OUTPUT);
}

void MotorController::setWheelVelocity(unsigned int lVeloc, unsigned int rVeloc) {
    leftVelocity  = lVeloc;
    rightVelocity = rVeloc;
}
void MotorController::setWheelSense(bool lSense, bool rSense) {
    leftMotorSense  = lSense;
    rightMotorSense = rSense;
}

void MotorController::run() {
    analogWrite(leftEnable , leftVelocity );
    analogWrite(rightEnable, rightVelocity);

    digitalWrite(pinA1,  leftMotorSense );
    digitalWrite(pinA2, !leftMotorSense );
    digitalWrite(pinB1,  rightMotorSense);
    digitalWrite(pinB2, !rightMotorSense);
}