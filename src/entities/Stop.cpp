#include "entities/Stop.h"
#include <iostream>

Stop::Stop() : m_stopId(0), m_stopName("N/A"), m_position(0,0) {}
Stop::Stop(int id, const CustomString& name, const GeoCoordinate& pos)
    : m_stopId(id), m_stopName(name), m_position(pos) {}

void Stop::print() const {
    std::cout << "Stop " << m_stopId << ": " << m_stopName << " ";
    m_position.print(); std::cout << "\n";
}