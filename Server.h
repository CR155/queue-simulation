//
// Created by Chris Robinson on 2/23/23.
//

#ifndef QUEUE_SIMULATION_SERVER_H
#define QUEUE_SIMULATION_SERVER_H
#include <iostream>
#include <string>
using namespace std;

class Server {
public:
    Server();
    Server(int number) {
        this->isBusy = false;
        this->serverNumber = number;
    }
    int serverNumber = 0;
    bool isBusy = false;
};


#endif //QUEUE_SIMULATION_SERVER_H
