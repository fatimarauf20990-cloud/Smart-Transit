#pragma once
#include "entities/StaffMember.h"

class Dispatcher : public StaffMember {
    int m_controlRoomId;

public:
    Dispatcher();
    Dispatcher(int roomId);

    CustomString getType() const override;
    void print() const override;
};
