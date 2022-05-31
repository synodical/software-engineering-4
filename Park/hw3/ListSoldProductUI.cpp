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
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void ListSoldProductUI::SelectShowList(ListSoldProduct* listSoldProduct, File* file)
{
	std::vector<Product*> data = listSoldProduct->ShowSellerProducts();

	// 오름차순 정렬 필요? ( 과제2 명세서에 명시됨 )
	file->ofs << "3.3 판매 완료 상품 조회" << '\n';
	for (Product* product : data)
	{
		if (product->GetAmount() - product->GetTotalSales() == 0)
		{
			file->ofs << "> " << product->GetProductName() << " " << product->GetCompanyName() << " " << product->GetPrice() << " " << product->GetTotalSales() << " " << product->GetAverageSatisfaction() << '\n';
		}
	}
	file->ofs << '\n';
}