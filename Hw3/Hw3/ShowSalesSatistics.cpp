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

// Communication 수정필요 (seller->GetAllList(), Product->GetAnalysis() 삭제, GetSoldList()로 대체)( 수정이유 : 과제2 명세서 기준, 판매 완료 제품 통계임 )
std::vector<Product*> ShowSalesSatistics::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}