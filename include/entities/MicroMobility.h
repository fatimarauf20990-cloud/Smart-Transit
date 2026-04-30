#pragma once
#include "entities/IFareCalculator.h"

class MicroMobility : public IFareCalculator {
public:
    double calculateFare(double distanceKm, int passengerCount, bool isPeakHour) const override;
    double applyDiscount(double baseFare, int loyaltyPoints) const override;
    CustomString getFareType() const override;
    double getMinimumFare() const override;
    CustomString generateReceipt(double fare, const CustomString& tripId) const override;
};