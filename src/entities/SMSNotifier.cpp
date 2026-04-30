#include "entities/SMSNotifier.h"

void SMSNotifier::sendNotification(const CustomString& msg, int) {
    log = CustomString("SMS: ") + msg;
}

CustomString SMSNotifier::getDeliveryLog() const {
    return log;
}

void SMSNotifier::clearLog() {
    log = CustomString("");
}