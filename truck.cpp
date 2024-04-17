#include "Truck.h"
#include <iostream>

// Constructor implementation
Truck::Truck(std::string manufacturer, int yearBuilt, double towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

// Getter and setter for towingCapacity
double Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

// Method to display truck information
void Truck::displayInfo() const {
    // Call base class method to display Vehicle info
    Vehicle::displayInfo();
    // Display Truck info
    std::cout << "Towing capacity: " << towingCapacity << " tons" << std::endl;
}
