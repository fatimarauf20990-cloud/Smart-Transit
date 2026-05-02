#ifndef DATAMANAGER_H
#define DATAMANAGER_H

#include <QString>

class DataManager
{
public:
    static void saveData(const QString &fileName, const QString &data);
    static QString loadData(const QString &fileName);
};

#endif