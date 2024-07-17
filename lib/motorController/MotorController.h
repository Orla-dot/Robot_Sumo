#pragma once

#include <Arduino.h>

class MotorController
{
    private:
    uint8_t pinA1;
    uint8_t pinA2;
    uint8_t pinB1;
    uint8_t pinB2;
    uint16_t leftEnable  = 0;
    uint16_t rightEnable = 0;
    bool lMotorDirection = true;
    bool rMotorDirection = true;
    unsigned int point = 0;

    void returnMotorSense(bool*   , bool*   );
    void returnMotorSpeed(uint8_t*, uint8_t*);


    public:
    MotorController(uint8_t, uint8_t, uint8_t, uint8_t);   
    ~MotorController();
    void attachElables(uint8_t, uint8_t);

    void spinAroundPoit(unsigned int, bool);
    void changePointPosition(unsigned int);

    void run();

};
