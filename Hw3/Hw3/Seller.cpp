#include "Seller.h"
#include "Product.h"

Seller::Seller()
{

}

void Seller::CreateSellingProduct(Product* newProduct)
{
	productsList.push_back(newProduct);
}