#include "entities/ZoneBasedMetro.h"
#include <cstdio>

double ZoneBasedMetro::calculateFare(double distanceKm, int, bool) const {
    return 20.0 + (distanceKm * 5.0);
}

double ZoneBasedMetro::applyDiscount(double baseFare, int loyaltyPoints) const {
    return baseFare - (loyaltyPoints * 0.1);
}

CustomString ZoneBasedMetro::getFareType() const {
    return CustomString("ZoneBasedMetro");
}

double ZoneBasedMetro::getMinimumFare() const {
    return 20.0;
}

CustomString ZoneBasedMetro::generateReceipt(double fare, const CustomString& tripId) const {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.2f", fare);
    return CustomString("Metro Fare: ") + CustomString(buf) + " Trip: " + tripId;
}