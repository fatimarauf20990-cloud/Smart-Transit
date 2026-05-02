#include "FleetManagementWindow.h"
#include "LoginWindow.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

FleetManagementWindow::FleetManagementWindow(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Fleet Management");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("Fleet Management System");
    layout->addWidget(title);

    backButton = new QPushButton("Back to Login");
    layout->addWidget(backButton);

    connect(backButton, &QPushButton::clicked, [=]() {
        LoginWindow *window = new LoginWindow();
        window->show();
        this->close();
    });
}