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

	std::string TryWithdrawal();

private:
	DataBase* dataBase;
	WithdrawalUI* withdrawalUI;
};