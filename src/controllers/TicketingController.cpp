#include "controllers/TicketingController.h"

TicketingController::~TicketingController() {
    for (auto t : m_tickets) delete t;
}

double TicketingController::calculateFare(IFareCalculator* calculator, double dist, int pass, bool peak) {
    return calculator->calculateFare(dist, pass, peak); // Polymorphic call
}

void TicketingController::issueTicket(Ticket* t) {
    m_tickets.push_back(t);
}