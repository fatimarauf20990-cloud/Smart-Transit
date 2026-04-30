#pragma once
#include "entities/StaffMember.h"

class MaintenanceTech : public StaffMember {
    CustomString m_skillArea;

public:
    MaintenanceTech();
    MaintenanceTech(const CustomString& skill);

    CustomString getType() const override;
    void print() const override;
};