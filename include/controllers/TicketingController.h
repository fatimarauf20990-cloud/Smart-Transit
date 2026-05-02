#pragma once
#include <vector>
#include "entities/Ticket.h"
#include "entities/IFareCalculator.h"

class TicketingController {
private:
    std::vector<Ticket*> m_tickets;

public:
    ~TicketingController();
    // Apply fare strategy via IFareCalculator polymorphism
    double calculateFare(IFareCalculator* calculator, double distance, int passengers, bool peak);
    void issueTicket(Ticket* t);
};