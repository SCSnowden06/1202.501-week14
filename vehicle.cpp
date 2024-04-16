#include "Vehicle.h"
#include <iostream>

// Constructor implementation
Vehicle::Vehicle(std::string manufacturer, int yearBuilt) {
    this->manufacturer = manufacturer;
    this->yearBuilt = yearBuilt;
}

// Getters and setters implementations
std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

void Vehicle::setManufacturer(std::string manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

// Method to display information implementation
void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << std::endl;
    std::cout << "Year Built: " << yearBuilt << std::endl;
}
