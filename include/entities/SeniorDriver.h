#pragma once
#include "entities/Driver.h"

class SeniorDriver : public Driver {
    int m_mentorCount;
    int m_awardCount;

public:
    SeniorDriver();
    SeniorDriver(int mentors, int awards);

    CustomString getType() const override;
    void print() const override;
};
