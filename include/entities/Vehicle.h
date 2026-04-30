
#pragma once
#include "entities/TransitAsset.h"
#include "utilities/CustomString.h"
#include "utilities/GeoCoordinate.h"

enum class FuelType {
    DIESEL,
    CNG,
    ELECTRIC,
    HYBRID
};

class Vehicle : public TransitAsset {
protected:
    CustomString m_registrationNo;
    CustomString m_make;
    CustomString m_model;
    CustomString m_color;
    FuelType m_fuelType;
    int m_passengerCapacity;
    int m_currentPassengers;
    double m_odometer;
    GeoCoordinate m_currentPosition;
    int m_assignedDriverId;
    int m_currentRouteId;

public:
    Vehicle();
    Vehicle(const CustomString& reg,
            const CustomString& make,
            const CustomString& model,
            const CustomString& color,
            FuelType fuel,
            int capacity,
            int currentPassengers,
            double odometer,
            const GeoCoordinate& position,
            int driverId,
            int routeId);

    // Getters
    CustomString getRegistrationNo() const;
    int getPassengerCapacity() const;
    int getCurrentPassengers() const;

    // Pure virtuals for child classes (CityBus, MetroTrain, etc.)
    virtual double getFuelCostPerKm() const = 0;
    virtual bool performDailyCheck() const = 0;
    virtual double calculateEmissions(double km) const = 0;

    // Overrides
    CustomString getType() const override;
    void print() const override;
};