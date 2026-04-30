#pragma once
#include "utilities/CustomString.h"

class INotifiable {
public:
    virtual ~INotifiable() = default;

    virtual void sendNotification(const CustomString& msg, int priority) = 0;
    virtual CustomString getDeliveryLog() const = 0;
    virtual void clearLog() = 0;
};