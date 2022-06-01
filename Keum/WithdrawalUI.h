#pragma once
#include "Member.h"

class Withdrawal;
class File;

class WithdrawalUI
{
public:
	WithdrawalUI();

	void StartInterface();
	void SelectWithdrawal(Withdrawal* withdrawal, File* file);
private:
	Withdrawal* withdrawal;
};

