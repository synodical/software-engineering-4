#include "LogOut.h"
#include "LogOutUI.h"
#include "DataBase.h"
#include "Member.h"
//#include "Seller.h"
//#include "Buyer.h"
#include <vector>

LogOut::LogOut() {
	this->dataBase = nullptr;
	logOutUI = new LogOutUI();
	logOutUI->StartInterface();
}

LogOut::LogOut(DataBase* dataBase) {
	this->dataBase = dataBase;
	logOutUI = new LogOutUI();
	logOutUI->StartInterface();
}



bool LogOut::TryLogOut(std::string id)
{
	int i = 0;
	int index = this->dataBase->GetLogInIndex();

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

	if (this->dataBase->GetLogInIndex() == -1) {
		return false;
	}

	if (id == memberList[index]->GetID()) {
		this->dataBase->SetLogInIndex(-1);
		return true;
	}
	else {
		return false;
	}

}
