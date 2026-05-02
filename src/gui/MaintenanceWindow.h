#ifndef MAINTENANCEWINDOW_H
#define MAINTENANCEWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class MaintenanceWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MaintenanceWindow(QWidget *parent = nullptr);

private slots:
    void handleMaintenance();

private:
    QLineEdit *vehicleEdit;
    QLineEdit *issueEdit;
    QLineEdit *costEdit;
    QPushButton *submitButton;

    int invalidAttempts = 0;   // 🔐 security
};

#endif