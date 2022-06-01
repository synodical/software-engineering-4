#include "CreateProductUI.h"
#include "CreateProduct.h"
#include "File.h"

CreateProductUI::CreateProductUI()
{

}

void CreateProductUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void CreateProductUI::GetProductForm(CreateProduct* createProduct, File* file)
{
	// 파일 입력 받기
	std::string productName = "";
	std::string companyName = "";
	std::string price = "";
	std::string amount = "";

	file->ifs.seekg(file->readed);
	file->ifs >> productName >> companyName >> price >> amount;
	file->readed = file->ifs.tellg();

	createProduct->AddNewProduct(productName, companyName, price, amount);

	file->ofs << "3.1 판매 의류 등록" << '\n';
	file->ofs << "> " << productName << " " << companyName << " " << price << " " << amount << " " << '\n' << '\n';
}