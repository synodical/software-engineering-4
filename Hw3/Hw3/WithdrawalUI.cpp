#include "WithdrawalUI.h"
#include "Withdrawal.h"
#include "Member.h"
#include "File.h"

WithdrawalUI::WithdrawalUI()
{

}

void WithdrawalUI::StartInterface()
{
    // GUI��� PopUpâ ����, �̹� ���������� ���� ������̱� ������ �ƹ��� ����� ���� ����.
}

void WithdrawalUI::SelectWithdrawal(Withdrawal* withdrawal, File* file)
{
    std::string result = withdrawal->TryWithdrawal();
    file->ofs << "1.2. ȸ��Ż��" << '\n';
    file->ofs << "> " << result << " " << "\n" << "\n";
}