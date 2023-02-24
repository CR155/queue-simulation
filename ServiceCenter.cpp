//
// Created by Chris Robinson on 2/21/23.
//

#include "ServiceCenter.h"

void ServiceCenter::enterValues() {
    std::cout << "Enter number of service channels: ";
    std::cin >> this->m;
    std::cout << "Enter number of arrivals to simulate: ";
    std::cin >> this->n;
    std::cout << "Average arrivals in a time period: ";
    std::cin >> this->lambda;
    std::cout << "Average number served in a time period: ";
    std::cin >> this->mu;
}

void ServiceCenter::print() {
    std::cout << "Service Channels: " << this->m << std::endl;
    std::cout << "Arrivals to simulate: " << this->n << std::endl;
    std::cout << "Arrivals in a time period: " << this->lambda << std::endl;
    std::cout << "Average number served in a time period: " << this->mu << std::endl;
}

void ServiceCenter::printAnalyticalModel() {
    std::cout << timeInSystem << std::endl;
    std::cout << averagePeople << std::endl;
    std::cout << customerTimeInSystem << std::endl;
    std::cout << averageCustomersInPQ << std::endl;
    std::cout << averageCustomersInFIFO << std::endl;
    std::cout << utilizationFactor << std::endl;
}
/*
int ServiceCenter::GetNextRandomInterval(double avg) {
    float randomFloat = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    int intervalTime = -1 * (1.0 / avg) * log(randomFloat);
    std::cout << "Next Interval: " << intervalTime << std::endl;
    return intervalTime;
}
*/