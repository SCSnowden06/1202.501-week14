/*
Samuel Snowden
CIS1202.501
04/21/2024
*/

#include <iostream>
#include "car.h"
#include "truck.h"
#include "Vehicle.h"

int main() {
    std::string manufacturer;
    int yearBuilt;

    std::cout << "Enter manufacturer of the vehicle: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built of the vehicle: ";
    std::cin >> yearBuilt;

    Vehicle vehicle(manufacturer, yearBuilt);
    std::cout << "\nVehicle Information:" << std::endl;
    vehicle.displayInfo();

    int numDoors;

    std::cout << "\nEnter manufacturer of the car: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built of the car: ";
    std::cin >> yearBuilt;
    std::cout << "Enter number of doors of the car: ";
    std::cin >> numDoors;

    Car car(manufacturer, yearBuilt, numDoors);
    std::cout << "\nCar Information:" << std::endl;
    car.displayInfo();

    double towingCapacity;

    std::cout << "\nEnter manufacturer of the truck: ";
    std::cin >> manufacturer;
    std::cout << "Enter year built of the truck: ";
    std::cin >> yearBuilt;
    std::cout << "Enter towing capacity of the truck (in tons): ";
    std::cin >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    std::cout << "\nTruck Information:" << std::endl;
    truck.displayInfo();

    return 0;
}
