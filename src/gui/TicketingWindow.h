#ifndef TICKETINGWINDOW_H
#define TICKETINGWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class TicketingWindow : public QWidget
{
    Q_OBJECT

public:
    explicit TicketingWindow(QWidget *parent = nullptr);

private slots:
    void handleTicket();

private:
    QLineEdit *nameEdit;
    QLineEdit *routeEdit;
    QLineEdit *fareEdit;
    QPushButton *bookButton;
};

#endif