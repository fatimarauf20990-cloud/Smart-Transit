#include "entities/MetroTrain.h"
#include <iostream>

MetroTrain::MetroTrain()
    : m_lineId(0), m_carriageCount(0), m_maxSpeed(0), m_isUnderground(false) {}

MetroTrain::MetroTrain(int lineId, int carriages, double maxSpeed, bool underground)
    : m_lineId(lineId), m_carriageCount(carriages),
    m_maxSpeed(maxSpeed), m_isUnderground(underground) {}

double MetroTrain::getFuelCostPerKm() const { return 20.0; }
bool MetroTrain::performDailyCheck() const { return true; }
double MetroTrain::calculateEmissions(double km) const { return km * 0.2; }

CustomString MetroTrain::getType() const { return CustomString("MetroTrain"); }

void MetroTrain::print() const {
    std::cout << "MetroTrain Line: " << m_lineId
              << " Carriages: " << m_carriageCount << "\n";
}