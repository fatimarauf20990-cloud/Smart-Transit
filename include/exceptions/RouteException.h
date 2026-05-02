#pragma once
#include "TransitException.h"

class RouteException : public TransitException {
public:
    RouteException(const CustomString& msg, const CustomString& src, int code = 2000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "ROUTE_EXCEPTION";
    }
};
