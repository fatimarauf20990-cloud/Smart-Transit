#include "entities/FlatFareBus.h"
#include <cstdio>

double FlatFareBus::calculateFare(double, int, bool) const {
    return 30.0;
}

double FlatFareBus::applyDiscount(double baseFare, int loyaltyPoints) const {
    return baseFare - (loyaltyPoints * 0.1);
}

CustomString FlatFareBus::getFareType() const {
    return CustomString("FlatFareBus");
}

double FlatFareBus::getMinimumFare() const {
    return 30.0;
}

CustomString FlatFareBus::generateReceipt(double fare, const CustomString& tripId) const {
    char buf[32];
    std::snprintf(buf, sizeof(buf), "%.2f", fare);
    return CustomString("Bus Fare: ") + CustomString(buf) + " Trip: " + tripId;
}