#pragma once
#include "utilities/CustomString.h"

class Passenger {
    int m_passengerId;
    CustomString m_name;
    CustomString m_contactNumber;
    int m_loyaltyPoints;

public:
    Passenger();
    Passenger(int id, const CustomString& name,
              const CustomString& contact, int points);
    void print() const;
};
