#include "entities/CityBus.h"
#include <iostream>

CityBus::CityBus()
    : m_busNumber("N/A"), m_routeId("N/A"),
    m_isAirConditioned(false), m_nextStopId(-1) {}

CityBus::CityBus(const CustomString& busNo, const CustomString& routeId,
                 bool ac, int nextStop)
    : m_busNumber(busNo), m_routeId(routeId),
    m_isAirConditioned(ac), m_nextStopId(nextStop) {}

double CityBus::getFuelCostPerKm() const { return 12.0; }
bool CityBus::performDailyCheck() const { return true; }
double CityBus::calculateEmissions(double km) const { return km * 1.5; }

CustomString CityBus::getType() const { return CustomString("CityBus"); }

void CityBus::print() const {
    std::cout << "CityBus " << m_busNumber << " Route: " << m_routeId << "\n";
}