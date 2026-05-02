#pragma once
#include "TransitException.h"

class ContainerException : public TransitException {
public:
    ContainerException(const CustomString& msg, const CustomString& src, int code = 9000)
        : TransitException(msg, src, code) {}

    CustomString getCategory() const override {
        return "CONTAINER_EXCEPTION";
    }
};
