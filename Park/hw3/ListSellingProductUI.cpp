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
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ListSellingProductUI::SelectShowList(ListSellingProduct* listSellingProduct, File* file)
{
	std::vector<Product*> data = listSellingProduct->ShowSellerProducts();

	file->ofs << "3.2 등록 상품 조회" << '\n';
	for (Product* product : data)
	{
		if (product->GetAmount() - product->GetTotalSales() > 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetAmount() - product->GetTotalSales() << '\n';
		}
	}
	file->ofs << '\n';
}