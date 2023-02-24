// Created by Chris Robinson on 2/21/23
//#include "ServiceCenter.h"
#include "FIFO.h"
#include "PQ.h"
#include "Server.h"

int main() {
    Customer customer;
    ServiceCenter serviceCenter;
    serviceCenter.enterValues();
    FIFO fifo(serviceCenter.n);
    //Server server;
    PQ pq;
    int j = 0;
    while (j < 200) {
        std::cout << fifo.front << std::endl;
        pq.insert(fifo.front);
        std::cout << pq.getMax() << std::endl;

        j++;
    }
}
