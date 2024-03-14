#ifndef PASSENGER_H
#define PASSENGER_H

#include <string>

class Passenger {
public:
    Passenger(std::string name, int seatNumber, std::string destination);

    std::string getName() const;
    int getSeatNumber() const;
    std::string getDestination() const;

private:
    std::string name_;
    int seatNumber_;
    std::string destination_;
};

#endif
