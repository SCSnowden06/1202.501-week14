#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double towingCapacity;

public:
    // Constructor
    Truck(std::string manufacturer, int yearBuilt, double towingCapacity);

    // Getter and setter for towingCapacity
    double getTowingCapacity() const;
    void setTowingCapacity(double towingCapacity);

    // Method to display truck information
    void displayInfo() const;
};

#endif // TRUCK_H
