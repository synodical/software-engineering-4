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
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void ShowSalesSatisticsUI::SelectShowSatistics(ShowSalesSatistics* showSalesSatistics, File* file)
{
	std::vector<Product*> data = showSalesSatistics->ShowSellerProducts();

	file->ofs << "5.1 �Ǹ� ��ǰ ���" << '\n';
	for (Product* product : data)
	{
		if (product->GetTotalSales() > 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetPrice() * product->GetTotalSales() << " " << product->GetAverageSatisfaction() << '\n';
		}
	}
	file->ofs << '\n';
}
