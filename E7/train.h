#ifndef TRAIN_H
#define TRAIN_H

#include <string>
#include <vector>
#include "passenger.h"

class Train {
public:
    Train(int number, int numSeats);

    int getNumber() const;
    int getNumSeats() const;
    bool addPassenger(Passenger passenger);
    void printPassengers() const;

private:
    int number_;
    int numSeats_;
    std::vector<Passenger> passengers_;
};

#endif
