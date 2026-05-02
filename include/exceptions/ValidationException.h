#pragma once
#include "TransitException.h"

class ValidationException : public TransitException {
public:
    ValidationException(const CustomString& msg, const CustomString& src, int code = 8000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "VALIDATION_EXCEPTION";
    }
};
