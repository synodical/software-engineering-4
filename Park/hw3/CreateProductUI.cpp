#include "CreateProductUI.h"
#include "CreateProduct.h"
#include "File.h"

CreateProductUI::CreateProductUI()
{

}

void CreateProductUI::StartInterface()
{
	// GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void CreateProductUI::GetProductForm(CreateProduct* createProduct, File* file)
{
	// ���� �Է� �ޱ�
	std::string productName = "";
	std::string companyName = "";
	std::string price = "";
	std::string amount = "";

	file->ifs.seekg(file->readed);
	file->ifs >> productName >> companyName >> price >> amount;
	file->readed = file->ifs.tellg();

	createProduct->AddNewProduct(productName, companyName, price, amount);

	file->ofs << "3.1 �Ǹ� �Ƿ� ���" << '\n';
	file->ofs << "> " << productName << " " << companyName << " " << price << " " << amount << " " << '\n' << '\n';
}