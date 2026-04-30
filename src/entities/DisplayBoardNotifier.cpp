#include "entities/DisplayBoardNotifier.h"

void DisplayBoardNotifier::sendNotification(const CustomString& msg, int) {
    log = CustomString("Display: ") + msg;
}

CustomString DisplayBoardNotifier::getDeliveryLog() const {
    return log;
}

void DisplayBoardNotifier::clearLog() {
    log = CustomString("");
}