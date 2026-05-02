#include "controllers/PaymentController.h"

bool PaymentController::processTransaction(IPaymentProcessor* processor, double amount) {
    // Validate details and process payment via IPaymentProcessor polymorphism[cite: 2]
    if (processor && processor->validateDetails()) {
        processor->processPayment(amount);
        m_dailyRevenue += amount;
        return true;
    }
    return false;
}

bool PaymentController::processRefund(IPaymentProcessor* processor, const CustomString& transactionId) {
    if (processor) {
        processor->refund(transactionId); // Polymorphic refund call[cite: 2]
        return true;
    }
    return false;
}