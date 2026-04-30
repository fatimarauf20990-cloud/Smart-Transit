#include "entities/MaintenanceTech.h"
#include <iostream>

MaintenanceTech::MaintenanceTech() : m_skillArea("General") {}

MaintenanceTech::MaintenanceTech(const CustomString& skill) : m_skillArea(skill) {}

CustomString MaintenanceTech::getType() const { return CustomString("MaintenanceTech"); }

void MaintenanceTech::print() const {
    std::cout << "Maintenance Skill: " << m_skillArea << "\n";
}