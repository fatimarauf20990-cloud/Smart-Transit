#include "entities/AdminUser.h"
#include <iostream>

AdminUser::AdminUser() : m_isSuperAdmin(false) {}

AdminUser::AdminUser(bool superAdmin) : m_isSuperAdmin(superAdmin) {}

CustomString AdminUser::getType() const { return CustomString("AdminUser"); }

void AdminUser::print() const {
    std::cout << "Admin User (Super): " << (m_isSuperAdmin ? "Yes" : "No") << "\n";
}