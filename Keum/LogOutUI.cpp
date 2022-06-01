#include "LogOutUI.h"
#include "LogOut.h"
#include "Member.h"
#include "File.h"

LogOutUI::LogOutUI()
{

}

void LogOutUI::StartInterface()
{
	// GUI경우 PopUp창 생성, 이번 과제에서는 파일 입출력이기 때문에 아무런 기능을 하지 않음.
}

void LogOutUI::SelectLogOut(LogOut* logOut, File* file)
{
	// 파일 입력 받기
	std::string id = "";

	file->ifs.seekg(file->readed);
	file->ifs >> id;
	file->readed = file->ifs.tellg();

	if (logOut->TryLogOut(id)) {
		file->ofs << "2.2. 로그아웃" << '\n';
		file->ofs << "> " << id << " " << '\n' << '\n';
	}
	else {
		file->ofs << "2.2. 로그아웃" << '\n';
		file->ofs << "로그아웃 실패" << '\n' << '\n';
	}


}