#include "TicketingWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

TicketingWindow::TicketingWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Ticketing");

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Title
    QLabel *title = new QLabel("Book Ticket");
    layout->addWidget(title);

    // Name
    nameEdit = new QLineEdit(this);
    nameEdit->setPlaceholderText("Passenger Name");
    layout->addWidget(nameEdit);

    // Route
    routeEdit = new QLineEdit(this);
    routeEdit->setPlaceholderText("Route");
    layout->addWidget(routeEdit);

    // Fare
    fareEdit = new QLineEdit(this);
    fareEdit->setPlaceholderText("Fare");
    layout->addWidget(fareEdit);

    // Button
    bookButton = new QPushButton("Book Ticket", this);
    layout->addWidget(bookButton);

    // Connect
    connect(bookButton, &QPushButton::clicked,
            this, &TicketingWindow::handleTicket);
}

// ===== Logic =====
void TicketingWindow::handleTicket()
{
    QString name = nameEdit->text().trimmed();
    QString route = routeEdit->text().trimmed();
    QString fare = fareEdit->text().trimmed();

    // Validation
    if (name.isEmpty() || route.isEmpty() || fare.isEmpty()) {
        QMessageBox::warning(this, "Error", "Fill all fields");
        return;
    }

    // Optional: check fare is numeric
    if (fare.toDouble() <= 0) {
        QMessageBox::warning(this, "Error", "Fare must be a valid number");
        return;
    }

    // ✅ SAVE DATA
    QString data = "Ticket: " + name + " | " + route + " | " + fare;
    DataManager::saveData("tickets.txt", data);

    // ✅ SUCCESS MESSAGE
    QString info = "Ticket Booked:\nPassenger: " + name +
                   "\nRoute: " + route +
                   "\nFare: " + fare;

    QMessageBox::information(this, "Success", info);

    // ✅ CLEAR FIELDS
    nameEdit->clear();
    routeEdit->clear();
    fareEdit->clear();
}