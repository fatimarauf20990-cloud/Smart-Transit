#include "entities/RefrigeratedTruck.h"
#include <iostream>

RefrigeratedTruck::RefrigeratedTruck()
    : m_targetTempC(0.0), m_currentTempC(0.0) {}

RefrigeratedTruck::RefrigeratedTruck(double target, double current)
    : m_targetTempC(target), m_currentTempC(current) {}

double RefrigeratedTruck::getFuelCostPerKm() const { return 18.0; }
bool RefrigeratedTruck::performDailyCheck() const { return true; }
double RefrigeratedTruck::calculateEmissions(double km) const { return km * 2.2; }

CustomString RefrigeratedTruck::getType() const { return CustomString("RefrigeratedTruck"); }

void RefrigeratedTruck::print() const {
    std::cout << "RefrigeratedTruck Target: " << m_targetTempC
              << " Current: " << m_currentTempC << "\n";
}