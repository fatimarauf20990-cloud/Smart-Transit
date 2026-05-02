#include "MaintenanceWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

MaintenanceWindow::MaintenanceWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Maintenance");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("Vehicle Maintenance");
    layout->addWidget(title);

    // Vehicle ID
    vehicleEdit = new QLineEdit(this);
    vehicleEdit->setPlaceholderText("Vehicle ID");
    layout->addWidget(vehicleEdit);

    // Issue
    issueEdit = new QLineEdit(this);
    issueEdit->setPlaceholderText("Issue Description");
    layout->addWidget(issueEdit);

    // Cost
    costEdit = new QLineEdit(this);
    costEdit->setPlaceholderText("Cost");
    layout->addWidget(costEdit);

    // Button
    submitButton = new QPushButton("Submit", this);
    layout->addWidget(submitButton);

    connect(submitButton, &QPushButton::clicked,
            this, &MaintenanceWindow::handleMaintenance);
}

// ===== Logic =====
void MaintenanceWindow::handleMaintenance()
{
    QString vehicle = vehicleEdit->text().trimmed();
    QString issue = issueEdit->text().trimmed();
    QString cost = costEdit->text().trimmed();

    bool isNumber;
    cost.toDouble(&isNumber);

    // 🔴 Validation
    if (vehicle.isEmpty() || issue.isEmpty() || cost.isEmpty()) {
        invalidAttempts++;
        QMessageBox::warning(this, "Error", "All fields are required");
    }
    else if (!isNumber) {
        invalidAttempts++;
        QMessageBox::warning(this, "Error", "Cost must be a valid number");
    }
    else {
        // ✅ Success
        invalidAttempts = 0;

        // ✅ SAVE DATA (IMPORTANT FIX)
        QString data = "Maintenance: " + vehicle + " | " + issue + " | " + cost;
        DataManager::saveData("maintenance.txt", data);

        QString info = "Maintenance Recorded:\nVehicle: " + vehicle +
                       "\nIssue: " + issue +
                       "\nCost: " + cost;

        QMessageBox::information(this, "Success", info);

        vehicleEdit->clear();
        issueEdit->clear();
        costEdit->clear();
    }

    // 🔐 Security
    if (invalidAttempts >= 3) {
        QMessageBox::critical(this, "Blocked", "Too many invalid attempts!");
        submitButton->setEnabled(false);
    }
}