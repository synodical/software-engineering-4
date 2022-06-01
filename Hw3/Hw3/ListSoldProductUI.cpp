#include "ListSoldProductUI.h"
#include "ListSoldProduct.h"
#include "File.h"
#include "Product.h"
#include <vector>
#include <algorithm>

ListSoldProductUI::ListSoldProductUI()
{

}

void ListSoldProductUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ListSoldProductUI::SelectShowList(ListSoldProduct* listSoldProduct, File* file)
{
	std::vector<Product*> data = listSoldProduct->ShowSellerProducts();

	sort(data.begin(), data.end(), [](Product* first, Product* second) -> bool
		{
			return first->GetProductName() < second->GetProductName();
		});

	file->ofs << "3.3. 판매 완료 상품 조회" << '\n';
	for (Product* product : data)
	{
		if (product->GetAmount() == 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetTotalSales() << " " << product->GetAverageSatisfaction() << '\n';
		}
	}
	file->ofs << '\n';
}