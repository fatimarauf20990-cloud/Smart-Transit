#include "entities/StaffMember.h"
#include <iostream>

StaffMember::StaffMember()
    : m_employeeId("N/A"),
    m_department("N/A"),
    m_role(StaffRole::DRIVER),
    m_joiningDate(1, 1, 2000),
    m_baseSalary(0),
    m_isOnDuty(false) {}

StaffMember::StaffMember(const CustomString& empId,
                         const CustomString& dept,
                         StaffRole role,
                         const CustomDate& joinDate,
                         double salary,
                         bool onDuty)
    : m_employeeId(empId),
    m_department(dept),
    m_role(role),
    m_joiningDate(joinDate),
    m_baseSalary(salary),
    m_isOnDuty(onDuty) {}

CustomString StaffMember::getEmployeeId() const { return m_employeeId; }
StaffRole StaffMember::getRole() const { return m_role; }
bool StaffMember::isOnDuty() const { return m_isOnDuty; }

CustomString StaffMember::getType() const {
    return CustomString("StaffMember");
}

void StaffMember::print() const {
    std::cout << "Employee ID: " << m_employeeId << "\n";
    std::cout << "Department: " << m_department << "\n";
    std::cout << "Salary: " << m_baseSalary << "\n";
    std::cout << "On Duty: " << (m_isOnDuty ? "Yes" : "No") << "\n";
}