#include "entities/Ticket.h"
#include <iostream>

Ticket::Ticket()
    : m_ticketId(0), m_passengerId(0), m_tripId(0),
    m_fareAmount(0.0), m_issueDate(1,1,2000), m_issueTime(0,0,0) {}

Ticket::Ticket(int id, int passenger, int trip, double fare,
               const CustomDate& date, const CustomTime& time)
    : m_ticketId(id), m_passengerId(passenger), m_tripId(trip),
    m_fareAmount(fare), m_issueDate(date), m_issueTime(time) {}

void Ticket::print() const {
    std::cout << "Ticket " << m_ticketId << " Fare: " << m_fareAmount << "\n";
}