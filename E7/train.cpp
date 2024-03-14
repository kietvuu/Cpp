#include <iostream>
#include "train.h"

Train::Train(int number, int numSeats)
    : number_{number}, numSeats_{numSeats} {}

int Train::getNumber() const {
    return number_;
}

int Train::getNumSeats() const {
    return numSeats_;
}

bool Train::addPassenger(Passenger passenger) {
    if (passengers_.size() < numSeats_) {
        passengers_.push_back(passenger);
        return true;
    }
    return false;
}

void Train::printPassengers() const {
    std::cout << "Passengers on train " << number_ << ":" << std::endl;
    for (const auto& passenger : passengers_) {
        std::cout << passenger.getName() << ", seat " << passenger.getSeatNumber() << ", destination: " << passenger.getDestination() << std::endl;
    }
}
