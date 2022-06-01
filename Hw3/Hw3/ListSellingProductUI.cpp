#include "ListSellingProductUI.h"
#include "ListSellingProduct.h"
#include "File.h"
#include "Product.h"
#include <vector>

ListSellingProductUI::ListSellingProductUI()
{

}

void ListSellingProductUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void ListSellingProductUI::SelectShowList(ListSellingProduct* listSellingProduct, File* file)
{
	std::vector<Product*> data = listSellingProduct->ShowSellerProducts();

	file->ofs << "3.2 ��� ��ǰ ��ȸ" << '\n';
	for (Product* product : data)
	{
		if (product->GetAmount() - product->GetTotalSales() > 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetAmount() - product->GetTotalSales() << '\n';
		}
	}
	file->ofs << '\n';
}