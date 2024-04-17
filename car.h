#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int numDoors;

public:
    // Constructor
    Car(std::string manufacturer, int yearBuilt, int numDoors);

    // Getter and setter for numDoors
    int getNumDoors() const;
    void setNumDoors(int numDoors);

    // Method to display car information
    void displayInfo() const;
};

#endif // CAR_H
