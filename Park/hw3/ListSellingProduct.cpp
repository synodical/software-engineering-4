#include "ListSellingProduct.h"
#include "ListSellingProductUI.h"
#include "DataBase.h"
#include "Product.h"
#include "Seller.h"

ListSellingProduct::ListSellingProduct()
{
	this->dataBase = nullptr;
	ListSellingProductUI* listSellingProductUI = new ListSellingProductUI();
	listSellingProductUI->StartInterface();
}

ListSellingProduct::ListSellingProduct(DataBase* dataBase)
{
	this->dataBase = dataBase;
	ListSellingProductUI* listSellingProductUI = new ListSellingProductUI();
	listSellingProductUI->StartInterface();
}

// Communication 수정필요 (product->GetProductDetails() 삭제, Get()함수로 모두 대체)( 수정이유 : 불필요 및 복잡 )
std::vector<Product*> ListSellingProduct::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}
