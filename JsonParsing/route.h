#ifndef ROUTE_H
#define ROUTE_H
#include"city.h"


class Route{
private:
    std::vector<City> path;
public:
    void ReadPath(const QJsonArray& jsonArray);
};

#endif // ROUTE_H
