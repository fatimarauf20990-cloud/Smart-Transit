#include "controllers/AuthController.h"

bool AuthController::login(const CustomString& user, const CustomString& pass) {
    // Basic check: if user is admin and pass is 1234
    if (user == "admin" && pass == "1234") {
        m_isLoggedIn = true;
        return true;
    }
    return false;
}

void AuthController::logout() {
    m_isLoggedIn = false;
}