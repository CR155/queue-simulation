//
// Created by Chris Robinson on 2/21/23.
//

#include "Queue.h"

void Queue::printAnalyticalModel() {
    std::cout << timeInSystem << std::endl;
    std::cout << averagePeople << std::endl;
    std::cout << customerTimeInSystem << std::endl;
    std::cout << averageCustomersInPQ << std::endl;
    std::cout << averageCustomersInFIFO << std::endl;
    std::cout << utilizationFactor << std::endl;
}
