#include "entities/LoyaltyPointsProcessor.h"

bool LoyaltyPointsProcessor::processPayment(double) { return true; }
bool LoyaltyPointsProcessor::refund(const CustomString&) { return true; }
CustomString LoyaltyPointsProcessor::generateTransactionId() { return CustomString("LOYAL-001"); }
CustomString LoyaltyPointsProcessor::getProcessorType() const { return CustomString("Loyalty"); }
bool LoyaltyPointsProcessor::validateDetails() const { return true; }