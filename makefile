CC = g++

CFLAGS = -Wall -g

main: main.o Customer.o FIFO.o PQ.o Server.o ServiceCenter.o
	$(CC) $(CFLAGS) -o main main.o FIFO.o PQ.o Server.o ServiceCenter.o

main.o: main.cpp Customer.h FIFO.h PQ.h Server.h ServiceCenter.h
	$(CC) $(CFLAGS) -c main.cpp
FIFO.o: FIFO.h ServiceCenter.h
Customer.o: Customer.h
PQ.o: PQ.h
Server.o: Server.h
ServiceCenter.o: ServiceCenter.h Customer.h
