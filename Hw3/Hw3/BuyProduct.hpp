#pragma once
#include <iostream>

class DataBase;
class Product;

class BuyProduct
{ // declare
private:
    DataBase * database;
public:
    BuyProduct();
    BuyProduct(DataBase* database);
    void sendBuyRequest(Product * curProduct);
};