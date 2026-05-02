#pragma once
#include "exceptions/TransitException.h"

// Level 2 Category
class VehicleException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Vehicle Operations"; }
};

// Level 3 Specifics
class VehicleNotFoundException : public VehicleException { public: using VehicleException::VehicleException; };
class VehicleOverCapacityException : public VehicleException { public: using VehicleException::VehicleException; };
class VehicleBreakdownException : public VehicleException { public: using VehicleException::VehicleException; };
class CargoCriticalException : public VehicleException { public: using VehicleException::VehicleException; };
