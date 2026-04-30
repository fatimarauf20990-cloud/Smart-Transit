#include "entities/SeniorDriver.h"
#include <iostream>

SeniorDriver::SeniorDriver() : m_mentorCount(0), m_awardCount(0) {}

SeniorDriver::SeniorDriver(int mentors, int awards)
    : m_mentorCount(mentors), m_awardCount(awards) {}

CustomString SeniorDriver::getType() const { return CustomString("SeniorDriver"); }

void SeniorDriver::print() const {
    std::cout << "SeniorDriver Mentors: " << m_mentorCount
              << " Awards: " << m_awardCount << "\n";
}