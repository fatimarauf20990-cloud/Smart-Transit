#include "entities/WeightFreight.h"
#include <cstdio>

double WeightFreight::calculateFare(double distanceKm, int passengerCount, bool) const {
    return 100.0 + (distanceKm * 8.0) + (passengerCount * 2.0);
}

double WeightFreight::applyDiscount(double baseFare, int loyaltyPoints) const {
    return baseFare - (loyaltyPoints * 0.05);
}

CustomString WeightFreight::getFareType() const {
    return CustomString("WeightFreight");
}

double WeightFreight::getMinimumFare() const {
    return 100.0;
}

CustomString WeightFreight::generateReceipt(double fare, const CustomString& tripId) const {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.2f", fare);
    return CustomString("Freight Fare: ") + CustomString(buf) + " Trip: " + tripId;
}