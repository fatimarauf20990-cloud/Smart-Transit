#ifndef MAINDASHBOARDWINDOW_H
#define MAINDASHBOARDWINDOW_H

#include <QWidget>

class QPushButton;

class MainDashboardWindow : public QWidget {
    Q_OBJECT

public:
    explicit MainDashboardWindow(QWidget *parent = nullptr);

private:
    QPushButton *liveMapButton;
    QPushButton *fleetButton;
    QPushButton *routeButton;
    QPushButton *tripButton;
    QPushButton *dispatchButton;
    QPushButton *ticketButton;
    QPushButton *staffButton;
    QPushButton *maintenanceButton;
    QPushButton *reportButton;
};

#endif // MAINDASHBOARDWINDOW_H

