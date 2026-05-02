#include "StaffManagementWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

StaffManagementWindow::StaffManagementWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Staff Management");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("Add Staff Member");
    layout->addWidget(title);

    // Name input
    nameEdit = new QLineEdit(this);
    nameEdit->setPlaceholderText("Staff Name");
    layout->addWidget(nameEdit);

    // Role input
    roleEdit = new QLineEdit(this);
    roleEdit->setPlaceholderText("Role (Driver, Conductor, etc.)");
    layout->addWidget(roleEdit);

    // Button
    addButton = new QPushButton("Add Staff", this);
    layout->addWidget(addButton);

    connect(addButton, &QPushButton::clicked,
            this, &StaffManagementWindow::handleAddStaff);
}

// ===== Logic =====
void StaffManagementWindow::handleAddStaff()
{
    QString name = nameEdit->text().trimmed();
    QString role = roleEdit->text().trimmed();

    // 🔴 1. Empty validation
    if (name.isEmpty() || role.isEmpty()) {
        invalidAttempts++;
        QMessageBox::warning(this, "Error", "All fields are required");
    }
    // 🔴 2. Name must start with a letter
    else if (!name[0].isLetter()) {
        invalidAttempts++;
        QMessageBox::warning(this, "Error", "Name must start with a letter");
    }
    // 🔴 3. Duplicate check
    else if (staffNames.contains(name)) {
        invalidAttempts++;
        QMessageBox::warning(this, "Error", "Staff already exists");
    }
    else {
        // ✅ SUCCESS
        staffNames.insert(name);
        invalidAttempts = 0;

        // ✅ SAVE DATA (FIXED POSITION)
        QString data = "Staff: " + name + " (" + role + ")";
        DataManager::saveData("staff.txt", data);

        QString info = "Staff Added:\nName: " + name +
                       "\nRole: " + role;

        QMessageBox::information(this, "Success", info);

        // Clear fields
        nameEdit->clear();
        roleEdit->clear();
    }

    // 🔐 Security limit
    if (invalidAttempts >= 3) {
        QMessageBox::critical(this, "Blocked", "Too many invalid attempts!");
        addButton->setEnabled(false);
    }
}