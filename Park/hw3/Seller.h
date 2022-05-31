#pragma once
#include "Member.h"
#include <vector>

class Product;

class Seller : public Member
{
public:
	Seller();

	void CreateSellingProduct(Product* newProduct);
	std::vector<Product*> GetProductList() { return productsList; }

private:
	std::vector<Product*> productsList;
};