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

// Communication �����ʿ� (product->GetProductDetails() ����, Get()�Լ��� ��� ��ü)( �������� : ���ʿ� �� ���� )
std::vector<Product*> ListSoldProduct::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}
