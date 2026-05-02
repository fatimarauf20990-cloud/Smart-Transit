#pragma once
#include <vector>
#include "entities/StaffMember.h"

class StaffController {
private:
    std::vector<StaffMember*> m_staff;

public:
    ~StaffController();
    void addStaff(StaffMember* s);
    void checkLicenseExpiries(); // Alert logic for staff
};