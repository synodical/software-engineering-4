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
	// ���� �Է� �ޱ�
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (withdrawal->TryWithdrawal(id)) {
		file->ofs << "1.2. ȸ��Ż��" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.2. ȸ��Ż��" << '\n';
		file->ofs << "ȸ��Ż�� ����" << '\n' << '\n';
	}


}