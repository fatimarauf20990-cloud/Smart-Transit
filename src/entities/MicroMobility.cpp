#include "entities/MicroMobility.h"
#include <cstdio>

double MicroMobility::calculateFare(double distanceKm, int, bool) const {
    return 10.0 + (distanceKm * 3.0);
}

double MicroMobility::applyDiscount(double baseFare, int loyaltyPoints) const {
    return baseFare - (loyaltyPoints * 0.1);
}

CustomString MicroMobility::getFareType() const {
    return CustomString("MicroMobility");
}

double MicroMobility::getMinimumFare() const {
    return 10.0;
}

CustomString MicroMobility::generateReceipt(double fare, const CustomString& tripId) const {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.2f", fare);
    return CustomString("Micro Fare: ") + CustomString(buf) + " Trip: " + tripId;
}