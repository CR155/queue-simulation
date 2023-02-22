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
    float arrivalTime; // Time arrived in FIFO queue
    float startOfServiceTime; // Time arrived in PQ
    float departureTime; // Time departed from PQ
    float timeInterval; // How long it will take to be serviced, this
    int getRandomNextInterval(double);
    void print();
};


#endif //QUEUE_SIMULATION_CUSTOMER_H
