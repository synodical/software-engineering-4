#include "Buyer.h"

Buyer::Buyer()
{
	productsList.clear();
}

void Buyer::CreatePurchaseProduct(Product* newProduct)
{
	productsList.emplace_back(newProduct);
}
