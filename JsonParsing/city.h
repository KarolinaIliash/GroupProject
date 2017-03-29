#ifndef CITY_H
#define CITY_H
#include <QJsonValue>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>

class City
{
private:
    double coordW;
    double coordH;
    QString name;
public:
    void Read(const QJsonObject& json);
};

#endif // CITY_H
