#include "city.h"

void City::Read(const QJsonObject& json){
       name = json["name"].toString();
       coordW = json["coordW"].toDouble();
       coordH = json["coordH"].toDouble();
}

