#pragma once
#include <iostream>

class DataBase;
class Product;

class EvaluateSatisfaction
{ 
private:
    DataBase * database;
public:
    EvaluateSatisfaction();
    EvaluateSatisfaction(DataBase* database);
    Product* UpdateSatisfactionInfo(std::string productName, float score);
};