#include "ShowSalesSatistics.h"
#include "ShowSalesSatisticsUI.h"
#include "DataBase.h"
#include "Product.h"
#include "Seller.h"

ShowSalesSatistics::ShowSalesSatistics()
{
	this->dataBase = nullptr;
	showSalesSatisticsUI = new ShowSalesSatisticsUI();
	showSalesSatisticsUI->StartInterface();
}

ShowSalesSatistics::ShowSalesSatistics(DataBase* dataBase)
{
	this->dataBase = dataBase;
	showSalesSatisticsUI = new ShowSalesSatisticsUI();
	showSalesSatisticsUI->StartInterface();
}

// Communication �����ʿ� (seller->GetAllList(), Product->GetAnalysis() ����, GetSoldList()�� ��ü)( �������� : ����2 ���� ����, �Ǹ� �Ϸ� ��ǰ ����� )
std::vector<Product*> ShowSalesSatistics::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}