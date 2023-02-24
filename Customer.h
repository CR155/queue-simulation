//
// Created by Chris Robinson on 2/21/23.
//

#ifndef QUEUE_SIMULATION_CUSTOMER_H
#define QUEUE_SIMULATION_CUSTOMER_H
#include <ctime>
#include <chrono>
#include <iostream>
using namespace std;

class Customer {
public:
    Customer();
    float arrivalTime = 0.0; // Time arrived in FIFO queue
    float startOfServiceTime = 0.0; // Time arrived in PQ
    float departureTime = 0.0; // Time departed from PQ
    float timeInterval = 0.0; // How long it will take to be serviced, this
    int getRandomNextInterval(double);
    int customerNumber;
    void print();
};


#endif //QUEUE_SIMULATION_CUSTOMER_H
