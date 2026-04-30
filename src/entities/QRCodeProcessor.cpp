#include "entities/QRCodeProcessor.h"

bool QRCodeProcessor::processPayment(double) { return true; }
bool QRCodeProcessor::refund(const CustomString&) { return true; }
CustomString QRCodeProcessor::generateTransactionId() { return CustomString("QR-001"); }
CustomString QRCodeProcessor::getProcessorType() const { return CustomString("QRCode"); }
bool QRCodeProcessor::validateDetails() const { return true; }