#include "entities/RideHailCar.h"
#include <iostream>

RideHailCar::RideHailCar()
    : m_driverRating(0), m_tripCount(0), m_surgeMultiplier(1.0) {}

RideHailCar::RideHailCar(double rating, int trips, double surge)
    : m_driverRating(rating), m_tripCount(trips), m_surgeMultiplier(surge) {}

double RideHailCar::getFuelCostPerKm() const { return 8.0 * m_surgeMultiplier; }
bool RideHailCar::performDailyCheck() const { return true; }
double RideHailCar::calculateEmissions(double km) const { return km * 0.9; }

CustomString RideHailCar::getType() const { return CustomString("RideHailCar"); }

void RideHailCar::print() const {
    std::cout << "RideHailCar Rating: " << m_driverRating
              << " Trips: " << m_tripCount << "\n";
}