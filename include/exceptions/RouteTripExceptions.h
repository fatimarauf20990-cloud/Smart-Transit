#pragma once
#include "exceptions/TransitException.h"

class RouteException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Route Network"; }
};

class TripException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Trip Scheduling"; }
};

class RouteNotFoundException : public RouteException { public: using RouteException::RouteException; };
class StopNotFoundException : public RouteException { public: using RouteException::RouteException; };
class RouteConflictException : public RouteException { public: using RouteException::RouteException; };

class TripAlreadyActiveException : public TripException { public: using TripException::TripException; };
class TripCancelledException : public TripException { public: using TripException::TripException; };
class NoDriverAssignedException : public TripException { public: using TripException::TripException; };