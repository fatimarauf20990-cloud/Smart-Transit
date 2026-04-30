#pragma once
#include "entities/INotifiable.h"

class SMSNotifier : public INotifiable {
private:
    CustomString log;
public:
    void sendNotification(const CustomString& msg, int priority) override;
    CustomString getDeliveryLog() const override;
    void clearLog() override;
};
