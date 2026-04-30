#pragma once
#include "entities/StaffMember.h"

class AdminUser : public StaffMember {
    bool m_isSuperAdmin;

public:
    AdminUser();
    AdminUser(bool superAdmin);

    CustomString getType() const override;
    void print() const override;
};
