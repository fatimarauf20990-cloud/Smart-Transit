#include "entities/Passenger.h"
#include <iostream>

Passenger::Passenger()
    : m_passengerId(0), m_name("N/A"), m_contactNumber("N/A"), m_loyaltyPoints(0) {}

Passenger::Passenger(int id, const CustomString& name,
                     const CustomString& contact, int points)
    : m_passengerId(id), m_name(name), m_contactNumber(contact), m_loyaltyPoints(points) {}

void Passenger::print() const {
    std::cout << "Passenger " << m_passengerId << ": " << m_name
              << " Points: " << m_loyaltyPoints << "\n";
}