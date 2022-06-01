#include "WithdrawalUI.h"
#include "Withdrawal.h"
#include "Member.h"
#include "File.h"

WithdrawalUI::WithdrawalUI()
{

}

void WithdrawalUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void WithdrawalUI::SelectWithdrawal(Withdrawal* withdrawal, File* file)
{
	// 파일 입력 받기
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (withdrawal->TryWithdrawal(id)) {
		file->ofs << "1.2. 회원탈퇴" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "1.2. 회원탈퇴" << '\n';
		file->ofs << "회원탈퇴 실패" << '\n' << '\n';
	}


}