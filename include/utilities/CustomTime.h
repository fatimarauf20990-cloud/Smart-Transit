#pragma once

class CustomTime {
private:
    int hour;
    int minute;
    int second;

public:
    CustomTime();
    CustomTime(int h, int m, int s);

    bool isValid() const;
    void print() const;
};