#pragma once
#include "TransitException.h"

class TicketException : public TransitException {
public:
    TicketException(const CustomString& msg, const CustomString& src, int code = 6000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "TICKET_EXCEPTION";
    }
};