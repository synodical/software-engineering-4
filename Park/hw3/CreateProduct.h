#pragma once
#include <iostream>

class DataBase;
class CreateProductUI;

class CreateProduct
{
public:
	CreateProduct();
	CreateProduct(DataBase* dataBase);

	CreateProductUI* GetCreatProductUI() { return createProductUI; }

	void AddNewProduct(std::string productName, std::string companyName, std::string price, std::string amount);

private:
	DataBase* dataBase;
	CreateProductUI* createProductUI;
};