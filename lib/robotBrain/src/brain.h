#pragma once


class Brain {
    public:
    Brain(int, int);
    void setDistance(int);
    void setRobotSize(int);
    void changeDistance(int);
    void returnRelation(int*, int*);

    private:
    int selfSize = 0;
    int distance = 0;
    int distanceFromArena = 0;
    bool leftSensor  = false;
    bool rightSensor = false;
    bool areneColor = false;
    
};