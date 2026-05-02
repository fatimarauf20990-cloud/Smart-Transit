#ifndef ROUTEBUILDERWINDOW_H
#define ROUTEBUILDERWINDOW_H

#include <QWidget>

class QLineEdit;
class QPushButton;

class RouteBuilderWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RouteBuilderWindow(QWidget *parent = nullptr);

private slots:
    void handleCreateRoute();

private:
    QLineEdit *startPointEdit;
    QLineEdit *endPointEdit;
    QPushButton *createButton;
};

#endif // ROUTEBUILDERWINDOW_H