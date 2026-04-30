#include "entities/FreightTruck.h"
#include <iostream>

FreightTruck::FreightTruck()
    : m_cargoWeightKg(0), m_maxPayloadKg(0), m_refrigerated(false) {}

FreightTruck::FreightTruck(double cargo, double maxPayload, bool refrigerated)
    : m_cargoWeightKg(cargo), m_maxPayloadKg(maxPayload),
    m_refrigerated(refrigerated) {}

double FreightTruck::getFuelCostPerKm() const { return 15.0 + (m_cargoWeightKg * 0.01); }
bool FreightTruck::performDailyCheck() const { return true; }
double FreightTruck::calculateEmissions(double km) const { return km * 2.0; }

CustomString FreightTruck::getType() const { return CustomString("FreightTruck"); }

void FreightTruck::print() const {
    std::cout << "FreightTruck Cargo: " << m_cargoWeightKg
              << " Max: " << m_maxPayloadKg << "\n";
}