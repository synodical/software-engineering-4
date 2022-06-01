#pragma once
#include <vector>

class DataBase;
class ListSellingProductUI;
class Product;

class ListSellingProduct
{
public:
	ListSellingProduct();
	ListSellingProduct(DataBase* dataBase);

	ListSellingProductUI* GetListSellingProductUI() { return listSellingProductUI; }

	std::vector<Product*> ShowSellerProducts();

private:
	DataBase* dataBase;
	ListSellingProductUI* listSellingProductUI;
};