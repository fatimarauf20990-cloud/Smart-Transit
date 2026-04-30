#include "utilities/GeoCoordinate.h"
#include <cmath>
#include<iostream>

// Constructors
GeoCoordinate::GeoCoordinate() {
    latitude = 0;
    longitude = 0;
}

GeoCoordinate::GeoCoordinate(double lat, double lon) {
    latitude = lat;
    longitude = lon;
}

// Validation
bool GeoCoordinate::isValid() const {
    return (latitude >= -90 && latitude <= 90 &&
            longitude >= -180 && longitude <= 180);
}

// Distance
double GeoCoordinate::distanceTo(const GeoCoordinate& other) const {
    double dx = latitude - other.latitude;
    double dy = longitude - other.longitude;
    return sqrt(dx * dx + dy * dy);
}

// Print
void GeoCoordinate::print() const {
    std::cout << latitude << ", " << longitude;
}

// Operators
bool GeoCoordinate::operator==(const GeoCoordinate& other) const {
    return latitude == other.latitude && longitude == other.longitude;
}

bool GeoCoordinate::operator!=(const GeoCoordinate& other) const {
    return !(*this == other);
}