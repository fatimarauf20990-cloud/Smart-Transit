#include "entities/Route.h"
#include <iostream>

Route::Route()
    : m_routeId(0), m_totalDistanceKm(0), m_schedFrequencyMinutes(0), m_isActive(false) {}

Route::Route(int id, double distance, int freq, bool active)
    : m_routeId(id), m_totalDistanceKm(distance), m_schedFrequencyMinutes(freq), m_isActive(active) {}

void Route::print() const {
    std::cout << "Route " << m_routeId
              << " Distance: " << m_totalDistanceKm
              << "km Freq: " << m_schedFrequencyMinutes
              << " Active: " << (m_isActive ? "Yes" : "No") << "\n";
}