#ifndef STAFFMANAGEMENTWINDOW_H
#define STAFFMANAGEMENTWINDOW_H

#include <QWidget>
#include <QSet>   // 🔐 for duplicate checking

class QLineEdit;
class QPushButton;

class StaffManagementWindow : public QWidget
{
    Q_OBJECT

public:
    explicit StaffManagementWindow(QWidget *parent = nullptr);

private slots:
    void handleAddStaff();

private:
    QLineEdit *nameEdit;
    QLineEdit *roleEdit;
    QPushButton *addButton;

    QSet<QString> staffNames;   // 🔐 store added staff (no duplicates)
    int invalidAttempts = 0;    // 🔐 security limit
};

#endif
