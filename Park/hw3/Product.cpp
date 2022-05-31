#include "Product.h"
#include <string>

Product::Product()
{
	productName = "";
	sellerID = "";
	companyName = "";
	price = 0;
	amount = 0;
	averageSatisfaction = 0.0f;
	totalSales = 0;
}

Product::Product(std::string productName, std::string companyName, std::string price, std::string amount)
{
	this->productName = productName;
	this->sellerID = "";
	this->companyName = companyName;
	this->price = std::stoi(price);
	this->amount = std::stoi(amount);
	this->averageSatisfaction = 0.0f;
	this->totalSales = 0;
}