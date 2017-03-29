#ifndef CITY_H
#define CITY_H
#include <QJsonValue>

class City
{
private:
    double coordW;
    double coordH;
    std::string name;
public:
    void Read(const QJsonObject& json);
};

#endif // CITY_H
