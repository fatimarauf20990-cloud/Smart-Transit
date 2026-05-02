#ifndef TRIPSCHEDULERWINDOW_H
#define TRIPSCHEDULERWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class TripSchedulerWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TripSchedulerWindow(QWidget *parent = nullptr);

private slots:
    void handleScheduleTrip();

private:
    QLineEdit *routeEdit;
    QLineEdit *dateEdit;
    QLineEdit *timeEdit;
    QPushButton *scheduleButton;
};

#endif