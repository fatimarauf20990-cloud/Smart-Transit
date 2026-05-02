#ifndef LIVEMAPWINDOW_H
#define LIVEMAPWINDOW_H

#include <QWidget>

class QPushButton;

class LiveMapWindow : public QWidget {
    Q_OBJECT

public:
    explicit LiveMapWindow(QWidget *parent = nullptr);

private:
    QPushButton *fleetButton;
};

#endif // LIVEMAPWINDOW_H