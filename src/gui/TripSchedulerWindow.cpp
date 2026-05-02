#include "TripSchedulerWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

TripSchedulerWindow::TripSchedulerWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Trip Scheduler");

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Title
    QLabel *title = new QLabel("Schedule Trip");
    layout->addWidget(title);

    // Route
    routeEdit = new QLineEdit(this);
    routeEdit->setPlaceholderText("Route Name");
    layout->addWidget(routeEdit);

    // Date
    dateEdit = new QLineEdit(this);
    dateEdit->setPlaceholderText("Date (DD/MM/YYYY)");
    layout->addWidget(dateEdit);

    // Time
    timeEdit = new QLineEdit(this);
    timeEdit->setPlaceholderText("Time (HH:MM)");
    layout->addWidget(timeEdit);

    // Button
    scheduleButton = new QPushButton("Schedule Trip", this);
    layout->addWidget(scheduleButton);

    // Connect
    connect(scheduleButton, &QPushButton::clicked,
            this, &TripSchedulerWindow::handleScheduleTrip);
}

// ===== Logic =====
void TripSchedulerWindow::handleScheduleTrip()
{
    QString route = routeEdit->text().trimmed();
    QString date = dateEdit->text().trimmed();
    QString time = timeEdit->text().trimmed();

    // Validation
    if (route.isEmpty() || date.isEmpty() || time.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }

    // ✅ SAVE DATA
    QString data = "Trip: " + route + " | " + date + " | " + time;
    DataManager::saveData("trips.txt", data);

    // ✅ SUCCESS MESSAGE
    QString info = "Trip Scheduled:\nRoute: " + route +
                   "\nDate: " + date +
                   "\nTime: " + time;

    QMessageBox::information(this, "Success", info);

    // ✅ CLEAR FIELDS
    routeEdit->clear();
    dateEdit->clear();
    timeEdit->clear();
}