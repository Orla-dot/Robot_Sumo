#pragma once

#include <Arduino.h>

class MotorController
{
    private:
    uint8_t pinA1;
    uint8_t pinA2;
    uint8_t pinB1;
    uint8_t pinB2;
    uint16_t leftEnable ;
    uint16_t rightEnable;

    bool leftMotorSense  = true;
    bool rightMotorSense = true;
    int leftVelocity  = 0;
    int rightVelocity = 0;

    public:
    MotorController(uint8_t, uint8_t, uint8_t, uint8_t);   
    ~MotorController();
    void attachElables(uint8_t, uint8_t);

    void setWheelVelocity(unsigned int, unsigned int);
    void setWheelSense(bool, bool);

    void run();

};
