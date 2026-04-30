#pragma once
#include <iostream>

class CustomString {
private:
    char* m_data;
    int m_length;

public:
    CustomString();
    CustomString(const char* str);
    CustomString(const CustomString& other);
    CustomString& operator=(const CustomString& other);
    ~CustomString();

    int length() const;
    const char* c_str() const;

    CustomString operator+(const CustomString& other) const;
    CustomString operator+(const char* str) const;
    CustomString& operator+=(const CustomString& other);
    CustomString& operator+=(const char* str);

    bool operator==(const CustomString& other) const;
    bool operator!=(const CustomString& other) const;

    friend std::ostream& operator<<(std::ostream& os, const CustomString& str);
};