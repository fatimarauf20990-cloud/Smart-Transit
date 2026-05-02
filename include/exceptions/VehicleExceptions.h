#pragma once
#include "TransitException.h"

class VehicleException : public TransitException {
public:
    VehicleException(const CustomString& msg, const CustomString& src, int code = 1000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "VEHICLE_EXCEPTION";
    }
};