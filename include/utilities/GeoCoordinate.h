#pragma once


class GeoCoordinate {
private:
    double latitude;
    double longitude;

public:
    GeoCoordinate();
    GeoCoordinate(double lat, double lon);

    double distanceTo(const GeoCoordinate& other) const;
    bool isValid() const;

    void print() const;   // ✅ simple print function

    bool operator==(const GeoCoordinate& other) const;
    bool operator!=(const GeoCoordinate& other) const;
};