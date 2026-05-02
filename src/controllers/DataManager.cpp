#include "controllers/DataManager.h"
#include <QFile>
#include <QTextStream>

void DataManager::saveData(const QString &fileName, const QString &data)
{
    QFile file(fileName);

    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << data << "\n";
        file.close();
    }
}

QString DataManager::loadData(const QString &fileName)
{
    QFile file(fileName);
    QString content;

    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        content = in.readAll();
        file.close();
    }

    return content;
}