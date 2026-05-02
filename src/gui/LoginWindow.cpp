#include "LoginWindow.h"
#include "MainDashboardWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

LoginWindow::LoginWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Login");

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Title
    QLabel *title = new QLabel("SmartTransit Login");
    layout->addWidget(title);

    // Username
    usernameEdit = new QLineEdit(this);
    usernameEdit->setPlaceholderText("Username");
    layout->addWidget(usernameEdit);

    // Password
    passwordEdit = new QLineEdit(this);
    passwordEdit->setPlaceholderText("Password");
    passwordEdit->setEchoMode(QLineEdit::Password);  // 🔐 hide password
    layout->addWidget(passwordEdit);

    // Button
    loginButton = new QPushButton("Login", this);
    layout->addWidget(loginButton);

    // Connect
    connect(loginButton, &QPushButton::clicked,
            this, &LoginWindow::handleLogin);
}

// ===== Login Logic =====
void LoginWindow::handleLogin()
{
    QString username = usernameEdit->text().trimmed();
    QString password = passwordEdit->text();

    // 1️⃣ Empty check
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please enter username and password");
        return;
    }

    // 2️⃣ Authentication
    if (username == "admin" && password == "1234") {

        loginAttempts = 0;

        QMessageBox::information(this, "Success", "Login Successful");

        MainDashboardWindow *dashboard = new MainDashboardWindow();
        dashboard->show();
        this->close();
    }
    else {
        loginAttempts++;

        if (loginAttempts >= 3) {
            QMessageBox::critical(this, "Blocked", "Too many failed attempts!");
            loginButton->setEnabled(false);   // 🔐 disable further attempts
        } else {
            QMessageBox::warning(this, "Error", "Invalid username or password");
        }
    }
}