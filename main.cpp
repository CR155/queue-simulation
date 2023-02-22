// Created by Chris Robinson on 2/21/23
//#include "ServiceCenter.h"
#include "Queue.h"
int main() {
    Customer customer;
    ServiceCenter serviceCenter;
    Queue queue;
    serviceCenter.enterValues();
    serviceCenter.print();
    customer.getRandomNextInterval(serviceCenter.lambda);
    queue.printAnalyticalModel();
    //customer.print();
    //customer.print();
    return 0;
}
