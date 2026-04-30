#pragma once
#include "entities/StaffMember.h"

class Driver : public StaffMember {
    CustomString m_licenseNo;
    int m_experienceYears;

public:
    Driver();
    Driver(const CustomString& license, int years);

    CustomString getType() const override;
    void print() const override;
};
