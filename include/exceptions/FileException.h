#pragma once
#include "TransitException.h"

class FileException : public TransitException {
public:
    FileException(const CustomString& msg, const CustomString& src, int code = 7000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "FILE_EXCEPTION";
    }
};
