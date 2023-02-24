// Created by Chris Robinson on 2/21/23
//#include "ServiceCenter.h"
#include "FIFO.h"
#include "PQ.h"
#include "Server.h"

int main() {
    Customer customer;
    ServiceCenter serviceCenter;
    serviceCenter.enterValues();
    Server server;
    FIFO fifo(serviceCenter.n);
    PQ pq;
    int j = 0;
    while(j < 200) {
        pq.insert(fifo.front);
        std::cout << pq.getMax();
    }

    for (int i = 0; i < serviceCenter.m; i++) {
        Server *server = new Server(i);
        server[i].serverNumber = i;
    }
    int j = 0;
    while (j < serviceCenter.n) {
        Customer *customer = new Customer();
        customer[j].customerNumber = j;
    }
    for (int i = 0; i < serviceCenter.n; i++) {
        if (server.serverNumber == i && !server.isBusy) {
            server.isBusy = true;
            pq.remove(j);
        }
    }
}
