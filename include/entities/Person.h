#pragma once
#include "entities/Entity.h"
#include "utilities/CustomString.h"
#include "utilities/CustomDate.h"

class Person : public Entity {
protected:
    CustomString m_firstName;
    CustomString m_lastName;
    CustomString m_cnic;
    CustomString m_contactNumber;
    CustomString m_email;
    CustomString m_address;
    CustomDate m_dob;

public:
    Person();
    Person(const CustomString& first,
           const CustomString& last,
           const CustomString& cnic,
           const CustomString& contact,
           const CustomString& email,
           const CustomString& address,
           const CustomDate& dob);

    // Getters
    CustomString getFirstName() const;
    CustomString getLastName() const;

    // Overridden functions
    CustomString getType() const override;
    void print() const override;
};