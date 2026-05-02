#pragma once
#include "TransitException.h"

class PaymentException : public TransitException {
public:
    PaymentException(const CustomString& msg, const CustomString& src, int code = 4000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "PAYMENT_EXCEPTION";
    }
};
