#include "SignUp.h"
#include "SignUpUI.h"
#include "DataBase.h"
#include "Member.h"
#include "Seller.h"
#include "Buyer.h"

SignUp::SignUp()
{
	this->dataBase = nullptr;
	signUpUI = new SignUpUI();
	signUpUI->StartInterface();
}

SignUp::SignUp(DataBase* dataBase)
{
	this->dataBase = dataBase;
	signUpUI = new SignUpUI();
	signUpUI->StartInterface();
}

void SignUp::AddNewMember(std::string name, std::string ssn, std::string id, std::string password)
{
	Member* member = new Member(name, ssn, id, password);
	Seller* seller = new Seller();
	Buyer* buyer = new Buyer();
	dataBase->AddMember(member);
	dataBase->AddSeller(seller);
	dataBase->AddBuyer(buyer);
}
