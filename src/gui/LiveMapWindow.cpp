#include "LiveMapWindow.h"
#include "FleetManagementWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

LiveMapWindow::LiveMapWindow(QWidget *parent) : QWidget(parent) {
    setWindowTitle("Live Map");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("Live Map View");
    layout->addWidget(title);

    fleetButton = new QPushButton("Go to Fleet Management");
    layout->addWidget(fleetButton);

    connect(fleetButton, &QPushButton::clicked, [=]() {
        FleetManagementWindow *window = new FleetManagementWindow();
        window->show();
        this->close();
    });
}