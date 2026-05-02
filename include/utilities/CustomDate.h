#pragma once

class CustomDate {
private:
    int day;
    int month;
    int year;

public:
    CustomDate();
    CustomDate(int d, int m, int y);

    bool isValid() const;
    void print() const;
    class Custom_Date {
        // ... your fields ...
    public:
        // ... other methods ...

        static CustomDate today(); // Add this line!
    };
};
