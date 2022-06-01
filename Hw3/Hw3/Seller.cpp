#include "Seller.h"
#include "Product.h"

Seller::Seller()
{
	productsList.clear();
}

void Seller::CreateSellingProduct(Product* newProduct)
{
	productsList.push_back(newProduct);
}