#pragma once
#include "exceptions/TransitException.h"

class ValidationException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Data Validation"; }
};

class ContainerException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Data Structure"; }
};

class InvalidDateException : public ValidationException { public: using ValidationException::ValidationException; };
class InvalidTimeException : public ValidationException { public: using ValidationException::ValidationException; };
class InvalidCoordinateException : public ValidationException { public: using ValidationException::ValidationException; };
class EmptyStringException : public ValidationException { public: using ValidationException::ValidationException; };

class IndexOutOfBoundsException : public ContainerException { public: using ContainerException::ContainerException; };
class NullNodeException : public ContainerException { public: using ContainerException::ContainerException; };
class GraphVertexNotFoundException : public ContainerException { public: using ContainerException::ContainerException; };
