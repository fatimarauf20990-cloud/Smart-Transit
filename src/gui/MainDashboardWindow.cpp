#include "MainDashboardWindow.h"
#include "LiveMapWindow.h"
#include "FleetManagementWindow.h"
#include "RouteBuilderWindow.h"
#include "TripSchedulerWindow.h"
#include "DispatchConsoleWindow.h"
#include "TicketingWindow.h"
#include "StaffManagementWindow.h"
#include "MaintenanceWindow.h"
#include "ReportDashboardWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>

MainDashboardWindow::MainDashboardWindow(QWidget *parent)
    : QWidget(parent) {

    setWindowTitle("Dashboard");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("SmartTransit Dashboard");
    layout->addWidget(title);
    routeButton = new QPushButton("Route Builder");
    layout->addWidget(routeButton);
    tripButton = new QPushButton("Trip Scheduler");
    layout->addWidget(tripButton);

    dispatchButton = new QPushButton("Dispatch Console");
    layout->addWidget(dispatchButton);
    ticketButton = new QPushButton("Ticketing");
    layout->addWidget(ticketButton);
    staffButton = new QPushButton("Staff Management");
    layout->addWidget(staffButton);
    maintenanceButton = new QPushButton("Maintenance");
    layout->addWidget(maintenanceButton);
    reportButton = new QPushButton("Reports");
    layout->addWidget(reportButton);
    // Buttons
    liveMapButton = new QPushButton("Live Map");
    fleetButton = new QPushButton("Fleet Management");

    layout->addWidget(liveMapButton);
    layout->addWidget(fleetButton);

    // Navigation
    connect(liveMapButton, &QPushButton::clicked, [=]() {
        LiveMapWindow *window = new LiveMapWindow();
        window->show();
        this->close();
    });

    connect(fleetButton, &QPushButton::clicked, [=]() {
        FleetManagementWindow *window = new FleetManagementWindow();
        window->show();
        this->close();
    });
    connect(routeButton, &QPushButton::clicked, [=]() {
        RouteBuilderWindow *w = new RouteBuilderWindow();
        w->show();
    });
    connect(tripButton, &QPushButton::clicked, [=]() {
        TripSchedulerWindow *w = new TripSchedulerWindow();
        w->show();
    });
    connect(dispatchButton, &QPushButton::clicked, [=]() {
        DispatchConsoleWindow *w = new DispatchConsoleWindow();
        w->show();
    });
    connect(ticketButton, &QPushButton::clicked, [=]() {
        TicketingWindow *w = new TicketingWindow();
        w->show();
    });
    connect(staffButton, &QPushButton::clicked, [=]() {
        StaffManagementWindow *w = new StaffManagementWindow();
        w->show();
    });
    connect(maintenanceButton, &QPushButton::clicked, [=]() {
        MaintenanceWindow *w = new MaintenanceWindow();
        w->show();
    });
    connect(reportButton, &QPushButton::clicked, [=]() {
        ReportDashboardWindow *w = new ReportDashboardWindow();
        w->show();
    });
}