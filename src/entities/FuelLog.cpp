#include "entities/FuelLog.h"
#include <iostream>

FuelLog::FuelLog()
    : m_logId(0), m_vehicleId(0), m_litersFilled(0), m_costPerLitre(0),
    m_totalCost(0), m_odometer(0), m_fillDate(1,1,2000) {}

FuelLog::FuelLog(int id, int vehicle, double liters, double costPerLitre,
                 double totalCost, double odometer, const CustomDate& date)
    : m_logId(id), m_vehicleId(vehicle), m_litersFilled(liters),
    m_costPerLitre(costPerLitre), m_totalCost(totalCost),
    m_odometer(odometer), m_fillDate(date) {}

void FuelLog::print() const {
    std::cout << "FuelLog " << m_logId << " Liters: " << m_litersFilled
              << " Total: " << m_totalCost << "\n";
}