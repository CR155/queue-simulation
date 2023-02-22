//
// Created by Chris Robinson on 2/21/23.
//

#ifndef QUEUE_SIMULATION_SERVICECENTER_H
#define QUEUE_SIMULATION_SERVICECENTER_H
#include "Customer.h"

class ServiceCenter {
public:
    int m = 0; // number of service channels (1-10)
    double lambda = 0.0; // average arrivals in a time period
    double mu = 0.0; // average number served in time period
    int n = 0; // number of arrivals to simulate (1000-5000);
    void enterValues();
    //int GetNextRandomInterval(double);
    void print();
};


#endif //QUEUE_SIMULATION_SERVICECENTER_H
