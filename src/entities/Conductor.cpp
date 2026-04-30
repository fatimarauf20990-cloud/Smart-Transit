#include "entities/Conductor.h"
#include <iostream>

Conductor::Conductor() : m_ticketMachineId(-1) {}

Conductor::Conductor(int machineId) : m_ticketMachineId(machineId) {}

CustomString Conductor::getType() const { return CustomString("Conductor"); }

void Conductor::print() const {
    std::cout << "Conductor Machine ID: " << m_ticketMachineId << "\n";
}