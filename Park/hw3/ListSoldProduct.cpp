#include "ListSoldProduct.h"
#include "ListSoldProductUI.h"
#include "DataBase.h"
#include "Product.h"
#include "Seller.h"

ListSoldProduct::ListSoldProduct()
{
	this->dataBase = nullptr;
	listSoldProductUI = new ListSoldProductUI();
	listSoldProductUI->StartInterface();
}

ListSoldProduct::ListSoldProduct(DataBase* dataBase)
{
	this->dataBase = dataBase;
	listSoldProductUI = new ListSoldProductUI();
	listSoldProductUI->StartInterface();
}

// Communication 수정필요 (product->GetProductDetails() 삭제, Get()함수로 모두 대체)( 수정이유 : 불필요 및 복잡 )
std::vector<Product*> ListSoldProduct::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}
