#include "vehicle_factory.hpp"
vehicle *vehicleFactory::getVehicle(string vehicleType)
{
    vehicle *vehicle;
    if (vehicleType == "car")
    {
        vehicle = new car();
    }
    else if (vehicleType == "bike")
    {
        vehicle = new bike();
    }
    vehicle->createVehicle();
    return vehicle;
}