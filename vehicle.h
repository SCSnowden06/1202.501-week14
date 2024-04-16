#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    // Constructor
    Vehicle(std::string manufacturer, int yearBuilt);

    // Getters and setters
    std::string getManufacturer() const;
    void setManufacturer(std::string manufacturer);
    int getYearBuilt() const;
    void setYearBuilt(int yearBuilt);

    // Method to display information
    void displayInfo() const;
};

#endif // VEHICLE_H
