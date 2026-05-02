#pragma once
#include "exceptions/TransitException.h"

class StaffException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "Staff Management"; }
};

class FileException : public TransitException {
public:
    using TransitException::TransitException;
    CustomString getCategory() const override { return "File System"; }
};

class DriverNotFoundException : public StaffException { public: using StaffException::StaffException; };
class LicenseExpiredException : public StaffException { public: using StaffException::StaffException; };
class UnauthorisedAccessException : public StaffException { public: using StaffException::StaffException; };

class FileNotFoundException : public FileException { public: using FileException::FileException; };
class FileCorruptionException : public FileException { public: using FileException::FileException; };