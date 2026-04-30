#include "entities/ElectricScooter.h"
#include <iostream>

ElectricScooter::ElectricScooter()
    : m_batteryLevel(0), m_rangeKm(0), m_dockingStationId("N/A") {}

ElectricScooter::ElectricScooter(int battery, int range, const CustomString& dockId)
    : m_batteryLevel(battery), m_rangeKm(range), m_dockingStationId(dockId) {}

double ElectricScooter::getFuelCostPerKm() const { return 1.0; }
bool ElectricScooter::performDailyCheck() const { return m_batteryLevel > 20; }
double ElectricScooter::calculateEmissions(double km) const { return 0.0; }

CustomString ElectricScooter::getType() const { return CustomString("ElectricScooter"); }

void ElectricScooter::print() const {
    std::cout << "ElectricScooter Battery: " << m_batteryLevel
              << "% Range: " << m_rangeKm << "km\n";
}