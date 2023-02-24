//
// Created by Chris Robinson on 2/23/23.
//

#ifndef QUEUE_SIMULATION_PQ_H
#define QUEUE_SIMULATION_PQ_H
#include <algorithm>

using namespace std;
class PQ {
public:
        int PQ[200];
        int size = -1;

        int parent(int i) {
            return (i - 1) / 2;
        }

        int left(int i) {
            return ((2 * i) + 1);
        }

        int right(int i) {
            return ((2 * i) + 2);
        }

        void moveUp(int i) {
            while ( (i > 0) && (PQ[parent(i)] < PQ[i]) ) {
                std::swap(PQ[parent(i)], PQ[i]);
                i = parent(i);
            }
        }

        void moveDown(int i) {
            int max = i;
            int l = left(i);
            if ( (l <= size) && (PQ[l] > PQ[max]) ) {
                max = l;
            }
            int r = right(i);

            if ( (r <= size) && (PQ[r] > PQ[max]) ) {
                max = r;
            }

            if (i != max) {
                swap(PQ[i], PQ[max]);
                moveDown(max);
            }
        }

        void insert(int p) {
            size = size + 1;
            PQ[size] = p;

            moveUp(size);
        }

        int extractMax() {
            int result = PQ[0];
            PQ[0] = PQ[size];
            size = size - 1;
            moveDown(0);
            return result;
        }

        void modifyPriority(int i, int p) {
            int oldp = PQ[i];
            if (p > oldp) {
                moveUp(i);
            } else {
                moveDown(i);
            }
        }

        int getMax() {
            return PQ[0];
        }

        void remove(int i) {
            PQ[i] = getMax() + 1;
            moveUp(i);
            extractMax();
        }
};


#endif //QUEUE_SIMULATION_PQ_H
