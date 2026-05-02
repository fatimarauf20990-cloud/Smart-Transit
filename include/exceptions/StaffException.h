#pragma once
#include "TransitException.h"

class StaffException : public TransitException {
public:
    StaffException(const CustomString& msg, const CustomString& src, int code = 5000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "STAFF_EXCEPTION";
    }
};