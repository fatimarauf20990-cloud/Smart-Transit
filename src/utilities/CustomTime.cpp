#include "utilities/CustomTime.h"
#include <iostream>

CustomTime::CustomTime() {
    hour = 0;
    minute = 0;
    second = 0;
}

CustomTime::CustomTime(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
}

bool CustomTime::isValid() const {
    if (hour < 0 || hour > 23) return false;
    if (minute < 0 || minute > 59) return false;
    if (second < 0 || second > 59) return false;
    return true;
}

void CustomTime::print() const {
    std::cout << hour << ":" << minute << ":" << second;
}