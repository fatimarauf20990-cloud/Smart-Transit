#pragma once
#include "entities/StaffMember.h"

class Conductor : public StaffMember {
    int m_ticketMachineId;

public:
    Conductor();
    Conductor(int machineId);

    CustomString getType() const override;
    void print() const override;
};
