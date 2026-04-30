#include "entities/ArticulatedBus.h"
#include <iostream>

ArticulatedBus::ArticulatedBus()
    : m_secondSegmentCapacity(0), m_jointAngle(0.0) {}

ArticulatedBus::ArticulatedBus(int extraCapacity, double jointAngle)
    : m_secondSegmentCapacity(extraCapacity), m_jointAngle(jointAngle) {}

double ArticulatedBus::getFuelCostPerKm() const { return 14.0; }
bool ArticulatedBus::performDailyCheck() const { return true; }
double ArticulatedBus::calculateEmissions(double km) const { return km * 1.8; }

CustomString ArticulatedBus::getType() const { return CustomString("ArticulatedBus"); }

void ArticulatedBus::print() const {
    std::cout << "ArticulatedBus Extra Capacity: " << m_secondSegmentCapacity
              << " Joint Angle: " << m_jointAngle << "\n";
}