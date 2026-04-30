#pragma once
#include "utilities/CustomDate.h"
#include "utilities/CustomTime.h"

class Ticket {
    int m_ticketId;
    int m_passengerId;
    int m_tripId;
    double m_fareAmount;
    CustomDate m_issueDate;
    CustomTime m_issueTime;

public:
    Ticket();
    Ticket(int id, int passenger, int trip, double fare,
           const CustomDate& date, const CustomTime& time);
    void print() const;
};
