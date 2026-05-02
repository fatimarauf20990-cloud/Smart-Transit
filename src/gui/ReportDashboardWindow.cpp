#include "ReportDashboardWindow.h"
#include "controllers/DataManager.h"

#include <QVBoxLayout>
#include <QPushButton>
#include <QLabel>
#include <QTextEdit>
#include <QMessageBox>

ReportDashboardWindow::ReportDashboardWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Reports Dashboard");

    QVBoxLayout *layout = new QVBoxLayout(this);

    QLabel *title = new QLabel("System Reports");
    layout->addWidget(title);

    reportButton = new QPushButton("Generate Report", this);
    layout->addWidget(reportButton);

    reportDisplay = new QTextEdit(this);
    reportDisplay->setReadOnly(true);
    layout->addWidget(reportDisplay);

    connect(reportButton, &QPushButton::clicked,
            this, &ReportDashboardWindow::generateReport);
}

// ===== Logic =====
void ReportDashboardWindow::generateReport()
{
    QString report;

    report += "===== SMART TRANSIT REPORT =====\n\n";

    report += "---- ROUTES ----\n";
    report += DataManager::loadData("routes.txt") + "\n";

    report += "---- TRIPS ----\n";
    report += DataManager::loadData("trips.txt") + "\n";

    report += "---- DISPATCH ----\n";
    report += DataManager::loadData("dispatch.txt") + "\n";

    report += "---- TICKETS ----\n";
    report += DataManager::loadData("tickets.txt") + "\n";

    report += "---- STAFF ----\n";
    report += DataManager::loadData("staff.txt") + "\n";

    report += "---- MAINTENANCE ----\n";
    report += DataManager::loadData("maintenance.txt") + "\n";

    reportDisplay->setText(report);

    QMessageBox::information(this, "Report", "Report Generated Successfully");
}