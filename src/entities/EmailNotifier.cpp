#include "entities/EmailNotifier.h"

void EmailNotifier::sendNotification(const CustomString& msg, int) {
    log = CustomString("Email: ") + msg;
}

CustomString EmailNotifier::getDeliveryLog() const {
    return log;
}

void EmailNotifier::clearLog() {
    log = CustomString("");
}