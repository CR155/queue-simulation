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
    float timeInSystem = 0.0;// Percentage of time that no one is in the system, in either queue
    float averagePeople = 0.0; // The number in line plus the number being served
    float customerTimeInSystem = 0.0; // Time custoemr spends in line plus getting service
    float averageCustomersInPQ = 0.0; // The average number of customers in the queue
    float averageCustomersInFIFO = 0.0; // The average number of customers in the queue
    float utilizationFactor = 0.0; // The proportion of the system's resources which is used by the traffic which arrives
    void printAnalyticalModel();
    void enterValues();
    //int GetNextRandomInterval(double);
    void print();
};


#endif //QUEUE_SIMULATION_SERVICECENTER_H
