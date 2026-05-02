#include "RouteBuilderWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QMessageBox>

RouteBuilderWindow::RouteBuilderWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Route Builder");

    QVBoxLayout *layout = new QVBoxLayout(this);

    // Title
    QLabel *title = new QLabel("Create New Route");
    layout->addWidget(title);

    // Start input
    startPointEdit = new QLineEdit(this);
    startPointEdit->setPlaceholderText("Start Location");
    layout->addWidget(startPointEdit);

    // End input
    endPointEdit = new QLineEdit(this);
    endPointEdit->setPlaceholderText("End Location");
    layout->addWidget(endPointEdit);

    // Button
    createButton = new QPushButton("Create Route", this);
    layout->addWidget(createButton);

    // Connect button
    connect(createButton, &QPushButton::clicked,
            this, &RouteBuilderWindow::handleCreateRoute);
}

// ===== Logic =====
void RouteBuilderWindow::handleCreateRoute()
{
    QString start = startPointEdit->text();
    QString end = endPointEdit->text();

    if (start.isEmpty() || end.isEmpty()) {
        QMessageBox::warning(this, "Error", "Please fill all fields");
        return;
    }

    // ✅ SAVE DATA (FIXED POSITION)
    QString data = "Route: " + start + " -> " + end;
    DataManager::saveData("routes.txt", data);

    // ✅ SUCCESS MESSAGE
    QMessageBox::information(this, "Success",
                             "Route created from " + start + " to " + end);

    // ✅ CLEAR INPUTS
    startPointEdit->clear();
    endPointEdit->clear();
}