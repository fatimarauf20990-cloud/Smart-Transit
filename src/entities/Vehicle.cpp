#include "entities/Vehicle.h"
#include <iostream>

Vehicle::Vehicle()
    : m_registrationNo("N/A"),
    m_make("N/A"),
    m_model("N/A"),
    m_color("N/A"),
    m_fuelType(FuelType::DIESEL),
    m_passengerCapacity(0),
    m_currentPassengers(0),
    m_odometer(0),
    m_currentPosition(0, 0),
    m_assignedDriverId(-1),
    m_currentRouteId(-1) {}

Vehicle::Vehicle(const CustomString& reg,
                 const CustomString& make,
                 const CustomString& model,
                 const CustomString& color,
                 FuelType fuel,
                 int capacity,
                 int currentPassengers,
                 double odometer,
                 const GeoCoordinate& position,
                 int driverId,
                 int routeId)
    : m_registrationNo(reg),
    m_make(make),
    m_model(model),
    m_color(color),
    m_fuelType(fuel),
    m_passengerCapacity(capacity),
    m_currentPassengers(currentPassengers),
    m_odometer(odometer),
    m_currentPosition(position),
    m_assignedDriverId(driverId),
    m_currentRouteId(routeId) {}

CustomString Vehicle::getRegistrationNo() const { return m_registrationNo; }
int Vehicle::getPassengerCapacity() const { return m_passengerCapacity; }
int Vehicle::getCurrentPassengers() const { return m_currentPassengers; }

CustomString Vehicle::getType() const {
    return CustomString("Vehicle");
}

void Vehicle::print() const {
    std::cout << "Registration: " << m_registrationNo << "\n";
    std::cout << "Make/Model: " << m_make << " " << m_model << "\n";
    std::cout << "Color: " << m_color << "\n";
    std::cout << "Capacity: " << m_passengerCapacity << "\n";
    std::cout << "Current Passengers: " << m_currentPassengers << "\n";
    std::cout << "Odometer: " << m_odometer << "\n";
    std::cout << "Position: "; m_currentPosition.print(); std::cout << "\n";
}