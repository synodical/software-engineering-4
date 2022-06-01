#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "DataBase.h"
#include "Member.h"

Withdrawal::Withdrawal()
{
    this->dataBase = nullptr;
    withdrawalUI = new WithdrawalUI();
    withdrawalUI->StartInterface();
}

Withdrawal::Withdrawal(DataBase* dataBase)
{
    this->dataBase = dataBase;
    withdrawalUI = new WithdrawalUI();
    withdrawalUI->StartInterface();
}

std::string Withdrawal::TryWithdrawal()
{
    int index = this->dataBase->GetLogInIndex();
    std::string blank = "";

    std::vector<Member*> memberList = (this->dataBase)->GetMemberList();

    if ((this->dataBase)->GetLogInIndex() == -1) {
        return blank;
    }
    else {
        std::string returnId = memberList[index]->GetID();
        (this->dataBase)->DeleteMember(index);
        (this->dataBase)->DeleteSeller(index);
        (this->dataBase)->DeleteBuyer(index);
        (this->dataBase)->SetLogInIndex(-1);
        return returnId;
    }
}