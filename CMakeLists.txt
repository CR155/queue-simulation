cmake_minimum_required(VERSION 3.23)
project(queue_simulation)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(queue_simulation
        Customer.cpp
        Customer.h
        main.cpp
        FIFO.cpp
        FIFO.h
        ServiceCenter.cpp
        ServiceCenter.h
        PQ.cpp
        PQ.h
        Server.cpp
        Server.h)
