#ifndef REPORTDASHBOARDWINDOW_H
#define REPORTDASHBOARDWINDOW_H

#include <QWidget>

class QPushButton;
class QTextEdit;

class ReportDashboardWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ReportDashboardWindow(QWidget *parent = nullptr);

private slots:
    void generateReport();

private:
    QPushButton *reportButton;
    QTextEdit *reportDisplay;

    int invalidAttempts = 0;   // 🔐 security
};

#endif
