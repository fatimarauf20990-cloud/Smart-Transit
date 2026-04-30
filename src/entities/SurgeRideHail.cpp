#include "entities/SurgeRideHail.h"
#include <cstdio>

double SurgeRideHail::calculateFare(double distanceKm, int, bool isPeakHour) const {
    double base = 50.0 + (distanceKm * 10.0);
    return isPeakHour ? base * 1.5 : base;
}

double SurgeRideHail::applyDiscount(double baseFare, int loyaltyPoints) const {
    return baseFare - (loyaltyPoints * 0.2);
}

CustomString SurgeRideHail::getFareType() const {
    return CustomString("SurgeRideHail");
}

double SurgeRideHail::getMinimumFare() const {
    return 50.0;
}

CustomString SurgeRideHail::generateReceipt(double fare, const CustomString& tripId) const {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.2f", fare);
    return CustomString("RideHail Fare: ") + CustomString(buf) + " Trip: " + tripId;
}