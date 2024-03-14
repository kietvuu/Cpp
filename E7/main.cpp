#include <iostream>
#include "train.h"
#include "passenger.h"

int main() {
    Train train1{101, 50};
    Train train2{102, 30};

    Passenger passenger1{"Alice", 1, "New York"};
    Passenger passenger2{"Bob", 2, "Chicago"};
    Passenger passenger3{"Charlie", 3, "San Francisco"};
    Passenger passenger4{"David", 4, "Los Angeles"};

    train1.addPassenger(passenger1);
    train1.addPassenger(passenger2);
    train2.addPassenger(passenger3);
    train2.addPassenger(passenger4);

    std::cout << "Train " << train1.getNumber() << " has " << train1.getNumSeats() << " seats." << std::endl;
    train1.printPassengers();

    std::cout << "Train " << train2.getNumber() << " has " << train2.getNumSeats() << " seats." << std::endl;
    train2.printPassengers();

    return 0;
}
