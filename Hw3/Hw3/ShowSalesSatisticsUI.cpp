#include "ShowSalesSatisticsUI.h"
#include "ShowSalesSatistics.h"
#include "File.h"
#include "Product.h"
#include <vector>

ShowSalesSatisticsUI::ShowSalesSatisticsUI()
{

}

void ShowSalesSatisticsUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ShowSalesSatisticsUI::SelectShowSatistics(ShowSalesSatistics* showSalesSatistics, File* file)
{
	std::vector<Product*> data = showSalesSatistics->ShowSellerProducts();

	file->ofs << "5.1 판매 상품 통계" << '\n';
	for (Product* product : data)
	{
		if (product->GetTotalSales() > 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetPrice() * product->GetTotalSales() << " " << product->GetAverageSatisfaction() << '\n';
		}
	}
	file->ofs << '\n';
}
