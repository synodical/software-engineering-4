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

bool SignUp::AddNewMember(std::string name, std::string ssn, std::string id, std::string password)
{
	int i = 0;

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->GetID() == id) {
			return false;
		}
	}

	Member* member = new Member(name, ssn, id, password);
	Seller* seller = new Seller();
	Buyer* buyer = new Buyer();
	dataBase->AddMember(member);
	dataBase->AddSeller(seller);
	dataBase->AddBuyer(buyer);
	return true;
}
