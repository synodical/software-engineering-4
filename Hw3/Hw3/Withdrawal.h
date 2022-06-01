#pragma once
#include <iostream>

class DataBase;
class WithdrawalUI;

class Withdrawal
{
public:
	Withdrawal();
	Withdrawal(DataBase* dataBase);

	WithdrawalUI* GetWithdrawalUI() { return withdrawalUI; }

	bool TryWithdrawal(std::string id);

private:
	DataBase* dataBase;
	WithdrawalUI* withdrawalUI;
};

