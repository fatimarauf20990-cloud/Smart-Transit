#pragma once
#include "utilities/CustomString.h"

class IFareCalculator {
public:
    virtual ~IFareCalculator() = default;
    virtual double calculateFare(double distanceKm, int passengerCount, bool isPeakHour) const = 0;
    virtual double applyDiscount(double baseFare, int loyaltyPoints) const = 0;
    virtual CustomString getFareType() const = 0;
    virtual double getMinimumFare() const = 0;
    virtual CustomString generateReceipt(double fare, const CustomString& tripId) const = 0;
};