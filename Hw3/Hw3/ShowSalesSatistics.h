#pragma once
#include <vector>

class DataBase;
class ShowSalesSatisticsUI;
class Product;

class ShowSalesSatistics
{
public:
	ShowSalesSatistics();
	ShowSalesSatistics(DataBase* dataBase);

	ShowSalesSatisticsUI* GetShowSalesSatisticsUI() { return showSalesSatisticsUI; }

	std::vector<Product*> ShowSellerProducts();

private:
	DataBase* dataBase;
	ShowSalesSatisticsUI* showSalesSatisticsUI;
};

