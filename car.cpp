#include "Car.h"
#include <iostream>

// Constructor implementation
Car::Car(std::string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

// Getter and setter for numDoors
int Car::getNumDoors() const {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

// Method to display car information
void Car::displayInfo() const {
    // Call base class method to display Vehicle info
    Vehicle::displayInfo();
    // Display Car info
    std::cout << "Number of doors: " << numDoors << std::endl;
}
