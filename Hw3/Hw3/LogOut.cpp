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

std::string LogOut::TryLogOut()
{
    int index = this->dataBase->GetLogInIndex();
    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();
    this->dataBase->SetLogInIndex(-1);

    return memberList[index]->GetID();
}