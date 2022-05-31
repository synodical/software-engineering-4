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

// Communication �����ʿ� (product->GetProductDetails() ����, Get()�Լ��� ��� ��ü)( �������� : ���ʿ� �� ���� )
std::vector<Product*> ListSellingProduct::ShowSellerProducts()
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	return seller->GetProductList();
}
