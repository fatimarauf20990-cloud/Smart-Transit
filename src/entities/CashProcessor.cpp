#include "entities/CashProcessor.h"

bool CashProcessor::processPayment(double) { return true; }
bool CashProcessor::refund(const CustomString&) { return true; }
CustomString CashProcessor::generateTransactionId() { return CustomString("CASH-001"); }
CustomString CashProcessor::getProcessorType() const { return CustomString("Cash"); }
bool CashProcessor::validateDetails() const { return true; }