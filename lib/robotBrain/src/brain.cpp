#include "brain.h"


Brain::Brain(int distance, int size) {
    setDistance(distance);
    setRobotSize(size);
}
void Brain::setDistance(int distance) {
    distanceFromArena = distance;
}
void Brain::setRobotSize(int size) {
    selfSize = size;
}
void Brain::changeDistance(int extraSize) {
    distance = distanceFromArena + extraSize;
}
void Brain::returnRelation(int* leftWheel, int* rightWheel) {
    float relation = (distance - selfSize/2)/(distance + selfSize/2);
}