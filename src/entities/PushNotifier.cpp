#include "entities/PushNotifier.h"

void PushNotifier::sendNotification(const CustomString& msg, int) {
    log = CustomString("Push: ") + msg;
}

CustomString PushNotifier::getDeliveryLog() const {
    return log;
}

void PushNotifier::clearLog() {
    log = CustomString("");
}