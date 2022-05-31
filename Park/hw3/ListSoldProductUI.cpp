#include "ListSoldProductUI.h"
#include "ListSoldProduct.h"
#include "File.h"
#include "Product.h"
#include <vector>

ListSoldProductUI::ListSoldProductUI()
{

}

void ListSoldProductUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void ListSoldProductUI::SelectShowList(ListSoldProduct* listSoldProduct, File* file)
{
	std::vector<Product*> data = listSoldProduct->ShowSellerProducts();

	// �������� ���� �ʿ�? ( ����2 ������ ��õ� )
	file->ofs << "3.3 �Ǹ� �Ϸ� ��ǰ ��ȸ" << '\n';
	for (Product* product : data)
	{
		if (product->GetAmount() - product->GetTotalSales() == 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetTotalSales() << " " << product->GetAverageSatisfaction() << '\n';
		}
	}
	file->ofs << '\n';
}