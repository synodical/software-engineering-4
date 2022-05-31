#include "CreateProduct.h"
#include "CreateProductUI.h"
#include "DataBase.h"
#include "Product.h"
#include "Seller.h"

CreateProduct::CreateProduct()
{
	this->dataBase = nullptr;
	createProductUI = new CreateProductUI();
	createProductUI->StartInterface();
}

CreateProduct::CreateProduct(DataBase* dataBase)
{
	this->dataBase = dataBase;
	createProductUI = new CreateProductUI();
	createProductUI->StartInterface();
}

// 동일제품 들어오는 것에 대한 대처 필요?
void CreateProduct::AddNewProduct(std::string productName, std::string companyName, std::string price, std::string amount)
{
	Seller* seller = dataBase->GetSellerList()[dataBase->GetLogInIndex()];
	Product* newProduct = new Product(productName, companyName, price, amount);
	newProduct->SetSellerID(dataBase->GetMemberList()[dataBase->GetLogInIndex()]->GetID());
	seller->CreateSellingProduct(newProduct);
}