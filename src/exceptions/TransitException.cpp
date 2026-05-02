#include "exceptions/TransitException.h"

TransitException::TransitException(const CustomString& msg,
                                   const CustomString& src,
                                   int code)
    : m_message(msg),
    m_source(src),
    m_code(code),
    m_timestamp(CustomDate(1, 1, 2024))
{
}

const char* TransitException::what() const noexcept {
    return m_message.c_str();
}

CustomString TransitException::getMessage() const {
    return m_message;
}

int TransitException::getCode() const {
    return m_code;
}
