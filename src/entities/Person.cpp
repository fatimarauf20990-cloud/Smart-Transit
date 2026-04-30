#include "entities/Person.h"
#include <iostream>

Person::Person()
    : m_firstName("N/A"),
    m_lastName("N/A"),
    m_cnic("N/A"),
    m_contactNumber("N/A"),
    m_email("N/A"),
    m_address("N/A"),
    m_dob(1, 1, 2000) {}

Person::Person(const CustomString& first,
               const CustomString& last,
               const CustomString& cnic,
               const CustomString& contact,
               const CustomString& email,
               const CustomString& address,
               const CustomDate& dob)
    : m_firstName(first),
    m_lastName(last),
    m_cnic(cnic),
    m_contactNumber(contact),
    m_email(email),
    m_address(address),
    m_dob(dob) {}

CustomString Person::getFirstName() const { return m_firstName; }
CustomString Person::getLastName() const { return m_lastName; }

CustomString Person::getType() const {
    return CustomString("Person");
}

void Person::print() const {
    std::cout << "Name: " << m_firstName << " " << m_lastName << "\n";
    std::cout << "CNIC: " << m_cnic << "\n";
    std::cout << "Contact: " << m_contactNumber << "\n";
    std::cout << "Email: " << m_email << "\n";
    std::cout << "Address: " << m_address << "\n";
    std::cout << "DOB: "; m_dob.print(); std::cout << "\n";
}