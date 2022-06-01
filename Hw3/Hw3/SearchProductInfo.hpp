#pragma once

#include <iostream>
#include "DataBase.h"
#include "Product.h"

class SearchProductInfo {
private:
    DataBase * database;
public:
    SearchProductInfo();
    SearchProductInfo(DataBase* database);
    Product* ShowProductDetails(std::string productName);
};