#pragma once

#include <iostream>
#include <vector>
#include "DataBase.h"
#include "Product.h"

class CheckPurchaseList {
private:
    DataBase * database;
public:
    CheckPurchaseList();
    CheckPurchaseList(DataBase* database);
    std::vector<Product*> ShowPurchaseList();
};