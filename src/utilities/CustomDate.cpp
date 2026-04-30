#include "utilities/CustomDate.h"
#include <iostream>

CustomDate::CustomDate() {
    day = 1;
    month = 1;
    year = 2000;
}

CustomDate::CustomDate(int d, int m, int y) {
    day = d;
    month = m;
    year = y;
}

bool CustomDate::isValid() const {
    if (year < 1) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false; // simple check
    return true;
}

void CustomDate::print() const {
    std::cout << day << "/" << month << "/" << year;
}