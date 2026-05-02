#include "controllers/StaffController.h"

StaffController::~StaffController() {
    for (auto s : m_staff) delete s; // Memory management[cite: 2]
}

void StaffController::addStaff(StaffMember* s) {
    if (s) m_staff.push_back(s); // CRUD operation[cite: 2]
}

void StaffController::checkLicenseExpiries() {
    // Logic to alert if StaffMember::isLicenseValid() returns false[cite: 2]
}