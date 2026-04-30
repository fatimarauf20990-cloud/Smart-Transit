#include "entities/TransitCardProcessor.h"

bool TransitCardProcessor::processPayment(double) { return true; }
bool TransitCardProcessor::refund(const CustomString&) { return true; }
CustomString TransitCardProcessor::generateTransactionId() { return CustomString("CARD-001"); }
CustomString TransitCardProcessor::getProcessorType() const { return CustomString("TransitCard"); }
bool TransitCardProcessor::validateDetails() const { return true; }