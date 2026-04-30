#include "utilities/CustomString.h"
#include <cstring>

// Helper
static char* make_empty() {
    char* p = new char[1];
    p[0] = '\0';
    return p;
}

CustomString::CustomString() {
    m_data = make_empty();
    m_length = 0;
}

CustomString::CustomString(const char* str) {
    if (!str) {
        m_data = make_empty();
        m_length = 0;
        return;
    }
    m_length = std::strlen(str);
    m_data = new char[m_length + 1];
    std::strcpy(m_data, str);
}

CustomString::CustomString(const CustomString& other) {
    m_length = other.m_length;
    m_data = new char[m_length + 1];
    std::strcpy(m_data, other.m_data);
}

CustomString& CustomString::operator=(const CustomString& other) {
    if (this == &other) return *this;
    delete[] m_data;
    m_length = other.m_length;
    m_data = new char[m_length + 1];
    std::strcpy(m_data, other.m_data);
    return *this;
}

CustomString::~CustomString() {
    delete[] m_data;
}

int CustomString::length() const {
    return m_length;
}

const char* CustomString::c_str() const {
    return m_data;
}

// Concatenation
CustomString CustomString::operator+(const CustomString& other) const {
    CustomString result;
    delete[] result.m_data;

    result.m_length = m_length + other.m_length;
    result.m_data = new char[result.m_length + 1];

    std::strcpy(result.m_data, m_data);
    std::strcat(result.m_data, other.m_data);

    return result;
}

CustomString CustomString::operator+(const char* str) const {
    if (!str) return *this;
    CustomString temp(str);
    return *this + temp;
}

CustomString& CustomString::operator+=(const CustomString& other) {
    *this = *this + other;
    return *this;
}

CustomString& CustomString::operator+=(const char* str) {
    *this = *this + str;
    return *this;
}

bool CustomString::operator==(const CustomString& other) const {
    return std::strcmp(m_data, other.m_data) == 0;
}

bool CustomString::operator!=(const CustomString& other) const {
    return !(*this == other);
}

std::ostream& operator<<(std::ostream& os, const CustomString& str) {
    os << str.m_data;
    return os;
}