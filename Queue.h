//e
// Created by Chris Robinson on 2/21/23.
//

#ifndef QUEUE_SIMULATION_QUEUE_H
#define QUEUE_SIMULATION_QUEUE_H
#include "ServiceCenter.h"

class Queue {
public:
    void priorityInsert();
    void priorityMinimum();
    void priorityExtractMinimum();
    void priorityDecreaseKey(); // Each item in PQ has a time of occurence which is its key
    float timeInSystem = 0.0;// Percentage of time that no one is in the system, in either queue
    float averagePeople = 0.0; // The number in line plus the number being served
    float customerTimeInSystem = 0.0; // Time custoemr spends in line plus getting service
    float averageCustomersInPQ = 0.0; // The average number of customers in the queue
    float averageCustomersInFIFO = 0.0; // The average number of customers in the queue
    float utilizationFactor = 0.0; // The proportion of the system's resources which is used by the traffic which arrives
    void printAnalyticalModel();
};


#endif //QUEUE_SIMULATION_QUEUE_H
