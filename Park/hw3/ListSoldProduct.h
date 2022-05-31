#pragma once
#include <vector>

class DataBase;
class ListSoldProductUI;
class Product;

class ListSoldProduct
{
public:
	ListSoldProduct();
	ListSoldProduct(DataBase* dataBase);

	ListSoldProductUI* GetListSoldProductUI() { return listSoldProductUI; }

	std::vector<Product*> ShowSellerProducts();

private:
	DataBase* dataBase;
	ListSoldProductUI* listSoldProductUI;
};

