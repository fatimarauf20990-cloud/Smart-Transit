#pragma once
#include "entities/IPaymentProcessor.h"

class PaymentController {
private:
    double m_dailyRevenue; // Track daily revenue totals

public:
    // Initialize revenue to zero
    PaymentController() : m_dailyRevenue(0.0) {}

    /**
     * Process a transaction using a polymorphic payment processor.
     * This replaces the need for a vector by handling one transaction at a time.
     */
    bool processTransaction(IPaymentProcessor* processor, double amount);

    /**
     * Handles refund workflows.
     */
    bool processRefund(IPaymentProcessor* processor, const CustomString& transactionId);

    // Getter for the total revenue
    double getDailyTotal() const { return m_dailyRevenue; }
};