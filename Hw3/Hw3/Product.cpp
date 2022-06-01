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
	evaluateNum = 0;
	totalScore = 0;
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
	this->evaluateNum = 0;
	this->totalScore = 0;
}

void Product::SetProductDetails(float score)
{
	this->totalScore += score;
	this->evaluateNum += 1;
	this->averageSatisfaction = this->totalScore / this->evaluateNum;
}
