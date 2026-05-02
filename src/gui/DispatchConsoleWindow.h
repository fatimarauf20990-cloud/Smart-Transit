#ifndef DISPATCHCONSOLEWINDOW_H
#define DISPATCHCONSOLEWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class DispatchConsoleWindow : public QWidget
{
    Q_OBJECT

public:
    explicit DispatchConsoleWindow(QWidget *parent = nullptr);

private slots:
    void handleDispatch();

private:
    QLineEdit *vehicleEdit;
    QLineEdit *tripEdit;
    QPushButton *dispatchButton;
};

#endif