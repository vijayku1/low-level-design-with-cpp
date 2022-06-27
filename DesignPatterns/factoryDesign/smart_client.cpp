#include "vehicle_factory.hpp"
#include <iostream>
using namespace std;
int main()
{
    string vehiclType;
    cin >> vehiclType;
    vehicle *vehicle = vehicleFactory::getVehicle(vehiclType);
    vehicle->createVehicle();
}