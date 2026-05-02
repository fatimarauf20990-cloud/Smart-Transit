#ifndef FLEETMANAGEMENTWINDOW_H
#define FLEETMANAGEMENTWINDOW_H

#include <QWidget>

class QPushButton;

class FleetManagementWindow : public QWidget {
    Q_OBJECT

public:
    explicit FleetManagementWindow(QWidget *parent = nullptr);

private:
    QPushButton *backButton;
};

#endif // FLEETMANAGEMENTWINDOW_H