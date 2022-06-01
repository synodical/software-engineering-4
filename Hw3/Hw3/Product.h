#pragma once
#include <iostream>

class Product
{
public:
	Product();
	Product(std::string productName, std::string companyName, std::string price, std::string amount);

	void SetSellerID(std::string sellerID) { this->sellerID = sellerID; }
	void SetProductDetails() { this->amount -= 1; this->totalSales += 1; }
	void SetProductDetails(float score);

	std::string GetProductName() { return productName; }
	std::string GetSellerID() { return sellerID; }
	std::string GetCompanyName() { return companyName; }
	int GetPrice() { return price; }
	int GetAmount() { return amount; }
	float GetAverageSatisfaction() { return averageSatisfaction; }
	int GetTotalSales() { return totalSales; }

private:
	std::string productName;
	std::string sellerID;
	std::string companyName;
	int price;
	int amount;	// 남은 수량
	float averageSatisfaction;
	int totalSales;	// 판매된 수량
	int evaluateNum; // 평가 개수
	float totalScore; // 총점
};

