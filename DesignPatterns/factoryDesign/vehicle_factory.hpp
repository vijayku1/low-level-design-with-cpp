#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp
#include <iostream>
#include "car.hpp"
#include "bike.hpp"
using namespace std;

class vehicleFactory
{
public:
    static vehicle *getVehicle(string vehicleType);
};
#endif