//
// Created by Chris Robinson on 2/21/23.
//
#include "Customer.h"
#include <math.h>
Customer::Customer() {
    //this->arrivalTime = chrono::system_clock::now;
    //this->departureTime = chrono::system_clock::now;
}
void Customer::print() {
    std::cout << arrivalTime << std::endl;
    std::cout << departureTime << std::endl;
}

 int Customer::getRandomNextInterval(double avg) {
    float randomFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    int intervalTime = -1 * (1.0 / avg) * log(randomFloat);
    std::cout << "Next Interval: " << intervalTime << std::endl;
    return intervalTime;
}
