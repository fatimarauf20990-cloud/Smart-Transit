#include "entities/CorporateAccountProcessor.h"

bool CorporateAccountProcessor::processPayment(double) { return true; }
bool CorporateAccountProcessor::refund(const CustomString&) { return true; }
CustomString CorporateAccountProcessor::generateTransactionId() { return CustomString("CORP-001"); }
CustomString CorporateAccountProcessor::getProcessorType() const { return CustomString("Corporate"); }
bool CorporateAccountProcessor::validateDetails() const { return true; }