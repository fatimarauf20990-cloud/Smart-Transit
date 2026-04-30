#pragma once
#include "entities/IPaymentProcessor.h"

class CashProcessor : public IPaymentProcessor {
public:
    bool processPayment(double amount) override;
    bool refund(const CustomString& transactionId) override;
    CustomString generateTransactionId() override;
    CustomString getProcessorType() const override;
    bool validateDetails() const override;
};
