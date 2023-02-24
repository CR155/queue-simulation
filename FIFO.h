//e
// Created by Chris Robinson on 2/21/23.
//

#ifndef QUEUE_SIMULATION_FIFO_H
#define QUEUE_SIMULATION_FIFO_H
#include "ServiceCenter.h"

class FIFO {
public:
    int front, rear, capacity;
    int *queue;

    FIFO(int c) {
        front = rear = 0;
        capacity = c;
        queue = new int;
    }

    ~FIFO() { delete[] queue; }

    void queueEnqueue(int data) {
        if (capacity == rear) {
            printf("\nQueue is full\n");
            return;
        } else {
            queue[rear] = data;
            rear++;
        }
        return;
    }

    void queueDequeue() {
        if (front == rear) {
            printf("\nQueue is empty\n");
            return;
        } else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
            rear--;
        }
        return;
    }

    void queueDisplay() {
        int i;
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }

        for (i = front; i < rear; i++) {
            printf(" %d <--", queue[i]);
        }
        return;
    }

    void queueFront() {
        if (front == rear) {
            printf("\nQueue is Empty\n");
            return;
        }
        printf("\nFront Element is: %d\n", queue[front]);
        return;
    }
    float timeInSystem = 0.0;// Percentage of time that no one is in the system, in either queue
    float averagePeople = 0.0; // The number in line plus the number being served
    float customerTimeInSystem = 0.0; // Time custoemr spends in line plus getting service
    float averageCustomersInPQ = 0.0; // The average number of customers in the queue
    float averageCustomersInFIFO = 0.0; // The average number of customers in the queue
    float utilizationFactor = 0.0; // The proportion of the system's resources which is used by the traffic which arrives
    void printAnalyticalModel();
};


#endif //QUEUE_SIMULATION_FIFO_H
