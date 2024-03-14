#include "passenger.h"

Passenger::Passenger(std::string name, int seatNumber, std::string destination)
    : name_{name}, seatNumber_{seatNumber}, destination_{destination} {}

std::string Passenger::getName() const {
    return name_;
}

int Passenger::getSeatNumber() const {
    return seatNumber_;
}

std::string Passenger::getDestination() const {
    return destination_;
}
