#pragma once
#include "utilities/CustomString.h"

class IPaymentProcessor {
public:
    virtual ~IPaymentProcessor() = default;

    virtual bool processPayment(double amount) = 0;
    virtual bool refund(const CustomString& transactionId) = 0;
    virtual CustomString generateTransactionId() = 0;
    virtual CustomString getProcessorType() const = 0;
    virtual bool validateDetails() const = 0;
};