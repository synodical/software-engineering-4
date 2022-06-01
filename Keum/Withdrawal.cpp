#include "Withdrawal.h"
#include "WithdrawalUI.h"
#include "DataBase.h"
#include "Member.h"
//#include "Seller.h"
//#include "Buyer.h"

using namespace std;

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

bool Withdrawal::TryWithdrawal(std::string id)
{
	int i = 0;

	std::vector<Member*> memberList = (this->dataBase)->GetMemberList();
	

	for (i = 0; i < memberList.size(); i++) {
		if (memberList[i]->GetID() == id) {
			this->dataBase->DeleteMember(i);
			return true;
		}
	}
	return false;

}
