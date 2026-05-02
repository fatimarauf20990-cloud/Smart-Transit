#pragma once
#include "exceptions/TransitException.h"

class PaymentException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Payment Gateway"; }
};

class TicketException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Ticketing System"; }
};

class PaymentDeclinedException : public PaymentException { public: using PaymentException::PaymentException; };
class InsufficientFundsException : public PaymentException { public: using PaymentException::PaymentException; };
class InvalidCardException : public PaymentException { public: using PaymentException::PaymentException; };

class InvalidTicketException : public TicketException { public: using TicketException::TicketException; };
class TicketAlreadyUsedException : public TicketException { public: using TicketException::TicketException; };