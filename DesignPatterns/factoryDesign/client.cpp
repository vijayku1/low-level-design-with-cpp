#include <bits/stdc++.h>
#include "car.hpp"
#include "bike.hpp"
using namespace std;
int main()
{
    string vehicleType;
    cin >> vehicleType;
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
    return 0;
}