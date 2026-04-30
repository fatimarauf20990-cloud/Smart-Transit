#pragma once
#include "entities/Person.h"
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"

enum class StaffRole {
    DRIVER,
    CONDUCTOR,
    DISPATCHER,
    MAINTENANCE,
    TRAFFIC_CONTROLLER,
    ADMIN
};

class StaffMember : public Person {
protected:
    CustomString m_employeeId;
    CustomString m_department;
    StaffRole m_role;
    CustomDate m_joiningDate;
    double m_baseSalary;
    bool m_isOnDuty;

public:
    StaffMember();
    StaffMember(const CustomString& empId,
                const CustomString& dept,
                StaffRole role,
                const CustomDate& joinDate,
                double salary,
                bool onDuty);

    // Getters
    CustomString getEmployeeId() const;
    StaffRole getRole() const;
    bool isOnDuty() const;

    // Overrides
    CustomString getType() const override;
    void print() const override;
};
