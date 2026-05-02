#include "DispatchConsoleWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

DispatchConsoleWindow::DispatchConsoleWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Dispatch Console");

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Title
    QLabel *title = new QLabel("Dispatch Vehicle to Trip");
    layout->addWidget(title);

    // Vehicle input
    vehicleEdit = new QLineEdit(this);
    vehicleEdit->setPlaceholderText("Vehicle ID");
    layout->addWidget(vehicleEdit);

    // Trip input
    tripEdit = new QLineEdit(this);
    tripEdit->setPlaceholderText("Trip ID");
    layout->addWidget(tripEdit);

    // Button
    dispatchButton = new QPushButton("Dispatch", this);
    layout->addWidget(dispatchButton);

    // Connect
    connect(dispatchButton, &QPushButton::clicked,
            this, &DispatchConsoleWindow::handleDispatch);
}

// ===== Logic =====
void DispatchConsoleWindow::handleDispatch()
{
    QString vehicle = vehicleEdit->text().trimmed();
    QString trip = tripEdit->text().trimmed();

    // Validation
    if (vehicle.isEmpty() || trip.isEmpty()) {
        QMessageBox::warning(this, "Error", "Fill all fields");
        return;
    }

    // Save data using DataManager
    QString data = "Dispatch: Vehicle " + vehicle + " -> Trip " + trip;
    DataManager::saveData("dispatch.txt", data);

    // Show success message
    QMessageBox::information(this, "Success",
                             "Vehicle " + vehicle + " assigned to Trip " + trip);

    // Clear fields
    vehicleEdit->clear();
    tripEdit->clear();
}