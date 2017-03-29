#ifndef CITY_H
#define CITY_H
#include <QJsonValue>
#include<QJsonArray>
#include<QJsonDocument>
#include<QJsonObject>

class City
{
private:
    double lat;
    double lng;
    QString name;
public:
    void Read(const QJsonObject& json);
};

#endif // CITY_H
