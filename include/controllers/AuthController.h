#pragma once
#include "utilities/CustomString.h"

class AuthController {
private:
    bool m_isLoggedIn;
    AuthController() : m_isLoggedIn(false) {} // Private for Singleton

public:
    static AuthController& getInstance() {
        static AuthController instance;
        return instance;
    }

    bool login(const CustomString& user, const CustomString& pass);
    void logout();
    bool checkStatus() { return m_isLoggedIn; }
};