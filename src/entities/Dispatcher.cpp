#include "entities/Dispatcher.h"
#include <iostream>

Dispatcher::Dispatcher() : m_controlRoomId(0) {}

Dispatcher::Dispatcher(int roomId) : m_controlRoomId(roomId) {}

CustomString Dispatcher::getType() const { return CustomString("Dispatcher"); }

void Dispatcher::print() const {
    std::cout << "Dispatcher Control Room: " << m_controlRoomId << "\n";
}