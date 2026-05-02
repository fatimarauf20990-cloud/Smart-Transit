#pragma once

#include <exception>
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"

class TransitException : public std::exception {
protected:
    CustomString m_message;
    CustomString m_source;
    CustomDate m_timestamp;
    int m_code;

public:
    TransitException(const CustomString& msg,
                     const CustomString& src,
                     int code);

    virtual const char* what() const noexcept override;

    virtual CustomString getCategory() const = 0;

    CustomString getMessage() const;
    int getCode() const;
};