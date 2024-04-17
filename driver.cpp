
#include <iostream>
#include "car.h"
#include "truck.h"
#include "Vehicle.h"

int main() {
    // Create an instance of Vehicle
    Vehicle vehicle("Integra", 1998);

    // Display information about the vehicle
    vehicle.displayInfo();

    Car car("Toyota", 2022, 4);
    car.setManufacturer("Honda"); 
    car.setYearBuilt(2023); 
    car.setNumDoors(2); 

    
    Truck truck("Ford", 2021, 5.5);
    truck.setTowingCapacity(7.5); 

    std::cout << "Car Information:" << std::endl;
    car.displayInfo();
    std::cout << std::endl;

    std::cout << "Truck Information:" << std::endl;
    truck.displayInfo();
    return 0;
}
