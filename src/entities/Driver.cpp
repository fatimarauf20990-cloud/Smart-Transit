#include "entities/Driver.h"
#include <iostream>

Driver::Driver() : m_licenseNo("N/A"), m_experienceYears(0) {}

Driver::Driver(const CustomString& license, int years)
    : m_licenseNo(license), m_experienceYears(years) {}

CustomString Driver::getType() const { return CustomString("Driver"); }

void Driver::print() const {
    std::cout << "Driver License: " << m_licenseNo
              << " Experience: " << m_experienceYears << " years\n";
}